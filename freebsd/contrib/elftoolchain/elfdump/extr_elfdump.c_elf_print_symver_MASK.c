
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section {scalar_t__ type; int name; } ;
struct elfdump {size_t shnum; int snl; struct section* sl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct elfdump*,struct section*) ;
 int FUNC_2 (struct elfdump*,struct section*) ;
 int FUNC_3 (struct elfdump*,int ) ;

__attribute__((used)) static void
FUNC_4(struct elfdump *VAR_2)
{
 struct section *VAR_3;
 size_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->shnum; VAR_4++) {
  VAR_3 = &VAR_2->sl[VAR_4];
  if (!FUNC_0(&VAR_2->snl) && !FUNC_3(VAR_2, VAR_3->name))
   continue;
  if (VAR_3->type == VAR_0)
   FUNC_1(VAR_2, VAR_3);
  if (VAR_3->type == VAR_1)
   FUNC_2(VAR_2, VAR_3);
 }
}

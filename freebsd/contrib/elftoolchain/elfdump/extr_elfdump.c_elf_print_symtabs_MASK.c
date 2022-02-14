
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elfdump {size_t shnum; TYPE_1__* sl; int snl; } ;
struct TYPE_2__ {scalar_t__ type; int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct elfdump*,size_t) ;
 scalar_t__ FUNC_2 (struct elfdump*,int ) ;

__attribute__((used)) static void
FUNC_3(struct elfdump *VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->shnum; VAR_3++)
  if ((VAR_2->sl[VAR_3].type == VAR_1 ||
      VAR_2->sl[VAR_3].type == VAR_0) &&
      (FUNC_0(&VAR_2->snl) || FUNC_2(VAR_2, VAR_2->sl[VAR_3].name)))
   FUNC_1(VAR_2, VAR_3);
}

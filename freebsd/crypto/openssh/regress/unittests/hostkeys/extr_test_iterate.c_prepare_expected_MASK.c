
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ keytype; int key; } ;
struct expected {TYPE_1__ l; int * key_file; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct expected *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_1[VAR_3].key_file == ((void*)0))
   continue;

  if (VAR_1[VAR_3].l.keytype == VAR_0)
   continue;

  FUNC_0(FUNC_1(
      FUNC_2(VAR_1[VAR_3].key_file), &VAR_1[VAR_3].l.key,
      ((void*)0)), 0);
 }
}

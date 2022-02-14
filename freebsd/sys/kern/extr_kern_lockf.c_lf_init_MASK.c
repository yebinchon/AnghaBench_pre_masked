
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; int lock; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_6)
{
 int VAR_7;

 FUNC_2(&VAR_3, "lock states lock");
 FUNC_0(&VAR_2);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  FUNC_2(&VAR_1[VAR_7].lock, "lock owners lock");
  FUNC_0(&VAR_1[VAR_7].list);
 }

 FUNC_2(&VAR_5, "owner graph lock");
 FUNC_1(&VAR_4);
}

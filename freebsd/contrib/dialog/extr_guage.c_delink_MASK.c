
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ MY_OBJ ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_0(MY_OBJ * VAR_1)
{
    MY_OBJ *VAR_2 = VAR_0;
    MY_OBJ *VAR_3 = 0;
    while (VAR_2 != 0) {
 if (VAR_2 == VAR_1) {
     if (VAR_3 != 0) {
  VAR_3->next = VAR_2->next;
     } else {
  VAR_0 = VAR_2->next;
     }
     break;
 }
 VAR_3 = VAR_2;
 VAR_2 = VAR_2->next;
    }
}

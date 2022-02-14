
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fn_node {struct fn_node* next; int (* fn ) () ;} ;
struct TYPE_2__ {struct fn_node* head; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;

void FUNC_1() {
  struct fn_node* VAR_1 = VAR_0.head;

  while (VAR_1) {
    VAR_1->fn();
    VAR_1 = VAR_1->next;
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fn_node {scalar_t__ id; struct fn_node* next; } ;
struct fn_list {struct fn_node* tail; struct fn_node* head; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fn_node*) ;

__attribute__((used)) static void FUNC_1(struct fn_list* VAR_1) {
  struct fn_node* VAR_2 = VAR_1->head;
  struct fn_node* VAR_3 = ((void*)0);
  struct fn_node* VAR_4 = ((void*)0);

  while (VAR_2) {
    VAR_4 = VAR_2->next;

    if (VAR_2->id == VAR_0) {
      if (VAR_2 == VAR_1->head) {
        VAR_1->head = VAR_4;
      }

      if (VAR_2 == VAR_1->tail) {
        VAR_1->tail = VAR_3;
      }

      if (VAR_3) {
        VAR_3->next = VAR_4;
      }

      FUNC_0(VAR_2);
    } else {
      VAR_3 = VAR_2;
    }

    VAR_2 = VAR_4;
  }
}

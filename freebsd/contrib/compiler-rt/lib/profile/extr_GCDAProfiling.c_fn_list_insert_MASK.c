
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fn_node {struct fn_node* next; int id; int fn; } ;
struct fn_list {struct fn_node* tail; struct fn_node* head; } ;
typedef int fn_ptr ;


 int VAR_0 ;
 struct fn_node* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct fn_list* VAR_1, fn_ptr VAR_2) {
  struct fn_node* VAR_3 = FUNC_0(sizeof(struct fn_node));
  VAR_3->fn = VAR_2;
  VAR_3->next = ((void*)0);
  VAR_3->id = VAR_0;

  if (!VAR_1->head) {
    VAR_1->head = VAR_1->tail = VAR_3;
  } else {
    VAR_1->tail->next = VAR_3;
    VAR_1->tail = VAR_3;
  }
}

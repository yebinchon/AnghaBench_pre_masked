
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_barrier_combining_queue {struct ck_barrier_combining_group* tail; struct ck_barrier_combining_group* head; } ;
struct ck_barrier_combining_group {struct ck_barrier_combining_group* next; } ;



__attribute__((used)) static void
FUNC_0(struct ck_barrier_combining_queue *VAR_0,
    struct ck_barrier_combining_group *VAR_1)
{

 VAR_1->next = ((void*)0);
 if (VAR_0->head == ((void*)0)) {
  VAR_0->head = VAR_0->tail = VAR_1;
  return;
 }

 VAR_0->tail->next = VAR_1;
 VAR_0->tail = VAR_1;

 return;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_barrier_combining_queue {struct ck_barrier_combining_group* head; } ;
struct ck_barrier_combining_group {struct ck_barrier_combining_group* next; } ;



__attribute__((used)) static struct ck_barrier_combining_group *
FUNC_0(struct ck_barrier_combining_queue *VAR_0)
{
 struct ck_barrier_combining_group *VAR_1 = ((void*)0);

 if (VAR_0->head != ((void*)0)) {
  VAR_1 = VAR_0->head;
  VAR_0->head = VAR_0->head->next;
 }

 return VAR_1;
}

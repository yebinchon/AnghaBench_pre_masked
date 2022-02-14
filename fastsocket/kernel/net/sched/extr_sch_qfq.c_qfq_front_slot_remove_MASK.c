
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_group {size_t front; int full_slots; int * slots; } ;
struct qfq_class {int next; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 struct qfq_class* FUNC_4 (struct qfq_group*) ;

__attribute__((used)) static void FUNC_5(struct qfq_group *VAR_0)
{
 struct qfq_class *VAR_1 = FUNC_4(VAR_0);

 FUNC_0(!VAR_1);
 FUNC_2(&VAR_1->next);
 if (FUNC_3(&VAR_0->slots[VAR_0->front]))
  FUNC_1(0, &VAR_0->full_slots);
}

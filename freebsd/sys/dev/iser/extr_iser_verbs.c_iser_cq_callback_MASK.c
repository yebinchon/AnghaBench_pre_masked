
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_comp {int task; int tq; } ;
struct ib_cq {int dummy; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void
FUNC_1(struct ib_cq *VAR_0, void *VAR_1)
{
 struct iser_comp *VAR_2 = VAR_1;

 FUNC_0(VAR_2->tq, &VAR_2->task);
}

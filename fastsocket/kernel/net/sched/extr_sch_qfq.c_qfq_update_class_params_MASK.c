
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct qfq_sched {int wsum; int * groups; } ;
struct qfq_class {int * grp; void* lmax; void* inv_w; } ;


 int FUNC_0 (void*,void*) ;

__attribute__((used)) static void FUNC_1(struct qfq_sched *VAR_0, struct qfq_class *VAR_1,
        u32 VAR_2, u32 VAR_3, int VAR_4)
{
 int VAR_5;


 VAR_1->lmax = VAR_2;
 VAR_1->inv_w = VAR_3;
 VAR_5 = FUNC_0(VAR_1->inv_w, VAR_1->lmax);

 VAR_1->grp = &VAR_0->groups[VAR_5];

 VAR_0->wsum += VAR_4;
}

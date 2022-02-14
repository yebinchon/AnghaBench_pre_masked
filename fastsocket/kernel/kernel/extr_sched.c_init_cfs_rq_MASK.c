
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct rq {int dummy; } ;
struct cfs_rq {int load_stamp; scalar_t__ min_vruntime; struct rq* rq; int tasks; int tasks_timeline; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct cfs_rq *VAR_1, struct rq *VAR_2)
{
 VAR_1->tasks_timeline = VAR_0;
 FUNC_0(&VAR_1->tasks);





 VAR_1->min_vruntime = (u64)(-(1LL << 20));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sched_entity {unsigned long sum_exec_runtime; unsigned long vruntime; int exec_max; } ;
struct cfs_rq {unsigned long load_unacc_exec_time; } ;


 unsigned long FUNC_0 (unsigned long,struct sched_entity*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct cfs_rq*,int ,unsigned long) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct cfs_rq*) ;

__attribute__((used)) static inline void
FUNC_5(struct cfs_rq *VAR_1, struct sched_entity *VAR_2,
       unsigned long VAR_3)
{
 unsigned long VAR_4;

 FUNC_3(VAR_2->exec_max, FUNC_1((u64)VAR_3, VAR_2->exec_max));

 VAR_2->sum_exec_runtime += VAR_3;
 FUNC_2(VAR_1, VAR_0, VAR_3);
 VAR_4 = FUNC_0(VAR_3, VAR_2);

 VAR_2->vruntime += VAR_4;
 FUNC_4(VAR_1);




}

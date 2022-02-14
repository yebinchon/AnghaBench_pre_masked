
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_entity {scalar_t__ vruntime; } ;
struct cfs_rq {scalar_t__ min_vruntime; } ;
typedef scalar_t__ s64 ;



__attribute__((used)) static inline s64 FUNC_0(struct cfs_rq *VAR_0, struct sched_entity *VAR_1)
{
 return VAR_1->vruntime - VAR_0->min_vruntime;
}

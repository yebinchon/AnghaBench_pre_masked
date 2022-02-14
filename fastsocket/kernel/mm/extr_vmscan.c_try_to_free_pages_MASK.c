
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zonelist {int dummy; } ;
struct scan_control {int may_writepage; int may_unmap; int may_swap; int order; int * nodemask; int * target_mem_cgroup; int swappiness; int nr_to_reclaim; int gfp_mask; } ;
typedef int nodemask_t ;
typedef int gfp_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct zonelist*,struct scan_control*) ;
 int VAR_1 ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (unsigned long) ;
 int VAR_2 ;

unsigned long FUNC_3(struct zonelist *VAR_3, int VAR_4,
    gfp_t VAR_5, nodemask_t *VAR_6)
{
 unsigned long VAR_7;
 struct scan_control VAR_8 = {
  .gfp_mask = VAR_5,
  .may_writepage = !VAR_1,
  .nr_to_reclaim = VAR_0,
  .may_unmap = 1,
  .may_swap = 1,
  .swappiness = VAR_2,
  .order = VAR_4,
  .target_mem_cgroup = ((void*)0),
  .nodemask = VAR_6,
 };

 FUNC_1(VAR_4,
    VAR_8.may_writepage,
    VAR_5);

 VAR_7 = FUNC_0(VAR_3, &VAR_8);

 FUNC_2(VAR_7);

 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup_zone {int mem_cgroup; int zone; } ;
struct lruvec {int * lists; } ;
struct list_head {int dummy; } ;
typedef int isolate_mode_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 (unsigned long,int *,struct list_head*,unsigned long*,int,int ,int) ;
 struct lruvec* FUNC_1 (int ,int ) ;

__attribute__((used)) static unsigned long FUNC_2(unsigned long VAR_3, struct mem_cgroup_zone *VAR_4,
       struct list_head *VAR_5,
       unsigned long *VAR_6, int VAR_7,
       isolate_mode_t VAR_8, int VAR_9, int VAR_10)
{
 struct lruvec *VAR_11;
 int VAR_12 = VAR_1;

 VAR_11 = FUNC_1(VAR_4->zone, VAR_4->mem_cgroup);
 if (VAR_9)
  VAR_12 += VAR_0;
 if (VAR_10)
  VAR_12 += VAR_2;
 return FUNC_0(VAR_3, &VAR_11->lists[VAR_12], VAR_5,
     VAR_6, VAR_7, VAR_8, VAR_10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_cgroup {int dummy; } ;
struct mem_cgroup_stat_cpu {int dummy; } ;
struct mem_cgroup_stat {struct mem_cgroup_stat_cpu* cpustat; } ;
struct mem_cgroup {struct mem_cgroup_stat stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 scalar_t__ FUNC_0 (struct page_cgroup*) ;
 int FUNC_1 (struct mem_cgroup_stat_cpu*,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct mem_cgroup *VAR_6,
      struct page_cgroup *VAR_7,
      long VAR_8)
{
 struct mem_cgroup_stat *VAR_9 = &VAR_6->stat;
 struct mem_cgroup_stat_cpu *VAR_10;
 long VAR_11 = VAR_8 >> VAR_5;
 int VAR_12 = FUNC_2();

 VAR_10 = &VAR_9->cpustat[VAR_12];
 if (FUNC_0(VAR_7))
  FUNC_1(VAR_10,
   VAR_0, VAR_11);
 else
  FUNC_1(VAR_10, VAR_4,
   VAR_11);

 if (VAR_11 > 0)
  FUNC_1(VAR_10,
    VAR_2, 1);
 else
  FUNC_1(VAR_10,
    VAR_3, 1);
 FUNC_1(VAR_10, VAR_1, 1);
 FUNC_3();
}

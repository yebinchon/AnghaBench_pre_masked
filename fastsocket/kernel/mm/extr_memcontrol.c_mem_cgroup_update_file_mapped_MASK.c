
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_cgroup {struct mem_cgroup* mem_cgroup; } ;
struct page {int dummy; } ;
struct mem_cgroup_stat_cpu {int dummy; } ;
struct mem_cgroup_stat {struct mem_cgroup_stat_cpu* cpustat; } ;
struct mem_cgroup {struct mem_cgroup_stat stat; } ;


 int FUNC_0 (struct page_cgroup*) ;
 int VAR_0 ;
 int FUNC_1 (struct page_cgroup*) ;
 int FUNC_2 (struct page_cgroup*) ;
 int FUNC_3 (struct mem_cgroup_stat_cpu*,int ,int) ;
 int FUNC_4 (struct page_cgroup*) ;
 struct page_cgroup* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct page_cgroup*) ;

void FUNC_10(struct page *VAR_1, int VAR_2)
{
 struct mem_cgroup *VAR_3;
 struct mem_cgroup_stat *VAR_4;
 struct mem_cgroup_stat_cpu *VAR_5;
 int VAR_6;
 struct page_cgroup *VAR_7;

 VAR_7 = FUNC_5(VAR_1);
 if (FUNC_8(!VAR_7))
  return;

 FUNC_4(VAR_7);
 VAR_3 = VAR_7->mem_cgroup;
 if (!VAR_3)
  goto done;

 if (!FUNC_1(VAR_7))
  goto done;




 VAR_6 = FUNC_7();
 VAR_4 = &VAR_3->stat;
 VAR_5 = &VAR_4->cpustat[VAR_6];

 FUNC_3(VAR_5, VAR_0, VAR_2);
 if (VAR_2 > 0)
  FUNC_2(VAR_7);
 else if (!FUNC_6(VAR_1))
  FUNC_0(VAR_7);
done:
 FUNC_9(VAR_7);
}

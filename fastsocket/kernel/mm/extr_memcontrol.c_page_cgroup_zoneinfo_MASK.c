
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mem_cgroup_per_zone {int dummy; } ;
struct mem_cgroup {int dummy; } ;


 struct mem_cgroup_per_zone* FUNC_0 (struct mem_cgroup*,int,int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static struct mem_cgroup_per_zone *
FUNC_3(struct mem_cgroup *VAR_0, struct page *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = FUNC_2(VAR_1);

 return FUNC_0(VAR_0, VAR_2, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mem_cgroup_tree_per_zone {int lock; } ;
struct mem_cgroup_per_zone {scalar_t__ on_tree; } ;
struct mem_cgroup {int res; } ;


 int FUNC_0 (struct mem_cgroup*,struct mem_cgroup_per_zone*,struct mem_cgroup_tree_per_zone*,unsigned long long) ;
 int FUNC_1 (struct mem_cgroup*,struct mem_cgroup_per_zone*,struct mem_cgroup_tree_per_zone*) ;
 struct mem_cgroup_per_zone* FUNC_2 (struct mem_cgroup*,int,int) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 struct mem_cgroup* FUNC_5 (struct mem_cgroup*) ;
 unsigned long long FUNC_6 (int *) ;
 struct mem_cgroup_tree_per_zone* FUNC_7 (struct page*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct mem_cgroup *VAR_0, struct page *VAR_1)
{
 unsigned long long VAR_2;
 struct mem_cgroup_per_zone *VAR_3;
 struct mem_cgroup_tree_per_zone *VAR_4;
 int VAR_5 = FUNC_3(VAR_1);
 int VAR_6 = FUNC_4(VAR_1);
 VAR_4 = FUNC_7(VAR_1);





 for (; VAR_0; VAR_0 = FUNC_5(VAR_0)) {
  VAR_3 = FUNC_2(VAR_0, VAR_5, VAR_6);
  VAR_2 = FUNC_6(&VAR_0->res);




  if (VAR_2 || VAR_3->on_tree) {
   FUNC_8(&VAR_4->lock);

   if (VAR_3->on_tree)
    FUNC_1(VAR_0, VAR_3, VAR_4);




   FUNC_0(VAR_0, VAR_3, VAR_4, VAR_2);
   FUNC_9(&VAR_4->lock);
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct zone {int dummy; } ;
struct mem_cgroup_tree_per_zone {int lock; } ;
struct mem_cgroup_per_zone {TYPE_1__* mem; } ;
typedef int gfp_t ;
struct TYPE_4__ {int css; int res; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct mem_cgroup_per_zone*,struct mem_cgroup_tree_per_zone*,unsigned long long) ;
 struct mem_cgroup_per_zone* FUNC_1 (struct mem_cgroup_tree_per_zone*) ;
 int FUNC_2 (TYPE_1__*,struct mem_cgroup_per_zone*,struct mem_cgroup_tree_per_zone*) ;
 int FUNC_3 (int *) ;
 struct mem_cgroup_per_zone* FUNC_4 (struct mem_cgroup_tree_per_zone*) ;
 unsigned long FUNC_5 (TYPE_1__*,struct zone*,int ) ;
 unsigned long long FUNC_6 (int *) ;
 struct mem_cgroup_tree_per_zone* FUNC_7 (int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

unsigned long FUNC_10(struct zone *VAR_1, int VAR_2,
      gfp_t VAR_3, int VAR_4,
      int VAR_5)
{
 unsigned long VAR_6 = 0;
 struct mem_cgroup_per_zone *VAR_7, *VAR_8 = ((void*)0);
 unsigned long VAR_9;
 int VAR_10 = 0;
 struct mem_cgroup_tree_per_zone *VAR_11;
 unsigned long long VAR_12;

 if (VAR_2 > 0)
  return 0;

 VAR_11 = FUNC_7(VAR_4, VAR_5);





 do {
  if (VAR_8)
   VAR_7 = VAR_8;
  else
   VAR_7 = FUNC_4(VAR_11);
  if (!VAR_7)
   break;

  VAR_9 = FUNC_5(VAR_7->mem, VAR_1, VAR_3);
  VAR_6 += VAR_9;
  FUNC_8(&VAR_11->lock);





  VAR_8 = ((void*)0);
  if (!VAR_9) {
   do {
    VAR_8 =
    FUNC_1(VAR_11);
    if (VAR_8 == VAR_7) {
     FUNC_3(&VAR_8->mem->css);
     VAR_8 = ((void*)0);
    } else
     break;
   } while (1);
  }
  FUNC_2(VAR_7->mem, VAR_7, VAR_11);
  VAR_12 = FUNC_6(&VAR_7->mem->res);
  FUNC_0(VAR_7->mem, VAR_7, VAR_11, VAR_12);
  FUNC_9(&VAR_11->lock);
  FUNC_3(&VAR_7->mem->css);
  VAR_10++;





  if (!VAR_6 &&
   (VAR_8 == ((void*)0) ||
   VAR_10 > VAR_0))
   break;
 } while (!VAR_6);
 if (VAR_8)
  FUNC_3(&VAR_8->mem->css);
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mem_cgroup {int use_hierarchy; } ;
struct cgroup {int children; struct cgroup* parent; } ;
struct cftype {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 struct mem_cgroup* FUNC_3 (struct cgroup*) ;

__attribute__((used)) static int FUNC_4(struct cgroup *VAR_2, struct cftype *VAR_3,
     u64 VAR_4)
{
 int VAR_5 = 0;
 struct mem_cgroup *VAR_6 = FUNC_3(VAR_2);
 struct cgroup *VAR_7 = VAR_2->parent;
 struct mem_cgroup *VAR_8 = ((void*)0);

 if (VAR_7)
  VAR_8 = FUNC_3(VAR_7);

 FUNC_0();
 if ((!VAR_8 || !VAR_8->use_hierarchy) &&
    (VAR_4 == 1 || VAR_4 == 0)) {
  if (FUNC_2(&VAR_2->children))
   VAR_6->use_hierarchy = VAR_4;
  else
   VAR_5 = -VAR_0;
 } else
  VAR_5 = -VAR_1;
 FUNC_1();

 return VAR_5;
}

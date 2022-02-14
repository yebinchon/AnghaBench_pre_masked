
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct cgroup* cgroup; } ;
struct mem_cgroup {int memsw; int res; int use_hierarchy; TYPE_1__ css; } ;
struct cgroup {struct cgroup* parent; } ;


 int VAR_0 ;
 struct mem_cgroup* FUNC_0 (struct cgroup*) ;
 unsigned long long FUNC_1 (unsigned long long,unsigned long long) ;
 unsigned long long FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct mem_cgroup *VAR_1,
  unsigned long long *VAR_2, unsigned long long *VAR_3)
{
 struct cgroup *VAR_4;
 unsigned long long VAR_5, VAR_6, VAR_7;

 VAR_5 = FUNC_2(&VAR_1->res, VAR_0);
 VAR_6 = FUNC_2(&VAR_1->memsw, VAR_0);
 VAR_4 = VAR_1->css.cgroup;
 if (!VAR_1->use_hierarchy)
  goto out;

 while (VAR_4->parent) {
  VAR_4 = VAR_4->parent;
  VAR_1 = FUNC_0(VAR_4);
  if (!VAR_1->use_hierarchy)
   break;
  VAR_7 = FUNC_2(&VAR_1->res, VAR_0);
  VAR_5 = FUNC_1(VAR_5, VAR_7);
  VAR_7 = FUNC_2(&VAR_1->memsw, VAR_0);
  VAR_6 = FUNC_1(VAR_6, VAR_7);
 }
out:
 *VAR_2 = VAR_5;
 *VAR_3 = VAR_6;
 return;
}

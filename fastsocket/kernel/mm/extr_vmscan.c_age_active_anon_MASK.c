
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;
struct scan_control {int dummy; } ;
struct mem_cgroup_zone {struct zone* zone; struct mem_cgroup* mem_cgroup; } ;
struct mem_cgroup {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mem_cgroup_zone*) ;
 struct mem_cgroup* FUNC_1 (int *,struct mem_cgroup*,int *) ;
 int FUNC_2 (int ,struct mem_cgroup_zone*,struct scan_control*,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct zone *VAR_2, struct scan_control *VAR_3,
       int VAR_4)
{
 struct mem_cgroup *VAR_5;

 if (!VAR_1)
  return;

 VAR_5 = FUNC_1(((void*)0), ((void*)0), ((void*)0));
 do {
  struct mem_cgroup_zone VAR_6 = {
   .mem_cgroup = VAR_5,
   .zone = VAR_2,
  };

  if (FUNC_0(&VAR_6))
   FUNC_2(VAR_0, &VAR_6,
        VAR_3, VAR_4, 0);

  VAR_5 = FUNC_1(((void*)0), VAR_5, ((void*)0));
 } while (VAR_5);
}

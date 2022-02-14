
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cgroup {TYPE_1__* root; } ;
struct cftype {int dummy; } ;
struct TYPE_2__ {int release_agent_path; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cgroup*) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char const*) ;

__attribute__((used)) static int FUNC_6(struct cgroup *VAR_3, struct cftype *VAR_4,
          const char *VAR_5)
{
 FUNC_0(sizeof(VAR_3->root->release_agent_path) < VAR_1);
 if (!FUNC_1(VAR_3))
  return -VAR_0;
 FUNC_3(&VAR_2);
 FUNC_5(VAR_3->root->release_agent_path, VAR_5);
 FUNC_4(&VAR_2);
 FUNC_2();
 return 0;
}

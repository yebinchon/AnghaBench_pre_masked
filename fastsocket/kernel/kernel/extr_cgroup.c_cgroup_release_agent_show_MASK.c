
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct cgroup {TYPE_1__* root; } ;
struct cftype {int dummy; } ;
struct TYPE_2__ {int release_agent_path; } ;


 int VAR_0 ;
 int FUNC_0 (struct cgroup*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct seq_file*,char) ;
 int FUNC_3 (struct seq_file*,int ) ;

__attribute__((used)) static int FUNC_4(struct cgroup *VAR_1, struct cftype *VAR_2,
         struct seq_file *VAR_3)
{
 if (!FUNC_0(VAR_1))
  return -VAR_0;
 FUNC_3(VAR_3, VAR_1->root->release_agent_path);
 FUNC_2(VAR_3, '\n');
 FUNC_1();
 return 0;
}

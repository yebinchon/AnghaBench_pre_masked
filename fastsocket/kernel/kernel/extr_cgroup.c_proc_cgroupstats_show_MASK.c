
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct cgroup_subsys {int disabled; TYPE_1__* root; int name; } ;
struct TYPE_2__ {int number_of_cgroups; int hierarchy_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct seq_file*,char*,int ,int ,int ,int) ;
 int FUNC_3 (struct seq_file*,char*) ;
 struct cgroup_subsys** VAR_2 ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_3, void *VAR_4)
{
 int VAR_5;

 FUNC_3(VAR_3, "#subsys_name\thierarchy\tnum_cgroups\tenabled\n");
 FUNC_0(&VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct cgroup_subsys *VAR_6 = VAR_2[VAR_5];
  FUNC_2(VAR_3, "%s\t%d\t%d\t%d\n",
      VAR_6->name, VAR_6->root->hierarchy_id,
      VAR_6->root->number_of_cgroups, !VAR_6->disabled);
 }
 FUNC_1(&VAR_1);
 return 0;
}

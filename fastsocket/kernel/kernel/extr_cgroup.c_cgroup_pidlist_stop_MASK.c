
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct cgroup_pidlist* private; } ;
struct cgroup_pidlist {int mutex; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct cgroup_pidlist *VAR_2 = VAR_0->private;
 FUNC_0(&VAR_2->mutex);
}

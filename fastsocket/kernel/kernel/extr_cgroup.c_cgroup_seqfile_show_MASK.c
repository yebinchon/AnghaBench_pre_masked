
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct cgroup_seqfile_state* private; } ;
struct cgroup_seqfile_state {int cgroup; struct cftype* cft; } ;
struct cgroup_map_cb {struct seq_file* state; int fill; } ;
struct cftype {int (* read_map ) (int ,struct cftype*,struct cgroup_map_cb*) ;int (* read_seq_string ) (int ,struct cftype*,struct seq_file*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,struct cftype*,struct cgroup_map_cb*) ;
 int FUNC_1 (int ,struct cftype*,struct seq_file*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 struct cgroup_seqfile_state *VAR_3 = VAR_1->private;
 struct cftype *VAR_4 = VAR_3->cft;
 if (VAR_4->read_map) {
  struct cgroup_map_cb VAR_5 = {
   .fill = VAR_0,
   .state = VAR_1,
  };
  return VAR_4->read_map(VAR_3->cgroup, VAR_4, &VAR_5);
 }
 return VAR_4->read_seq_string(VAR_3->cgroup, VAR_4, VAR_1);
}

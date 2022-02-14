
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agent_info {int cpus; struct agent_info** rw_ti; int write_pipe; int read_pipe; int out_fd; int in_fd; int ctl_fd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct agent_info*) ;

__attribute__((used)) static void FUNC_2(struct agent_info *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0->ctl_fd);
 for (VAR_1 = 0; VAR_1 < VAR_0->cpus; VAR_1++) {
  FUNC_0(VAR_0->rw_ti[VAR_1]->in_fd);
  FUNC_0(VAR_0->rw_ti[VAR_1]->out_fd);
  FUNC_0(VAR_0->rw_ti[VAR_1]->read_pipe);
  FUNC_0(VAR_0->rw_ti[VAR_1]->write_pipe);
  FUNC_1(VAR_0->rw_ti[VAR_1]);
 }
 FUNC_1(VAR_0);
}

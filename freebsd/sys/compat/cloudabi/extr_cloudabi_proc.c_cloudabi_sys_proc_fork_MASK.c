
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int* td_retval; } ;
struct fork_req {int fr_flags; int* fr_pd_fd; struct filecaps* fr_pd_fcaps; } ;
struct filecaps {int fc_rights; } ;
struct cloudabi_sys_proc_fork_args {int dummy; } ;
typedef int fr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fork_req*,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct thread*,struct fork_req*) ;

int
FUNC_3(struct thread *VAR_5,
    struct cloudabi_sys_proc_fork_args *VAR_6)
{
 struct fork_req VAR_7;
 struct filecaps VAR_8 = {};
 int VAR_9, VAR_10;

 FUNC_1(&VAR_8.fc_rights, VAR_1, VAR_0);
 FUNC_0(&VAR_7, sizeof(VAR_7));
 VAR_7.fr_flags = VAR_2 | VAR_3 | VAR_4;
 VAR_7.fr_pd_fd = &VAR_10;
 VAR_7.fr_pd_fcaps = &VAR_8;
 VAR_9 = FUNC_2(VAR_5, &VAR_7);
 if (VAR_9 != 0)
  return (VAR_9);

 VAR_5->td_retval[0] = VAR_10;
 return (0);
}

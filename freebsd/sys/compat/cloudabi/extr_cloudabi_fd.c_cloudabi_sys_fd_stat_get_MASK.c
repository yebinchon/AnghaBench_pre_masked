
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct filecaps {int fc_rights; } ;
struct file {int f_flag; } ;
struct cloudabi_sys_fd_stat_get_args {scalar_t__ buf; int fd; } ;
typedef int fsb ;
struct TYPE_3__ {int fs_rights_inheriting; int fs_rights_base; int fs_filetype; int fs_flags; int member_0; } ;
typedef TYPE_1__ cloudabi_fdstat_t ;
typedef int cap_rights_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (int *,int ,int *,int *) ;
 int FUNC_4 (TYPE_1__*,void*,int) ;
 int FUNC_5 (struct file*,struct thread*) ;
 int FUNC_6 (struct thread*,int ,int ,struct file**,struct filecaps*) ;
 int FUNC_7 (struct filecaps*) ;

int
FUNC_8(struct thread *VAR_6,
    struct cloudabi_sys_fd_stat_get_args *VAR_7)
{
 cloudabi_fdstat_t VAR_8 = {0};
 struct file *VAR_9;
 cap_rights_t VAR_10;
 struct filecaps VAR_11;
 int VAR_12, VAR_13;


 VAR_12 = FUNC_6(VAR_6, VAR_7->fd, FUNC_1(&VAR_10), &VAR_9,
     &VAR_11);
 if (VAR_12 != 0)
  return (VAR_12);
 VAR_13 = FUNC_0(VAR_9->f_flag);
 VAR_8.fs_filetype = FUNC_2(VAR_9);
 FUNC_5(VAR_9, VAR_6);


 if (VAR_13 & VAR_3)
  VAR_8.fs_flags |= VAR_0;
 if (VAR_13 & VAR_4)
  VAR_8.fs_flags |= VAR_1;
 if (VAR_13 & VAR_5)
  VAR_8.fs_flags |= VAR_2;


 FUNC_3(&VAR_11.fc_rights, VAR_8.fs_filetype,
     &VAR_8.fs_rights_base, &VAR_8.fs_rights_inheriting);
 FUNC_7(&VAR_11);
 return (FUNC_4(&VAR_8, (void *)VAR_7->buf, sizeof(VAR_8)));
}

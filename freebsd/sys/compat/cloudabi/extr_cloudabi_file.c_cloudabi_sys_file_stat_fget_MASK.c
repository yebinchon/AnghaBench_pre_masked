
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct thread {int td_ucred; } ;
struct stat {int dummy; } ;
struct file {int dummy; } ;
struct cloudabi_sys_file_stat_fget_args {int buf; int fd; } ;
typedef int csb ;
typedef int cloudabi_filetype_t ;
struct TYPE_5__ {int st_filetype; } ;
typedef TYPE_1__ cloudabi_filestat_t ;


 int VAR_0 ;
 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct stat*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (struct file*,struct thread*) ;
 int FUNC_4 (struct thread*,int ,int *,struct file**) ;
 int FUNC_5 (struct file*,struct stat*,int ,struct thread*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

int
FUNC_7(struct thread *VAR_1,
    struct cloudabi_sys_file_stat_fget_args *VAR_2)
{
 struct stat VAR_3;
 cloudabi_filestat_t VAR_4;
 struct file *VAR_5;
 cloudabi_filetype_t VAR_6;
 int VAR_7;

 FUNC_6(&VAR_4, 0, sizeof(VAR_4));


 VAR_7 = FUNC_4(VAR_1, VAR_2->fd, &VAR_0, &VAR_5);
 if (VAR_7 != 0)
  return (VAR_7);
 VAR_7 = FUNC_5(VAR_5, &VAR_3, VAR_1->td_ucred, VAR_1);
 if (VAR_7 != 0) {
  FUNC_3(VAR_5, VAR_1);
  return (VAR_7);
 }
 VAR_6 = FUNC_0(VAR_5);
 FUNC_3(VAR_5, VAR_1);


 FUNC_1(&VAR_3, &VAR_4);
 VAR_4.st_filetype = VAR_6;
 return (FUNC_2(&VAR_4, VAR_2->buf, sizeof(VAR_4)));
}

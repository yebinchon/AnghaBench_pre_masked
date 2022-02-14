
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_2__ {int flags; int fd; } ;
struct cloudabi_sys_file_stat_put_args {int flags; TYPE_1__ fd; int path_len; int path; int buf; } ;
typedef int fs ;
typedef int cloudabi_filestat_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int,struct timespec*) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int ,char**) ;
 int FUNC_4 (struct thread*,int ,char*,int ,struct timespec*,int ,int ) ;

int
FUNC_5(struct thread *VAR_8,
    struct cloudabi_sys_file_stat_put_args *VAR_9)
{
 cloudabi_filestat_t VAR_10;
 struct timespec VAR_11[2];
 char *VAR_12;
 int VAR_13;





 if ((VAR_9->flags & ~(VAR_1 |
     VAR_2 | VAR_3 |
     VAR_4)) != 0)
  return (VAR_6);

 VAR_13 = FUNC_2(VAR_9->buf, &VAR_10, sizeof(VAR_10));
 if (VAR_13 != 0)
  return (VAR_13);
 VAR_13 = FUNC_3(VAR_9->path, VAR_9->path_len, &VAR_12);
 if (VAR_13 != 0)
  return (VAR_13);

 FUNC_1(&VAR_10, VAR_9->flags, VAR_11);
 VAR_13 = FUNC_4(VAR_8, VAR_9->fd.fd, VAR_12, VAR_7, VAR_11,
     VAR_7, (VAR_9->fd.flags & VAR_5) ?
     0 : VAR_0);
 FUNC_0(VAR_12);
 return (VAR_13);
}

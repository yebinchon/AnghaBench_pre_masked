
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct cloudabi_sys_file_stat_fput_args {int flags; int fd; int buf; } ;
typedef int fs ;
struct TYPE_4__ {int st_size; } ;
typedef TYPE_1__ cloudabi_filestat_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int,struct timespec*) ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 int FUNC_2 (struct thread*,int ,int ) ;
 int FUNC_3 (struct thread*,int ,struct timespec*,int ) ;

int
FUNC_4(struct thread *VAR_7,
    struct cloudabi_sys_file_stat_fput_args *VAR_8)
{
 cloudabi_filestat_t VAR_9;
 struct timespec VAR_10[2];
 int VAR_11;

 VAR_11 = FUNC_1(VAR_8->buf, &VAR_9, sizeof(VAR_9));
 if (VAR_11 != 0)
  return (VAR_11);





 if ((VAR_8->flags & VAR_4) != 0) {

  if ((VAR_8->flags & ~VAR_4) != 0)
   return (VAR_5);
  return (FUNC_2(VAR_7, VAR_8->fd, VAR_9.st_size));
 } else if ((VAR_8->flags & (VAR_0 |
     VAR_1 | VAR_2 |
     VAR_3)) != 0) {

  if ((VAR_8->flags & ~(VAR_0 |
      VAR_1 | VAR_2 |
      VAR_3)) != 0)
   return (VAR_5);
  FUNC_0(&VAR_9, VAR_8->flags, VAR_10);
  return (FUNC_3(VAR_7, VAR_8->fd, VAR_10, VAR_6));
 }
 return (VAR_5);
}

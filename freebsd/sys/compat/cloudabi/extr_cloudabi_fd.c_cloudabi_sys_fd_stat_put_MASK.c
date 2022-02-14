
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct cloudabi_sys_fd_stat_put_args {scalar_t__ flags; int fd; int buf; } ;
typedef int fsb ;
struct TYPE_3__ {int fs_flags; int fs_rights_base; int fs_rights_inheriting; } ;
typedef TYPE_1__ cloudabi_fdstat_t ;
typedef int cap_rights_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 int FUNC_2 (struct thread*,int ,int *) ;
 int FUNC_3 (struct thread*,int ,int ,int) ;

int
FUNC_4(struct thread *VAR_12,
    struct cloudabi_sys_fd_stat_put_args *VAR_13)
{
 cloudabi_fdstat_t VAR_14;
 cap_rights_t VAR_15;
 int VAR_16, VAR_17;

 VAR_16 = FUNC_1(VAR_13->buf, &VAR_14, sizeof(VAR_14));
 if (VAR_16 != 0)
  return (VAR_16);

 if (VAR_13->flags == VAR_5) {

  VAR_17 = 0;
  if (VAR_14.fs_flags & VAR_0)
   VAR_17 |= VAR_9;
  if (VAR_14.fs_flags & VAR_2)
   VAR_17 |= VAR_10;
  if (VAR_14.fs_flags & (VAR_4 |
      VAR_1 | VAR_3))
   VAR_17 |= VAR_11;
  return (FUNC_3(VAR_12, VAR_13->fd, VAR_8, VAR_17));
 } else if (VAR_13->flags == VAR_6) {

  VAR_16 = FUNC_0(
      VAR_14.fs_rights_base | VAR_14.fs_rights_inheriting, &VAR_15);
  if (VAR_16 != 0)
   return (VAR_16);
  return (FUNC_2(VAR_12, VAR_13->fd, &VAR_15));
 }
 return (VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_2__ {int flags; int fd; } ;
struct cloudabi_sys_file_link_args {TYPE_1__ fd1; int fd2; int path2_len; int path2; int path1_len; int path1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char**) ;
 int FUNC_2 (struct thread*,int ,int ,char*,char*,int ,int ) ;

int
FUNC_3(struct thread *VAR_4,
    struct cloudabi_sys_file_link_args *VAR_5)
{
 char *VAR_6, *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5->path1, VAR_5->path1_len, &VAR_6);
 if (VAR_8 != 0)
  return (VAR_8);
 VAR_8 = FUNC_1(VAR_5->path2, VAR_5->path2_len, &VAR_7);
 if (VAR_8 != 0) {
  FUNC_0(VAR_6);
  return (VAR_8);
 }

 VAR_8 = FUNC_2(VAR_4, VAR_5->fd1.fd, VAR_5->fd2, VAR_6, VAR_7,
     VAR_3, (VAR_5->fd1.flags & VAR_0) ?
     VAR_1 : VAR_2);
 FUNC_0(VAR_6);
 FUNC_0(VAR_7);
 return (VAR_8);
}

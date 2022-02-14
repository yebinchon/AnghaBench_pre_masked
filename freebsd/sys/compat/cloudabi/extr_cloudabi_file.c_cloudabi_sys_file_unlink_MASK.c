
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cloudabi_sys_file_unlink_args {int flags; int fd; int path_len; int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char**) ;
 int FUNC_2 (struct thread*,int ,char*,int ,int ,int ) ;
 int FUNC_3 (struct thread*,int ,char*,int ,int ,int ,int ) ;

int
FUNC_4(struct thread *VAR_3,
    struct cloudabi_sys_file_unlink_args *VAR_4)
{
 char *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4->path, VAR_4->path_len, &VAR_5);
 if (VAR_6 != 0)
  return (VAR_6);

 if (VAR_4->flags & VAR_0)
  VAR_6 = FUNC_2(VAR_3, VAR_4->fd, VAR_5, VAR_1,
      VAR_2, 0);
 else
  VAR_6 = FUNC_3(VAR_3, VAR_4->fd, VAR_5, VAR_1,
      VAR_2, 0, 0);
 FUNC_0(VAR_5);
 return (VAR_6);
}

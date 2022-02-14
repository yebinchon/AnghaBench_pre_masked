
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cloudabi_sys_file_rename_args {int fd2; int fd1; int path2_len; int path2; int path1_len; int path1; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char**) ;
 int FUNC_2 (struct thread*,int ,char*,int ,char*,int ) ;

int
FUNC_3(struct thread *VAR_1,
    struct cloudabi_sys_file_rename_args *VAR_2)
{
 char *VAR_3, *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2->path1, VAR_2->path1_len, &VAR_3);
 if (VAR_5 != 0)
  return (VAR_5);
 VAR_5 = FUNC_1(VAR_2->path2, VAR_2->path2_len, &VAR_4);
 if (VAR_5 != 0) {
  FUNC_0(VAR_3);
  return (VAR_5);
 }

 VAR_5 = FUNC_2(VAR_1, VAR_2->fd1, VAR_3, VAR_2->fd2, VAR_4,
     VAR_0);
 FUNC_0(VAR_3);
 FUNC_0(VAR_4);
 return (VAR_5);
}

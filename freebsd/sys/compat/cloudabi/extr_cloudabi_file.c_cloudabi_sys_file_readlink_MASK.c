
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cloudabi_sys_file_readlink_args {int buf_len; int buf; int fd; int path_len; int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char**) ;
 int FUNC_2 (struct thread*,int ,char*,int ,int ,int ,int ) ;

int
FUNC_3(struct thread *VAR_2,
    struct cloudabi_sys_file_readlink_args *VAR_3)
{
 char *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3->path, VAR_3->path_len, &VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);

 VAR_5 = FUNC_2(VAR_2, VAR_3->fd, VAR_4, VAR_0,
     VAR_3->buf, VAR_1, VAR_3->buf_len);
 FUNC_0(VAR_4);
 return (VAR_5);
}

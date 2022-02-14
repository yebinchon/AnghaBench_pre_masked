
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmspace {int dummy; } ;
struct thread {int dummy; } ;
struct image_args {int fd; } ;
struct cloudabi_sys_proc_exec_args {int fd; int fds_len; int fds; int data_len; int data; } ;


 int FUNC_0 (struct thread*,struct image_args*,int ,int ,int ,int ) ;
 int FUNC_1 (struct thread*,struct image_args*,int *) ;
 int FUNC_2 (struct thread*,int,struct vmspace*) ;
 int FUNC_3 (struct thread*,struct vmspace**) ;

int
FUNC_4(struct thread *VAR_0,
    struct cloudabi_sys_proc_exec_args *VAR_1)
{
 struct image_args VAR_2;
 struct vmspace *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_0, &VAR_3);
 if (VAR_4 != 0)
  return (VAR_4);
 VAR_4 = FUNC_0(VAR_0, &VAR_2, VAR_1->data, VAR_1->data_len,
     VAR_1->fds, VAR_1->fds_len);
 if (VAR_4 == 0) {
  VAR_2.fd = VAR_1->fd;
  VAR_4 = FUNC_1(VAR_0, &VAR_2, ((void*)0));
 }
 FUNC_2(VAR_0, VAR_4, VAR_3);
 return (VAR_4);
}

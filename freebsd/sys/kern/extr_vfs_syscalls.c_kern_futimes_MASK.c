
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct file {int f_vnode; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct file*,struct thread*) ;
 int FUNC_4 (struct timeval*,int,struct timespec*) ;
 int FUNC_5 (struct thread*,int,int *,struct file**) ;
 int FUNC_6 (struct thread*,int ,struct timespec*,int,int ) ;
 int FUNC_7 (int ,int) ;

int
FUNC_8(struct thread *VAR_3, int VAR_4, struct timeval *VAR_5,
    enum uio_seg VAR_6)
{
 struct timespec VAR_7[2];
 struct file *VAR_8;
 int VAR_9;

 FUNC_0(VAR_4);
 VAR_9 = FUNC_4(VAR_5, VAR_6, VAR_7);
 if (VAR_9 != 0)
  return (VAR_9);
 VAR_9 = FUNC_5(VAR_3, VAR_4, &VAR_2, &VAR_8);
 if (VAR_9 != 0)
  return (VAR_9);





 VAR_9 = FUNC_6(VAR_3, VAR_8->f_vnode, VAR_7, 2, VAR_5 == ((void*)0));
 FUNC_3(VAR_8, VAR_3);
 return (VAR_9);
}

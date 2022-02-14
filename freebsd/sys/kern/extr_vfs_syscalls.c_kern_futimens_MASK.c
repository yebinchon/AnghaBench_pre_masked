
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct file {int f_vnode; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct file*,struct thread*) ;
 int FUNC_4 (struct timespec*,int,struct timespec*,int*) ;
 int FUNC_5 (struct thread*,int,int *,struct file**) ;
 int FUNC_6 (struct thread*,int ,struct timespec*,int,int) ;
 int FUNC_7 (int ,int) ;

int
FUNC_8(struct thread *VAR_5, int VAR_6, struct timespec *VAR_7,
    enum uio_seg VAR_8)
{
 struct timespec VAR_9[2];
 struct file *VAR_10;
 int VAR_11, VAR_12;

 FUNC_0(VAR_6);
 VAR_11 = FUNC_4(VAR_7, VAR_8, VAR_9, &VAR_12);
 if (VAR_11 != 0)
  return (VAR_11);
 if (VAR_12 & VAR_2)
  return (0);
 VAR_11 = FUNC_5(VAR_5, VAR_6, &VAR_4, &VAR_10);
 if (VAR_11 != 0)
  return (VAR_11);





 VAR_11 = FUNC_6(VAR_5, VAR_10->f_vnode, VAR_9, 2, VAR_12 & VAR_3);
 FUNC_3(VAR_10, VAR_5);
 return (VAR_11);
}

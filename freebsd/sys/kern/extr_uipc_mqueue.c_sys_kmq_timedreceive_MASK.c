
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct mqueue {int dummy; } ;
struct kmq_timedreceive_args {int msg_prio; int msg_len; int msg_ptr; int * abs_timeout; int mqd; } ;
struct file {int f_flag; } ;
typedef int ets ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct timespec*,int) ;
 int FUNC_2 (struct file*,struct thread*) ;
 int FUNC_3 (struct thread*,int ,struct file**,int *,struct mqueue**) ;
 int FUNC_4 (struct mqueue*,int ,int ,int ,int,struct timespec*) ;

int
FUNC_5(struct thread *VAR_1, struct kmq_timedreceive_args *VAR_2)
{
 struct mqueue *VAR_3;
 struct file *VAR_4;
 struct timespec *VAR_5, VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_0(VAR_2->mqd);
 VAR_7 = FUNC_3(VAR_1, VAR_2->mqd, &VAR_4, ((void*)0), &VAR_3);
 if (VAR_7)
  return (VAR_7);
 if (VAR_2->abs_timeout != ((void*)0)) {
  VAR_7 = FUNC_1(VAR_2->abs_timeout, &VAR_6, sizeof(VAR_6));
  if (VAR_7 != 0)
   goto out;
  VAR_5 = &VAR_6;
 } else
  VAR_5 = ((void*)0);
 VAR_8 = !(VAR_4->f_flag & VAR_0);
 VAR_7 = FUNC_4(VAR_3, VAR_2->msg_ptr, VAR_2->msg_len,
  VAR_2->msg_prio, VAR_8, VAR_5);
out:
 FUNC_2(VAR_4, VAR_1);
 return (VAR_7);
}

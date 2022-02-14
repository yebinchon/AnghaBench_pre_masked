
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct kqueue {TYPE_1__* kq_cred; struct filedesc* kq_fdp; } ;
struct filedesc {int fd_kqlist; } ;
struct file {struct kqueue* f_data; } ;
struct TYPE_2__ {int cr_ruidinfo; } ;


 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 int FUNC_2 (struct filedesc*) ;
 int VAR_0 ;
 int FUNC_3 (int *,struct kqueue*,int ) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct kqueue*,int ) ;
 int VAR_1 ;
 int FUNC_7 (struct file*,struct kqueue**) ;
 int FUNC_8 (struct kqueue*) ;
 int FUNC_9 (struct kqueue*,struct thread*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(struct file *VAR_2, struct thread *VAR_3)
{
 struct kqueue *VAR_4 = VAR_2->f_data;
 struct filedesc *VAR_5;
 int VAR_6;
 int VAR_7;

 if ((VAR_6 = FUNC_7(VAR_2, &VAR_4)))
  return VAR_6;
 FUNC_9(VAR_4, VAR_3);







 VAR_5 = VAR_4->kq_fdp;
 VAR_4->kq_fdp = ((void*)0);
 if (!FUNC_10(FUNC_0(VAR_5))) {
  FUNC_1(VAR_5);
  VAR_7 = 1;
 } else
  VAR_7 = 0;
 FUNC_3(&VAR_5->fd_kqlist, VAR_4, VAR_1);
 if (VAR_7)
  FUNC_2(VAR_5);

 FUNC_8(VAR_4);
 FUNC_4(VAR_4->kq_cred->cr_ruidinfo, -1, 0);
 FUNC_5(VAR_4->kq_cred);
 FUNC_6(VAR_4, VAR_0);
 VAR_2->f_data = ((void*)0);

 return (0);
}

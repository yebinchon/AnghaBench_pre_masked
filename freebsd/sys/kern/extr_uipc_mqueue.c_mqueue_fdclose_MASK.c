
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct mqueue {int mq_flags; int mq_mutex; int mq_wsel; int mq_rsel; } ;
struct filedesc {int dummy; } ;
struct file {int * f_ops; } ;
struct TYPE_2__ {struct filedesc* p_fd; } ;


 int FUNC_0 (struct filedesc*) ;
 struct mqueue* FUNC_1 (struct file*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,struct mqueue*,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct thread *VAR_3, int VAR_4, struct file *VAR_5)
{
 struct mqueue *VAR_6;







 if (VAR_5->f_ops == &VAR_2) {
  VAR_6 = FUNC_1(VAR_5);
  FUNC_2(&VAR_6->mq_mutex);
  FUNC_4(VAR_3->td_proc, VAR_6, VAR_4);


  if (VAR_6->mq_flags & VAR_0) {
   VAR_6->mq_flags &= ~VAR_0;
   FUNC_5(&VAR_6->mq_rsel);
  }
  if (VAR_6->mq_flags & VAR_1) {
   VAR_6->mq_flags &= ~VAR_1;
   FUNC_5(&VAR_6->mq_wsel);
  }
  FUNC_3(&VAR_6->mq_mutex);
 }
}

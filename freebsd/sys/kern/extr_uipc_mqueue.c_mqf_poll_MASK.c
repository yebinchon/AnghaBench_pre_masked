
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct mqueue {scalar_t__ mq_curmsgs; scalar_t__ mq_maxmsg; int mq_mutex; int mq_wsel; int mq_flags; int mq_rsel; } ;
struct file {int dummy; } ;


 struct mqueue* FUNC_0 (struct file*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_5, int VAR_6, struct ucred *VAR_7,
 struct thread *VAR_8)
{
 struct mqueue *VAR_9 = FUNC_0(VAR_5);
 int VAR_10 = 0;

 FUNC_1(&VAR_9->mq_mutex);
 if (VAR_6 & (VAR_2 | VAR_4)) {
  if (VAR_9->mq_curmsgs) {
   VAR_10 |= VAR_6 & (VAR_2 | VAR_4);
  } else {
   VAR_9->mq_flags |= VAR_0;
   FUNC_3(VAR_8, &VAR_9->mq_rsel);
   }
 }
 if (VAR_6 & VAR_3) {
  if (VAR_9->mq_curmsgs < VAR_9->mq_maxmsg)
   VAR_10 |= VAR_3;
  else {
   VAR_9->mq_flags |= VAR_1;
   FUNC_3(VAR_8, &VAR_9->mq_wsel);
  }
 }
 FUNC_2(&VAR_9->mq_mutex);
 return (VAR_10);
}

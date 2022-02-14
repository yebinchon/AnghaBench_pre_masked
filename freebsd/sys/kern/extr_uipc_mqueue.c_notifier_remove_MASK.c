
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;
struct mqueue_notifier {int nt_ksi; } ;
struct mqueue {struct mqueue_notifier* mq_notifier; int mq_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct proc*,struct mqueue_notifier*) ;
 struct mqueue_notifier* FUNC_4 (struct proc*,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct proc *VAR_1, struct mqueue *VAR_2, int VAR_3)
{
 struct mqueue_notifier *VAR_4;

 FUNC_2(&VAR_2->mq_mutex, VAR_0);
 FUNC_0(VAR_1);
 VAR_4 = FUNC_4(VAR_1, VAR_3);
 if (VAR_4 != ((void*)0)) {
  if (VAR_2->mq_notifier == VAR_4)
   VAR_2->mq_notifier = ((void*)0);
  FUNC_5(&VAR_4->nt_ksi);
  FUNC_3(VAR_1, VAR_4);
 }
 FUNC_1(VAR_1);
}

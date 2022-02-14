
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mqueue_msg {scalar_t__ msg_size; } ;
struct TYPE_2__ {int si_note; } ;
struct mqueue {scalar_t__ mq_receivers; int mq_flags; int mq_mutex; int mq_msgq; int * mq_notifier; TYPE_1__ mq_wsel; scalar_t__ mq_senders; int mq_totalbytes; int mq_curmsgs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 struct mqueue_msg* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct mqueue_msg*,int ) ;
 int FUNC_4 (struct mqueue*) ;
 int VAR_4 ;
 int FUNC_5 (scalar_t__*,int *,int ,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (scalar_t__*) ;

__attribute__((used)) static int
FUNC_10(struct mqueue *VAR_5, struct mqueue_msg **VAR_6, int VAR_7)
{
 int VAR_8 = 0;

 FUNC_6(&VAR_5->mq_mutex);
 while ((*VAR_6 = FUNC_2(&VAR_5->mq_msgq)) == ((void*)0) && VAR_8 == 0) {
  if (VAR_7 < 0) {
   FUNC_7(&VAR_5->mq_mutex);
   return (VAR_0);
  }
  VAR_5->mq_receivers++;
  VAR_8 = FUNC_5(&VAR_5->mq_receivers, &VAR_5->mq_mutex,
       VAR_3, "mqrecv", VAR_7);
  VAR_5->mq_receivers--;
  if (VAR_8 == VAR_0)
   VAR_8 = VAR_1;
 }
 if (*VAR_6 != ((void*)0)) {
  VAR_8 = 0;
  FUNC_3(&VAR_5->mq_msgq, *VAR_6, VAR_4);
  VAR_5->mq_curmsgs--;
  VAR_5->mq_totalbytes -= (*VAR_6)->msg_size;
  if (VAR_5->mq_senders)
   FUNC_9(&VAR_5->mq_senders);
  if (VAR_5->mq_flags & VAR_2) {
   VAR_5->mq_flags &= ~VAR_2;
   FUNC_8(&VAR_5->mq_wsel);
  }
  FUNC_0(&VAR_5->mq_wsel.si_note, 0);
 }
 if (VAR_5->mq_notifier != ((void*)0) && VAR_5->mq_receivers == 0 &&
     !FUNC_1(&VAR_5->mq_msgq)) {
  FUNC_4(VAR_5);
 }
 FUNC_7(&VAR_5->mq_mutex);
 return (VAR_8);
}

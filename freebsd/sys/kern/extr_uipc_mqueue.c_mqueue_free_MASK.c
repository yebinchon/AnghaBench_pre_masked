
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mqueue_msg {int dummy; } ;
struct TYPE_2__ {int si_note; } ;
struct mqueue {TYPE_1__ mq_wsel; TYPE_1__ mq_rsel; int mq_mutex; int mq_msgq; } ;


 int VAR_0 ;
 struct mqueue_msg* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct mqueue_msg*,int ) ;
 int FUNC_2 (int *,int) ;
 int VAR_1 ;
 int FUNC_3 (struct mqueue_msg*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,struct mqueue*) ;

__attribute__((used)) static void
FUNC_8(struct mqueue *VAR_4)
{
 struct mqueue_msg *VAR_5;

 while ((VAR_5 = FUNC_0(&VAR_4->mq_msgq)) != ((void*)0)) {
  FUNC_1(&VAR_4->mq_msgq, VAR_5, VAR_3);
  FUNC_3(VAR_5, VAR_0);
 }

 FUNC_5(&VAR_4->mq_mutex);
 FUNC_6(&VAR_4->mq_rsel);
 FUNC_6(&VAR_4->mq_wsel);
 FUNC_4(&VAR_4->mq_rsel.si_note);
 FUNC_4(&VAR_4->mq_wsel.si_note);
 FUNC_7(VAR_2, VAR_4);
 FUNC_2(&VAR_1, -1);
}

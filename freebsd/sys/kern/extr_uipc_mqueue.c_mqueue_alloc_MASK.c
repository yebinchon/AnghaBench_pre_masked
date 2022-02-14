
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int si_note; } ;
struct TYPE_3__ {int si_note; } ;
struct mqueue {int mq_mutex; TYPE_2__ mq_wsel; TYPE_1__ mq_rsel; int mq_msgsize; int mq_maxmsg; int mq_msgq; } ;
struct mq_attr {int mq_msgsize; int mq_maxmsg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__*,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,char*,int *,int ) ;
 struct mqueue* FUNC_4 (int ,int) ;

__attribute__((used)) static struct mqueue *
FUNC_5(const struct mq_attr *VAR_8)
{
 struct mqueue *VAR_9;

 if (VAR_3 >= VAR_6)
  return (((void*)0));
 VAR_9 = FUNC_4(VAR_7, VAR_1 | VAR_2);
 FUNC_0(&VAR_9->mq_msgq);
 if (VAR_8 != ((void*)0)) {
  VAR_9->mq_maxmsg = VAR_8->mq_maxmsg;
  VAR_9->mq_msgsize = VAR_8->mq_msgsize;
 } else {
  VAR_9->mq_maxmsg = VAR_4;
  VAR_9->mq_msgsize = VAR_5;
 }
 FUNC_3(&VAR_9->mq_mutex, "mqueue lock", ((void*)0), VAR_0);
 FUNC_2(&VAR_9->mq_rsel.si_note, &VAR_9->mq_mutex);
 FUNC_2(&VAR_9->mq_wsel.si_note, &VAR_9->mq_mutex);
 FUNC_1(&VAR_3, 1);
 return (VAR_9);
}

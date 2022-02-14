
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sock {int sk_shutdown; int (* sk_data_ready ) (struct sock*,int ) ;struct sk_buff_head sk_receive_queue; } ;
struct sk_buff {scalar_t__ prev; } ;
struct sctp_ulpq {scalar_t__ pd_mode; TYPE_2__* asoc; } ;
struct sctp_ulpevent {int msg_flags; } ;
struct TYPE_6__ {struct sk_buff_head pd_lobby; scalar_t__ frag_interleave; int pd_mode; int subscribe; } ;
struct TYPE_4__ {struct sock* sk; } ;
struct TYPE_5__ {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff_head*,struct sk_buff*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct sk_buff* FUNC_2 (struct sctp_ulpevent*) ;
 int FUNC_3 (struct sk_buff_head*) ;
 TYPE_3__* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sk_buff_head*,struct sk_buff_head*) ;
 int FUNC_6 (struct sctp_ulpevent*) ;
 int FUNC_7 (struct sctp_ulpevent*,int *) ;
 int FUNC_8 (struct sctp_ulpq*) ;
 scalar_t__ FUNC_9 (struct sock*,int ) ;
 int FUNC_10 (struct sock*,int ) ;

int FUNC_11(struct sctp_ulpq *VAR_6, struct sctp_ulpevent *VAR_7)
{
 struct sock *VAR_8 = VAR_6->asoc->base.sk;
 struct sk_buff_head *VAR_9, *VAR_10;
 struct sk_buff *VAR_11 = FUNC_2(VAR_7);
 int VAR_12 = 0;

 VAR_10 = (struct sk_buff_head *) VAR_11->prev;




 if (FUNC_9(VAR_8, VAR_5) || (VAR_8->sk_shutdown & VAR_2))
  goto out_free;


 if (!FUNC_7(VAR_7, &FUNC_4(VAR_8)->subscribe))
  goto out_free;






 if (FUNC_1(&FUNC_4(VAR_8)->pd_mode) == 0) {
  VAR_9 = &VAR_8->sk_receive_queue;
 } else {
  if (VAR_6->pd_mode) {





   if ((VAR_7->msg_flags & VAR_1) ||
       (VAR_4 ==
        (VAR_7->msg_flags & VAR_3)))
    VAR_9 = &FUNC_4(VAR_8)->pd_lobby;
   else {
    VAR_12 = VAR_7->msg_flags & VAR_0;
    VAR_9 = &VAR_8->sk_receive_queue;
   }
  } else {





   if (FUNC_4(VAR_8)->frag_interleave)
    VAR_9 = &VAR_8->sk_receive_queue;
   else
    VAR_9 = &FUNC_4(VAR_8)->pd_lobby;
  }
 }




 if (VAR_10)
  FUNC_5(VAR_10, VAR_9);
 else
  FUNC_0(VAR_9, VAR_11);





 if (VAR_12)
  FUNC_8(VAR_6);

 if (VAR_9 == &VAR_8->sk_receive_queue)
  VAR_8->sk_data_ready(VAR_8, 0);
 return 1;

out_free:
 if (VAR_10)
  FUNC_3(VAR_10);
 else
  FUNC_6(VAR_7);

 return 0;
}

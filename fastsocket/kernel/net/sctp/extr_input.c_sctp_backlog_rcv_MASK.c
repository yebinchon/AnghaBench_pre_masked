
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_rcvbuf; } ;
struct sk_buff {int dummy; } ;
struct sctp_inq {int dummy; } ;
struct sctp_ep_common {scalar_t__ type; struct sock* sk; scalar_t__ dead; struct sctp_inq inqueue; } ;
struct sctp_chunk {struct sctp_ep_common* rcvr; } ;
struct TYPE_2__ {struct sctp_chunk* chunk; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sctp_ep_common*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sctp_chunk*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sctp_ep_common*) ;
 int FUNC_9 (struct sctp_inq*,struct sctp_chunk*) ;
 scalar_t__ FUNC_10 (struct sock*,struct sk_buff*,int ) ;
 scalar_t__ FUNC_11 (struct sock*) ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct sctp_chunk *VAR_4 = FUNC_1(VAR_3)->chunk;
 struct sctp_inq *VAR_5 = &VAR_4->rcvr->inqueue;
 struct sctp_ep_common *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 VAR_6 = VAR_4->rcvr;





 if (VAR_6->dead) {
  FUNC_6(VAR_4);
  goto done;
 }

 if (FUNC_12(VAR_6->sk != VAR_2)) {
  VAR_2 = VAR_6->sk;
  FUNC_4(VAR_2);

  if (FUNC_11(VAR_2)) {
   if (FUNC_10(VAR_2, VAR_3, VAR_2->sk_rcvbuf))
    FUNC_6(VAR_4);
   else
    VAR_7 = 1;
  } else
   FUNC_9(VAR_5, VAR_4);

  FUNC_5(VAR_2);


  if (VAR_7)
   return 0;
 } else {
  FUNC_9(VAR_5, VAR_4);
 }

done:

 if (VAR_0 == VAR_6->type)
  FUNC_3(FUNC_2(VAR_6));
 else if (VAR_1 == VAR_6->type)
  FUNC_7(FUNC_8(VAR_6));
 else
  FUNC_0();

 return 0;
}

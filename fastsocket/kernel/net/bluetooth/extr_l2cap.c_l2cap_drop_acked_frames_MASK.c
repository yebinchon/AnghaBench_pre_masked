
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {scalar_t__ tx_seq; } ;
struct TYPE_3__ {scalar_t__ expected_ack_seq; int retrans_timer; int unacked_frames; } ;


 int FUNC_0 (struct sock*) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sock*) ;
 struct sk_buff* FUNC_5 (int ) ;
 struct sk_buff* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_0)
{
 struct sk_buff *VAR_1;

 while ((VAR_1 = FUNC_6(FUNC_0(VAR_0)))) {
  if (FUNC_1(VAR_1)->tx_seq == FUNC_4(VAR_0)->expected_ack_seq)
   break;

  VAR_1 = FUNC_5(FUNC_0(VAR_0));
  FUNC_3(VAR_1);

  FUNC_4(VAR_0)->unacked_frames--;
 }

 if (!FUNC_4(VAR_0)->unacked_frames)
  FUNC_2(&FUNC_4(VAR_0)->retrans_timer);

 return;
}

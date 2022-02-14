
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rcv_tsecr; } ;
struct tcp_sock {TYPE_2__ rx_opt; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_8__ {scalar_t__ end_seq; scalar_t__ seq; } ;
struct TYPE_5__ {scalar_t__ rcv_mss; } ;
struct TYPE_7__ {TYPE_1__ icsk_ack; } ;


 TYPE_4__* FUNC_0 (struct sk_buff const*) ;
 TYPE_3__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct tcp_sock*,scalar_t__,int ) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_4(struct sock *VAR_1,
       const struct sk_buff *VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_3(VAR_1);
 if (VAR_3->rx_opt.rcv_tsecr &&
     (FUNC_0(VAR_2)->end_seq -
      FUNC_0(VAR_2)->seq >= FUNC_1(VAR_1)->icsk_ack.rcv_mss))
  FUNC_2(VAR_3, VAR_0 - VAR_3->rx_opt.rcv_tsecr, 0);
}

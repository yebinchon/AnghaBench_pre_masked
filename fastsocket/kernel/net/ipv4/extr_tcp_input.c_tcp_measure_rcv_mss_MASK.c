
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcphdr {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {unsigned int len; scalar_t__ data; } ;
struct TYPE_4__ {unsigned int last_seg_size; unsigned int rcv_mss; int pending; } ;
struct inet_connection_sock {TYPE_1__ icsk_ack; } ;
struct TYPE_6__ {scalar_t__ gso_size; } ;
struct TYPE_5__ {scalar_t__ tcp_header_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 TYPE_3__* FUNC_1 (struct sk_buff const*) ;
 scalar_t__ FUNC_2 (struct sk_buff const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff const*) ;
 TYPE_2__* FUNC_5 (struct sock*) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_5, const struct sk_buff *VAR_6)
{
 struct inet_connection_sock *VAR_7 = FUNC_0(VAR_5);
 const unsigned int VAR_8 = VAR_7->icsk_ack.last_seg_size;
 unsigned int VAR_9;

 VAR_7->icsk_ack.last_seg_size = 0;




 VAR_9 = FUNC_1(VAR_6)->gso_size ? : VAR_6->len;
 if (VAR_9 >= VAR_7->icsk_ack.rcv_mss) {
  VAR_7->icsk_ack.rcv_mss = VAR_9;
 } else {





  VAR_9 += VAR_6->data - FUNC_2(VAR_6);
  if (VAR_9 >= VAR_3 + sizeof(struct tcphdr) ||





      (VAR_9 >= VAR_2 + sizeof(struct tcphdr) &&
       !(FUNC_3(FUNC_4(VAR_6)) & VAR_4))) {




   VAR_9 -= FUNC_5(VAR_5)->tcp_header_len;
   VAR_7->icsk_ack.last_seg_size = VAR_9;
   if (VAR_9 == VAR_8) {
    VAR_7->icsk_ack.rcv_mss = VAR_9;
    return;
   }
  }
  if (VAR_7->icsk_ack.pending & VAR_0)
   VAR_7->icsk_ack.pending |= VAR_1;
  VAR_7->icsk_ack.pending |= VAR_0;
 }
}

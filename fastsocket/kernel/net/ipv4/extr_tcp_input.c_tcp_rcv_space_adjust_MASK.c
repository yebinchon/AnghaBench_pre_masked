
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* time; int seq; int space; } ;
struct TYPE_3__ {int rtt; } ;
struct tcp_sock {int copied_seq; int advmss; int window_clamp; TYPE_2__ rcvq_space; TYPE_1__ rcv_rtt_est; } ;
struct sock {int sk_userlocks; int sk_rcvbuf; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 struct tcp_sock* FUNC_2 (struct sock*) ;
 void* VAR_4 ;
 int FUNC_3 (int) ;

void FUNC_4(struct sock *VAR_5)
{
 struct tcp_sock *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;
 int VAR_8;

 if (VAR_6->rcvq_space.time == 0)
  goto new_measure;

 VAR_7 = VAR_4 - VAR_6->rcvq_space.time;
 if (VAR_7 < (VAR_6->rcv_rtt_est.rtt >> 3) || VAR_6->rcv_rtt_est.rtt == 0)
  return;

 VAR_8 = 2 * (VAR_6->copied_seq - VAR_6->rcvq_space.seq);

 VAR_8 = FUNC_0(VAR_6->rcvq_space.space, VAR_8);

 if (VAR_6->rcvq_space.space != VAR_8) {
  int VAR_9;

  VAR_6->rcvq_space.space = VAR_8;

  if (VAR_2 &&
      !(VAR_5->sk_userlocks & VAR_1)) {
   int VAR_10 = VAR_8;





   VAR_8 /= VAR_6->advmss;
   if (!VAR_8)
    VAR_8 = 1;
   VAR_9 = (VAR_6->advmss + VAR_0 +
      16 + sizeof(struct sk_buff));
   while (FUNC_3(VAR_9) < VAR_6->advmss)
    VAR_9 += 128;
   VAR_8 *= VAR_9;
   VAR_8 = FUNC_1(VAR_8, VAR_3[2]);
   if (VAR_8 > VAR_5->sk_rcvbuf) {
    VAR_5->sk_rcvbuf = VAR_8;


    VAR_6->window_clamp = VAR_10;
   }
  }
 }

new_measure:
 VAR_6->rcvq_space.seq = VAR_6->copied_seq;
 VAR_6->rcvq_space.time = VAR_4;
}

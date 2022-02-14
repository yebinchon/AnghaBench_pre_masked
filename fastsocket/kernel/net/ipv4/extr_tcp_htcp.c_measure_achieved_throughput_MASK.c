
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {int snd_cwnd; } ;
struct sock {int dummy; } ;
struct inet_connection_sock {int icsk_ca_state; } ;
struct htcp {int pkts_acked; int packetcount; int lasttime; int alpha; int minRTT; int minB; int maxB; int Bi; } ;
typedef scalar_t__ s32 ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct htcp*) ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 struct htcp* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_6, u32 VAR_7, s32 VAR_8)
{
 const struct inet_connection_sock *VAR_9 = FUNC_1(VAR_6);
 const struct tcp_sock *VAR_10 = FUNC_4(VAR_6);
 struct htcp *VAR_11 = FUNC_2(VAR_6);
 u32 VAR_12 = VAR_4;

 if (VAR_9->icsk_ca_state == VAR_3)
  VAR_11->pkts_acked = VAR_7;

 if (VAR_8 > 0)
  FUNC_3(VAR_6, FUNC_5(VAR_8));

 if (!VAR_5)
  return;


 if (!((1 << VAR_9->icsk_ca_state) & (VAR_2 | VAR_1))) {
  VAR_11->packetcount = 0;
  VAR_11->lasttime = VAR_12;
  return;
 }

 VAR_11->packetcount += VAR_7;

 if (VAR_11->packetcount >= VAR_10->snd_cwnd - (VAR_11->alpha >> 7 ? : 1)
     && VAR_12 - VAR_11->lasttime >= VAR_11->minRTT
     && VAR_11->minRTT > 0) {
  __u32 VAR_13 = VAR_11->packetcount * VAR_0 / (VAR_12 - VAR_11->lasttime);

  if (FUNC_0(VAR_11) <= 3) {

   VAR_11->minB = VAR_11->maxB = VAR_11->Bi = VAR_13;
  } else {
   VAR_11->Bi = (3 * VAR_11->Bi + VAR_13) / 4;
   if (VAR_11->Bi > VAR_11->maxB)
    VAR_11->maxB = VAR_11->Bi;
   if (VAR_11->minB > VAR_11->maxB)
    VAR_11->minB = VAR_11->maxB;
  }
  VAR_11->packetcount = 0;
  VAR_11->lasttime = VAR_12;
 }
}

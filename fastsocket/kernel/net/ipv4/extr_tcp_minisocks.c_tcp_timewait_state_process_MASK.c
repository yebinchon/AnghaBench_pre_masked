
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcphdr {int doff; scalar_t__ ack; int rst; scalar_t__ syn; int fin; } ;
struct tcp_timewait_sock {scalar_t__ tw_rcv_nxt; scalar_t__ tw_rcv_wnd; scalar_t__ tw_snd_nxt; scalar_t__ tw_ts_recent; void* tw_ts_recent_stamp; } ;
struct tcp_options_received {scalar_t__ rcv_tsval; scalar_t__ saw_tstamp; void* ts_recent_stamp; scalar_t__ ts_recent; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct inet_timewait_sock {scalar_t__ tw_substate; scalar_t__ tw_family; int tw_timeout; } ;
typedef scalar_t__ s32 ;
typedef enum tcp_tw_status { ____Placeholder_tcp_tw_status } tcp_tw_status ;
struct TYPE_6__ {scalar_t__ seq; scalar_t__ end_seq; scalar_t__ when; } ;
struct TYPE_5__ {scalar_t__ sysctl_tw_recycle; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 TYPE_4__* FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 void* FUNC_4 () ;
 int FUNC_5 (struct inet_timewait_sock*,TYPE_1__*) ;
 int FUNC_6 (struct inet_timewait_sock*) ;
 int FUNC_7 (struct inet_timewait_sock*,TYPE_1__*,int ,int ) ;
 scalar_t__ VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct sk_buff*,struct tcp_options_received*,int ) ;
 int FUNC_10 (struct tcp_options_received*,int ) ;
 struct tcp_timewait_sock* FUNC_11 (struct sock*) ;
 scalar_t__ FUNC_12 (struct inet_timewait_sock*) ;
 int FUNC_13 (struct inet_timewait_sock*) ;

enum tcp_tw_status
FUNC_14(struct inet_timewait_sock *VAR_11, struct sk_buff *VAR_12,
      const struct tcphdr *VAR_13)
{
 struct tcp_timewait_sock *VAR_14 = FUNC_11((struct sock *)VAR_11);
 struct tcp_options_received VAR_15;
 int VAR_16 = 0;

 VAR_15.saw_tstamp = 0;
 if (VAR_13->doff > (sizeof(*VAR_13) >> 2) && VAR_14->tw_ts_recent_stamp) {
  FUNC_9(VAR_12, &VAR_15, 0);

  if (VAR_15.saw_tstamp) {
   VAR_15.ts_recent = VAR_14->tw_ts_recent;
   VAR_15.ts_recent_stamp = VAR_14->tw_ts_recent_stamp;
   VAR_16 = FUNC_10(&VAR_15, VAR_13->rst);
  }
 }

 if (VAR_11->tw_substate == VAR_2) {



  if (VAR_16 ||
      !FUNC_8(FUNC_1(VAR_12)->seq, FUNC_1(VAR_12)->end_seq,
       VAR_14->tw_rcv_nxt,
       VAR_14->tw_rcv_nxt + VAR_14->tw_rcv_wnd))
   return VAR_5;

  if (VAR_13->rst)
   goto kill;

  if (VAR_13->syn && !FUNC_3(FUNC_1(VAR_12)->seq, VAR_14->tw_rcv_nxt))
   goto kill_with_rst;


  if (!VAR_13->ack ||
      !FUNC_2(FUNC_1(VAR_12)->end_seq, VAR_14->tw_rcv_nxt) ||
      FUNC_1(VAR_12)->end_seq == FUNC_1(VAR_12)->seq) {
   FUNC_6(VAR_11);
   return VAR_7;
  }




  if (!VAR_13->fin ||
      FUNC_1(VAR_12)->end_seq != VAR_14->tw_rcv_nxt + 1) {
kill_with_rst:
   FUNC_5(VAR_11, &VAR_10);
   FUNC_6(VAR_11);
   return VAR_6;
  }


  VAR_11->tw_substate = VAR_4;
  VAR_14->tw_rcv_nxt = FUNC_1(VAR_12)->end_seq;
  if (VAR_15.saw_tstamp) {
   VAR_14->tw_ts_recent_stamp = FUNC_4();
   VAR_14->tw_ts_recent = VAR_15.rcv_tsval;
  }






  if (VAR_11->tw_family == VAR_0 &&
      VAR_10.sysctl_tw_recycle && VAR_14->tw_ts_recent_stamp &&
      FUNC_12(VAR_11))
   FUNC_7(VAR_11, &VAR_10, VAR_11->tw_timeout,
        VAR_3);
  else
   FUNC_7(VAR_11, &VAR_10, VAR_3,
        VAR_3);
  return VAR_5;
 }
 if (!VAR_16 &&
     (FUNC_1(VAR_12)->seq == VAR_14->tw_rcv_nxt &&
      (FUNC_1(VAR_12)->seq == FUNC_1(VAR_12)->end_seq || VAR_13->rst))) {


  if (VAR_13->rst) {




   if (VAR_9 == 0) {
kill:
    FUNC_5(VAR_11, &VAR_10);
    FUNC_6(VAR_11);
    return VAR_7;
   }
  }
  FUNC_7(VAR_11, &VAR_10, VAR_3,
       VAR_3);

  if (VAR_15.saw_tstamp) {
   VAR_14->tw_ts_recent = VAR_15.rcv_tsval;
   VAR_14->tw_ts_recent_stamp = FUNC_4();
  }

  FUNC_6(VAR_11);
  return VAR_7;
 }
 if (VAR_13->syn && !VAR_13->rst && !VAR_13->ack && !VAR_16 &&
     (FUNC_2(FUNC_1(VAR_12)->seq, VAR_14->tw_rcv_nxt) ||
      (VAR_15.saw_tstamp &&
       (s32)(VAR_14->tw_ts_recent - VAR_15.rcv_tsval) < 0))) {
  u32 VAR_17 = VAR_14->tw_snd_nxt + 65535 + 2;
  if (VAR_17 == 0)
   VAR_17++;
  FUNC_1(VAR_12)->when = VAR_17;
  return VAR_8;
 }

 if (VAR_16)
  FUNC_0(FUNC_13(VAR_11), VAR_1);

 if (!VAR_13->rst) {






  if (VAR_16 || VAR_13->ack)
   FUNC_7(VAR_11, &VAR_10, VAR_3,
        VAR_3);




  return VAR_5;
 }
 FUNC_6(VAR_11);
 return VAR_7;
}

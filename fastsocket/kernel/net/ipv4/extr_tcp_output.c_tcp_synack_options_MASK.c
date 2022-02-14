
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcp_out_options {unsigned int mss; int options; int tsecr; int tsval; int ws; } ;
struct tcp_md5sig_key {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int ts_recent; } ;
struct inet_request_sock {char sack_ok; char wscale_ok; int rcv_wscale; scalar_t__ tstamp_ok; } ;
struct TYPE_6__ {int when; } ;
struct TYPE_5__ {TYPE_1__* af_specific; } ;
struct TYPE_4__ {struct tcp_md5sig_key* (* md5_lookup ) (struct sock*,struct request_sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 struct inet_request_sock* FUNC_1 (struct request_sock*) ;
 scalar_t__ FUNC_2 (char) ;
 struct tcp_md5sig_key* FUNC_3 (struct sock*,struct request_sock*) ;
 TYPE_2__* FUNC_4 (struct request_sock*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static unsigned FUNC_6(struct sock *VAR_9,
       struct request_sock *VAR_10,
       unsigned VAR_11, struct sk_buff *VAR_12,
       struct tcp_out_options *VAR_13,
       struct tcp_md5sig_key **VAR_14) {
 unsigned VAR_15 = 0;
 struct inet_request_sock *VAR_16 = FUNC_1(VAR_10);
 char VAR_17;
 *VAR_14 = ((void*)0);






 VAR_17 = VAR_16->tstamp_ok && !(*VAR_14 && VAR_16->sack_ok);

 VAR_13->mss = VAR_11;
 VAR_15 += VAR_5;

 if (FUNC_2(VAR_16->wscale_ok)) {
  VAR_13->ws = VAR_16->rcv_wscale;
  VAR_13->options |= VAR_3;
  VAR_15 += VAR_8;
 }
 if (FUNC_2(VAR_17)) {
  VAR_13->options |= VAR_2;
  VAR_13->tsval = FUNC_0(VAR_12)->when;
  VAR_13->tsecr = VAR_10->ts_recent;
  VAR_15 += VAR_7;
 }
 if (FUNC_2(VAR_16->sack_ok)) {
  VAR_13->options |= VAR_1;
  if (FUNC_5(!VAR_17))
   VAR_15 += VAR_6;
 }

 return VAR_15;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int rcv_wscale; int ts_recent; } ;
struct tcp_sock {TYPE_2__ rx_opt; TYPE_1__* af_specific; } ;
struct tcp_out_options {int options; int ws; int tsecr; int tsval; int mss; } ;
struct tcp_md5sig_key {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {int when; } ;
struct TYPE_4__ {struct tcp_md5sig_key* (* md5_lookup ) (struct sock*,struct sock*) ;} ;


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
 scalar_t__ FUNC_1 (int) ;
 struct tcp_md5sig_key* FUNC_2 (struct sock*,struct sock*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct sock*) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static unsigned FUNC_6(struct sock *VAR_12, struct sk_buff *VAR_13,
    struct tcp_out_options *VAR_14,
    struct tcp_md5sig_key **VAR_15) {
 struct tcp_sock *VAR_16 = FUNC_4(VAR_12);
 unsigned VAR_17 = 0;
 *VAR_15 = ((void*)0);
 VAR_14->mss = FUNC_3(VAR_12);
 VAR_17 += VAR_5;

 if (FUNC_1(VAR_10 && *VAR_15 == ((void*)0))) {
  VAR_14->options |= VAR_2;
  VAR_14->tsval = FUNC_0(VAR_13)->when;
  VAR_14->tsecr = VAR_16->rx_opt.ts_recent;
  VAR_17 += VAR_7;
 }
 if (FUNC_1(VAR_11)) {
  VAR_14->ws = VAR_16->rx_opt.rcv_wscale;
  VAR_14->options |= VAR_3;
  VAR_17 += VAR_8;
 }
 if (FUNC_1(VAR_9)) {
  VAR_14->options |= VAR_1;
  if (FUNC_5(!(VAR_2 & VAR_14->options)))
   VAR_17 += VAR_6;
 }

 return VAR_17;
}

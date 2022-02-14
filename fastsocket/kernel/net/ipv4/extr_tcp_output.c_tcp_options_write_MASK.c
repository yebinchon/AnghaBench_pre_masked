
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dsack; } ;
struct tcp_sock {TYPE_1__ rx_opt; struct tcp_sack_block* selective_acks; struct tcp_sack_block* duplicate_sack; } ;
struct tcp_sack_block {int start_seq; int end_seq; } ;
struct tcp_out_options {int options; int mss; int tsval; int tsecr; int ws; int num_sack_blocks; } ;
typedef int __u8 ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(__be32 *VAR_18, struct tcp_sock *VAR_19,
         const struct tcp_out_options *VAR_20,
         __u8 **VAR_21) {
 if (FUNC_2(VAR_0 & VAR_20->options)) {
  *VAR_18++ = FUNC_0((VAR_13 << 24) |
          (VAR_13 << 16) |
          (VAR_11 << 8) |
          VAR_4);
  *VAR_21 = (__u8 *)VAR_18;
  VAR_18 += 4;
 } else {
  *VAR_21 = ((void*)0);
 }

 if (FUNC_2(VAR_20->mss)) {
  *VAR_18++ = FUNC_0((VAR_12 << 24) |
          (VAR_5 << 16) |
          VAR_20->mss);
 }

 if (FUNC_1(VAR_2 & VAR_20->options)) {
  if (FUNC_2(VAR_1 & VAR_20->options)) {
   *VAR_18++ = FUNC_0((VAR_15 << 24) |
           (VAR_8 << 16) |
           (VAR_16 << 8) |
           VAR_9);
  } else {
   *VAR_18++ = FUNC_0((VAR_13 << 24) |
           (VAR_13 << 16) |
           (VAR_16 << 8) |
           VAR_9);
  }
  *VAR_18++ = FUNC_0(VAR_20->tsval);
  *VAR_18++ = FUNC_0(VAR_20->tsecr);
 }

 if (FUNC_2(VAR_1 & VAR_20->options &&
       !(VAR_2 & VAR_20->options))) {
  *VAR_18++ = FUNC_0((VAR_13 << 24) |
          (VAR_13 << 16) |
          (VAR_15 << 8) |
          VAR_8);
 }

 if (FUNC_2(VAR_3 & VAR_20->options)) {
  *VAR_18++ = FUNC_0((VAR_13 << 24) |
          (VAR_17 << 16) |
          (VAR_10 << 8) |
          VAR_20->ws);
 }

 if (FUNC_2(VAR_20->num_sack_blocks)) {
  struct tcp_sack_block *VAR_22 = VAR_19->rx_opt.dsack ?
   VAR_19->duplicate_sack : VAR_19->selective_acks;
  int VAR_23;

  *VAR_18++ = FUNC_0((VAR_13 << 24) |
          (VAR_13 << 16) |
          (VAR_14 << 8) |
          (VAR_6 + (VAR_20->num_sack_blocks *
           VAR_7)));

  for (VAR_23 = 0; VAR_23 < VAR_20->num_sack_blocks;
       ++VAR_23) {
   *VAR_18++ = FUNC_0(VAR_22[VAR_23].start_seq);
   *VAR_18++ = FUNC_0(VAR_22[VAR_23].end_seq);
  }

  VAR_19->rx_opt.dsack = 0;
 }
}

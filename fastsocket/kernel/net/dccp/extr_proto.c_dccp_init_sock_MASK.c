
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_write_space; int sk_state; } ;
struct inet_connection_sock {int icsk_sync_mss; int icsk_syn_retries; int icsk_rto; } ;
struct dccp_sock {int dccps_mss_cache; int dccps_l_ack_ratio; int dccps_r_ack_ratio; int dccps_featneg; int dccps_service; int dccps_role; int dccps_rate_last; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct dccp_sock* FUNC_3 (struct sock*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct inet_connection_sock* FUNC_4 (struct sock*) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int const) ;
 int VAR_7 ;

int FUNC_6(struct sock *VAR_8, const __u8 VAR_9)
{
 struct dccp_sock *VAR_10 = FUNC_3(VAR_8);
 struct inet_connection_sock *VAR_11 = FUNC_4(VAR_8);

 VAR_11->icsk_rto = VAR_3;
 VAR_11->icsk_syn_retries = VAR_7;
 VAR_8->sk_state = VAR_0;
 VAR_8->sk_write_space = VAR_5;
 VAR_11->icsk_sync_mss = VAR_4;
 VAR_10->dccps_mss_cache = 536;
 VAR_10->dccps_rate_last = VAR_6;
 VAR_10->dccps_role = VAR_1;
 VAR_10->dccps_service = VAR_2;
 VAR_10->dccps_l_ack_ratio = VAR_10->dccps_r_ack_ratio = 1;

 FUNC_2(VAR_8);

 FUNC_0(&VAR_10->dccps_featneg);

 if (FUNC_5(VAR_9))
  return FUNC_1(VAR_8);
 return 0;
}

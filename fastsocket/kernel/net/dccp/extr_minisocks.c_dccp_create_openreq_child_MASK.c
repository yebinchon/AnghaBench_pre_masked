
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int * sk_destruct; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;
struct inet_connection_sock {int icsk_rto; } ;
struct dccp_sock {int dccps_iss; int dccps_awl; int dccps_isr; int dccps_swl; int dccps_gar; int dccps_featneg; int dccps_timestamp_time; int dccps_timestamp_echo; int dccps_service; int * dccps_service_list; int * dccps_hc_rx_ackvec; int dccps_role; } ;
struct dccp_request_sock {int dreq_featneg; int dreq_isr; int dreq_iss; int dreq_timestamp_time; int dreq_timestamp_echo; int dreq_service; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sock*,int *) ;
 int FUNC_3 (struct sock*) ;
 struct dccp_request_sock* FUNC_4 (struct request_sock const*) ;
 int FUNC_5 (int *,int ) ;
 struct dccp_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (struct sock*,int ) ;
 struct inet_connection_sock* FUNC_9 (struct sock*) ;
 struct sock* FUNC_10 (struct sock*,struct request_sock const*,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct sock*) ;

struct sock *FUNC_13(struct sock *VAR_4,
           const struct request_sock *VAR_5,
           const struct sk_buff *VAR_6)
{






 struct sock *VAR_7 = FUNC_10(VAR_4, VAR_5, VAR_3);

 if (VAR_7 != ((void*)0)) {
  struct dccp_request_sock *VAR_8 = FUNC_4(VAR_5);
  struct inet_connection_sock *VAR_9 = FUNC_9(VAR_7);
  struct dccp_sock *VAR_10 = FUNC_6(VAR_7);

  VAR_10->dccps_role = VAR_1;
  VAR_10->dccps_hc_rx_ackvec = ((void*)0);
  VAR_10->dccps_service_list = ((void*)0);
  VAR_10->dccps_service = VAR_8->dreq_service;
  VAR_10->dccps_timestamp_echo = VAR_8->dreq_timestamp_echo;
  VAR_10->dccps_timestamp_time = VAR_8->dreq_timestamp_time;
  VAR_9->icsk_rto = VAR_2;

  FUNC_1(&VAR_10->dccps_featneg);







  VAR_10->dccps_gar = VAR_10->dccps_iss = VAR_8->dreq_iss;
  FUNC_8(VAR_7, VAR_8->dreq_iss);

  VAR_10->dccps_isr = VAR_8->dreq_isr;
  FUNC_7(VAR_7, VAR_8->dreq_isr);
  FUNC_5(&VAR_10->dccps_swl,
          FUNC_11(VAR_10->dccps_swl, VAR_10->dccps_isr));
  FUNC_5(&VAR_10->dccps_awl,
          FUNC_11(VAR_10->dccps_awl, VAR_10->dccps_iss));





  if (FUNC_2(VAR_7, &VAR_8->dreq_featneg)) {


   VAR_7->sk_destruct = ((void*)0);
   FUNC_12(VAR_7);
   return ((void*)0);
  }
  FUNC_3(VAR_7);

  FUNC_0(VAR_0);
 }
 return VAR_7;
}

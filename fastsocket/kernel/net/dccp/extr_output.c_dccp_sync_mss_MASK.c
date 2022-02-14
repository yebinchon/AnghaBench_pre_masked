
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct sock {int dummy; } ;
struct inet_connection_sock {unsigned int icsk_pmtu_cookie; scalar_t__ icsk_ext_hdr_len; TYPE_1__* icsk_af_ops; } ;
struct dccp_sock {int dccps_send_ndp_count; unsigned int dccps_mss_cache; scalar_t__ dccps_hc_rx_ackvec; } ;
struct dccp_hdr_ext {int dummy; } ;
struct dccp_hdr {int dummy; } ;
struct TYPE_2__ {scalar_t__ net_header_len; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct dccp_sock*) ;
 struct dccp_sock* FUNC_1 (struct sock*) ;
 struct inet_connection_sock* FUNC_2 (struct sock*) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_4 (int,int) ;

unsigned int FUNC_5(struct sock *VAR_1, u32 VAR_2)
{
 struct inet_connection_sock *VAR_3 = FUNC_2(VAR_1);
 struct dccp_sock *VAR_4 = FUNC_1(VAR_1);
 u32 VAR_5 = FUNC_0(VAR_4);
 u32 VAR_6 = VAR_5 ? FUNC_3(VAR_2, VAR_5) : VAR_2;


 VAR_6 -= (VAR_3->icsk_af_ops->net_header_len + VAR_3->icsk_ext_hdr_len +
      sizeof(struct dccp_hdr) + sizeof(struct dccp_hdr_ext));
 VAR_6 -= FUNC_4(1 + 6 + 10 + VAR_4->dccps_send_ndp_count * 8 + 6 +
      (VAR_4->dccps_hc_rx_ackvec ? VAR_0 : 0), 4);


 VAR_3->icsk_pmtu_cookie = VAR_2;
 VAR_4->dccps_mss_cache = VAR_6;

 return VAR_6;
}

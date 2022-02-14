
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ip_options {scalar_t__ cipso; } ;
struct inet_sock {scalar_t__ is_icsk; int opt; } ;
struct inet_connection_sock {int icsk_ext_hdr_len; int icsk_pmtu_cookie; int (* icsk_sync_mss ) (struct sock*,int ) ;} ;


 int FUNC_0 (int *) ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 struct inet_sock* FUNC_2 (struct sock*) ;
 struct ip_options* FUNC_3 (int ) ;
 int FUNC_4 (struct sock*,int ) ;

void FUNC_5(struct sock *VAR_0)
{
 int VAR_1;
 struct ip_options *VAR_2;
 struct inet_sock *VAR_3;

 VAR_3 = FUNC_2(VAR_0);
 VAR_2 = FUNC_3(VAR_3->opt);
 if (VAR_2 == ((void*)0) || VAR_2->cipso == 0)
  return;

 VAR_1 = FUNC_0(&VAR_3->opt);
 if (VAR_3->is_icsk && VAR_1 > 0) {
  struct inet_connection_sock *VAR_4 = FUNC_1(VAR_0);
  VAR_4->icsk_ext_hdr_len -= VAR_1;
  VAR_4->icsk_sync_mss(VAR_0, VAR_4->icsk_pmtu_cookie);
 }
}

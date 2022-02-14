
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {scalar_t__ tcp_header_len; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int enabled; int search_low; } ;
struct inet_connection_sock {int icsk_pmtu_cookie; TYPE_1__ icsk_mtup; } ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct sock*,int) ;
 int FUNC_3 (struct sock*,int ) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_6(struct inet_connection_sock *VAR_2, struct sock *VAR_3)
{

 if (VAR_1) {
  if (!VAR_2->icsk_mtup.enabled) {
   VAR_2->icsk_mtup.enabled = 1;
   FUNC_5(VAR_3, VAR_2->icsk_pmtu_cookie);
  } else {
   struct tcp_sock *VAR_4 = FUNC_4(VAR_3);
   int VAR_5;

   VAR_5 = FUNC_3(VAR_3, VAR_2->icsk_mtup.search_low) >> 1;
   VAR_5 = FUNC_1(VAR_0, VAR_5);
   VAR_5 = FUNC_0(VAR_5, 68 - VAR_4->tcp_header_len);
   VAR_2->icsk_mtup.search_low = FUNC_2(VAR_3, VAR_5);
   FUNC_5(VAR_3, VAR_2->icsk_pmtu_cookie);
  }
 }
}

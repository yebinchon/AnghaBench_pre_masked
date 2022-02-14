
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_state; int sk_dst_lock; } ;
struct ipv6_txoptions {scalar_t__ opt_nflen; scalar_t__ opt_flen; } ;
struct inet_connection_sock {int icsk_pmtu_cookie; int (* icsk_sync_mss ) (struct sock*,int ) ;scalar_t__ icsk_ext_hdr_len; } ;
struct TYPE_4__ {int opt; } ;
struct TYPE_3__ {scalar_t__ daddr; scalar_t__ is_icsk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct sock*) ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct ipv6_txoptions* FUNC_7 (int *,struct ipv6_txoptions*) ;

__attribute__((used)) static
struct ipv6_txoptions *FUNC_8(struct sock *VAR_3,
        struct ipv6_txoptions *VAR_4)
{
 if (FUNC_2(VAR_3)->is_icsk) {
  if (VAR_4 &&
      !((1 << VAR_3->sk_state) & (VAR_2 | VAR_1)) &&
      FUNC_2(VAR_3)->daddr != VAR_0) {
   struct inet_connection_sock *VAR_5 = FUNC_1(VAR_3);
   VAR_5->icsk_ext_hdr_len = VAR_4->opt_flen + VAR_4->opt_nflen;
   VAR_5->icsk_sync_mss(VAR_3, VAR_5->icsk_pmtu_cookie);
  }
  VAR_4 = FUNC_7(&FUNC_0(VAR_3)->opt, VAR_4);
 } else {
  FUNC_5(&VAR_3->sk_dst_lock);
  VAR_4 = FUNC_7(&FUNC_0(VAR_3)->opt, VAR_4);
  FUNC_6(&VAR_3->sk_dst_lock);
 }
 FUNC_3(VAR_3);

 return VAR_4;
}

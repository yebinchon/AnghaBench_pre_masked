
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; int sk_dst_cache; } ;
struct inet_connection_sock {int icsk_retransmits; scalar_t__ icsk_syn_retries; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int *) ;
 struct inet_connection_sock* FUNC_2 (struct sock*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_5)
{
 const struct inet_connection_sock *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;

 if (VAR_5->sk_state == VAR_1 || VAR_5->sk_state == VAR_0) {
  if (VAR_6->icsk_retransmits != 0)
   FUNC_1(&VAR_5->sk_dst_cache);
  VAR_7 = VAR_6->icsk_syn_retries ?
       : VAR_2;
 } else {
  if (VAR_6->icsk_retransmits >= VAR_3) {
   FUNC_1(&VAR_5->sk_dst_cache);
  }

  VAR_7 = VAR_4;



 }

 if (VAR_6->icsk_retransmits >= VAR_7) {

  FUNC_0(VAR_5);
  return 1;
 }
 return 0;
}

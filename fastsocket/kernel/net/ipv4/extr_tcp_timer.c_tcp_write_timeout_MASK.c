
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_state; int sk_dst_cache; } ;
struct inet_connection_sock {scalar_t__ icsk_rto; scalar_t__ icsk_syn_retries; scalar_t__ icsk_retransmits; } ;
struct TYPE_2__ {int icsk_user_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sock*,int,int ,int) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct sock*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct inet_connection_sock*,struct sock*) ;
 int FUNC_6 (struct sock*,int const) ;
 scalar_t__ FUNC_7 (struct sock*,int) ;
 int FUNC_8 (struct sock*) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_7)
{
 struct inet_connection_sock *VAR_8 = FUNC_1(VAR_7);
 int VAR_9;
 bool VAR_10, VAR_11 = 0;

 if ((1 << VAR_7->sk_state) & (VAR_2 | VAR_1)) {
  if (VAR_8->icsk_retransmits)
   FUNC_0(&VAR_7->sk_dst_cache);
  VAR_9 = VAR_8->icsk_syn_retries ? : VAR_6;
  VAR_11 = 1;
 } else {
  if (FUNC_2(VAR_7, VAR_4, 0, 0)) {

   FUNC_5(VAR_8, VAR_7);

   FUNC_0(&VAR_7->sk_dst_cache);
  }

  VAR_9 = VAR_5;
  if (FUNC_4(VAR_7, VAR_0)) {
   const int VAR_12 = (VAR_8->icsk_rto < VAR_3);

   VAR_9 = FUNC_6(VAR_7, VAR_12);
   VAR_10 = VAR_12 ||
       !FUNC_2(VAR_7, VAR_9, 0, 0);

   if (FUNC_7(VAR_7, VAR_10))
    return 1;
  }
 }

 if (FUNC_2(VAR_7, VAR_9,
      VAR_11 ? 0 : FUNC_3(VAR_7)->icsk_user_timeout, VAR_11)) {

  FUNC_8(VAR_7);
  return 1;
 }
 return 0;
}

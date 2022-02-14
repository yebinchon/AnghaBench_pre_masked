
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ linger2; scalar_t__ packets_out; } ;
struct sock {scalar_t__ sk_state; } ;
struct inet_connection_sock {scalar_t__ icsk_probes_out; } ;
struct TYPE_2__ {scalar_t__ icsk_user_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sock*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct inet_connection_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct tcp_sock*) ;
 scalar_t__ FUNC_6 (struct tcp_sock*) ;
 scalar_t__ FUNC_7 (struct tcp_sock*) ;
 scalar_t__ FUNC_8 (struct tcp_sock*) ;
 TYPE_1__* FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 scalar_t__ FUNC_11 (struct sock*,int ) ;
 scalar_t__ FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*,int ) ;
 scalar_t__ FUNC_17 (struct sock*) ;
 struct tcp_sock* FUNC_18 (struct sock*) ;
 int FUNC_19 (struct sock*) ;
 int FUNC_20 (struct sock*,scalar_t__,int const) ;
 int FUNC_21 (struct sock*) ;
 scalar_t__ FUNC_22 (struct sock*) ;

__attribute__((used)) static void FUNC_23 (unsigned long VAR_9)
{
 struct sock *VAR_10 = (struct sock *) VAR_9;
 struct inet_connection_sock *VAR_11 = FUNC_3(VAR_10);
 struct tcp_sock *VAR_12 = FUNC_18(VAR_10);
 u32 VAR_13;


 FUNC_1(VAR_10);
 if (FUNC_12(VAR_10)) {

  FUNC_4 (VAR_10, VAR_1/20);
  goto out;
 }

 if (VAR_10->sk_state == VAR_6) {
  FUNC_19(VAR_10);
  goto out;
 }

 if (VAR_10->sk_state == VAR_5 && FUNC_11(VAR_10, VAR_2)) {
  if (VAR_12->linger2 >= 0) {
   const int VAR_14 = FUNC_15(VAR_10) - VAR_8;

   if (VAR_14 > 0) {
    FUNC_20(VAR_10, VAR_5, VAR_14);
    goto out;
   }
  }
  FUNC_16(VAR_10, VAR_0);
  goto death;
 }

 if (!FUNC_11(VAR_10, VAR_3) || VAR_10->sk_state == VAR_4)
  goto out;

 VAR_13 = FUNC_8(VAR_12);


 if (VAR_12->packets_out || FUNC_17(VAR_10))
  goto resched;

 VAR_13 = FUNC_7(VAR_12);

 if (VAR_13 >= FUNC_8(VAR_12)) {
  u32 VAR_15 = FUNC_9(VAR_10)->icsk_user_timeout;




  if ((VAR_15 != 0 &&
      VAR_13 >= VAR_15 &&
      VAR_11->icsk_probes_out > 0) ||
      (VAR_15 == 0 &&
      VAR_11->icsk_probes_out >= FUNC_6(VAR_12))) {
   FUNC_16(VAR_10, VAR_0);
   FUNC_21(VAR_10);
   goto out;
  }
  if (FUNC_22(VAR_10) <= 0) {
   VAR_11->icsk_probes_out++;
   VAR_13 = FUNC_5(VAR_12);
  } else {



   VAR_13 = VAR_7;
  }
 } else {

  VAR_13 = FUNC_8(VAR_12) - VAR_13;
 }

 FUNC_0(VAR_10);
 FUNC_10(VAR_10);

resched:
 FUNC_4 (VAR_10, VAR_13);
 goto out;

death:
 FUNC_14(VAR_10);

out:
 FUNC_2(VAR_10);
 FUNC_13(VAR_10);
}

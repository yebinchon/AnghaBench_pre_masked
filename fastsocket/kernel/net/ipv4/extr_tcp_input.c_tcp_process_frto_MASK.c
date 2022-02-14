
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int frto_counter; scalar_t__ undo_marker; scalar_t__ snd_cwnd; int frto_highmark; int snd_una; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ icsk_retransmits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (struct sock*) ;
 int VAR_9 ;
 int FUNC_5 (struct tcp_sock*) ;
 int FUNC_6 (struct sock*,int,int) ;
 int FUNC_7 (struct tcp_sock*) ;
 int FUNC_8 (struct sock*) ;
 scalar_t__ FUNC_9 (struct tcp_sock*) ;
 int FUNC_10 (struct sock*) ;
 struct tcp_sock* FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*,int) ;
 int FUNC_13 (struct tcp_sock*) ;

__attribute__((used)) static int FUNC_14(struct sock *VAR_10, int VAR_11)
{
 struct tcp_sock *VAR_12 = FUNC_11(VAR_10);

 FUNC_13(VAR_12);


 if (VAR_11 & VAR_1)
  FUNC_2(VAR_10)->icsk_retransmits = 0;

 if ((VAR_11 & VAR_4) ||
     ((VAR_12->frto_counter >= 2) && (VAR_11 & VAR_7)))
  VAR_12->undo_marker = 0;

 if (!FUNC_1(VAR_12->snd_una, VAR_12->frto_highmark)) {
  FUNC_6(VAR_10, (VAR_12->frto_counter == 1 ? 2 : 3), VAR_11);
  return 1;
 }

 if (!FUNC_7(VAR_12)) {




  if (!(VAR_11 & VAR_0) && (VAR_11 & VAR_5))
   return 1;

  if (!(VAR_11 & VAR_1)) {
   FUNC_6(VAR_10, (VAR_12->frto_counter == 1 ? 0 : 3),
         VAR_11);
   return 1;
  }
 } else {
  if (!(VAR_11 & VAR_1) && (VAR_12->frto_counter == 1)) {
   if (!FUNC_9(VAR_12)) {
    FUNC_6(VAR_10, 2, VAR_11);
    return 1;
   }


   VAR_12->snd_cwnd = FUNC_3(VAR_12->snd_cwnd,
        FUNC_9(VAR_12));
   return 1;
  }

  if ((VAR_12->frto_counter >= 2) &&
      (!(VAR_11 & VAR_3) ||
       ((VAR_11 & VAR_2) &&
        !(VAR_11 & VAR_6)))) {

   if (!(VAR_11 & VAR_3) &&
       (VAR_11 & VAR_5))
    return 1;

   FUNC_6(VAR_10, 3, VAR_11);
   return 1;
  }
 }

 if (VAR_12->frto_counter == 1) {

  VAR_12->snd_cwnd = FUNC_9(VAR_12) + 2;
  VAR_12->frto_counter = 2;

  if (!FUNC_8(VAR_10))
   FUNC_6(VAR_10, 2, VAR_11);

  return 1;
 } else {
  switch (VAR_9) {
  case 2:
   FUNC_12(VAR_10, VAR_11);
   break;
  case 1:
   FUNC_5(VAR_12);
   break;
  default:
   FUNC_10(VAR_10);
   break;
  }
  VAR_12->frto_counter = 0;
  VAR_12->undo_marker = 0;
  FUNC_0(FUNC_4(VAR_10), VAR_8);
 }
 return 0;
}

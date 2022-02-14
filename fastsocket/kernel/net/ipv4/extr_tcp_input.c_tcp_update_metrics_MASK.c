
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {unsigned long srtt; int mdev; int snd_cwnd; int snd_ssthresh; int reordering; } ;
struct sock {int dummy; } ;
struct inet_connection_sock {scalar_t__ icsk_ca_state; scalar_t__ icsk_backoff; } ;
struct dst_entry {int flags; int* metrics; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct dst_entry* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct dst_entry*) ;
 int FUNC_2 (struct dst_entry*,int) ;
 int FUNC_3 (struct dst_entry*,int) ;
 unsigned long FUNC_4 (struct dst_entry*,int) ;
 struct inet_connection_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct dst_entry*,int,unsigned long) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_9 (struct sock*) ;

void FUNC_10(struct sock *VAR_9)
{
 struct tcp_sock *VAR_10 = FUNC_9(VAR_9);
 struct dst_entry *VAR_11 = FUNC_0(VAR_9);

 if (VAR_7)
  return;

 FUNC_1(VAR_11);

 if (VAR_11 && (VAR_11->flags & VAR_0)) {
  const struct inet_connection_sock *VAR_12 = FUNC_5(VAR_9);
  int VAR_13;
  unsigned long VAR_14;

  if (VAR_12->icsk_backoff || !VAR_10->srtt) {




   if (!(FUNC_3(VAR_11, VAR_3)))
    VAR_11->metrics[VAR_3 - 1] = 0;
   return;
  }

  VAR_14 = FUNC_4(VAR_11, VAR_3);
  VAR_13 = VAR_14 - VAR_10->srtt;





  if (!(FUNC_3(VAR_11, VAR_3))) {
   if (VAR_13 <= 0)
    FUNC_7(VAR_11, VAR_3, VAR_10->srtt);
   else
    FUNC_7(VAR_11, VAR_3, VAR_14 - (VAR_13 >> 3));
  }

  if (!(FUNC_3(VAR_11, VAR_4))) {
   unsigned long VAR_15;
   if (VAR_13 < 0)
    VAR_13 = -VAR_13;


   VAR_13 >>= 1;
   if (VAR_13 < VAR_10->mdev)
    VAR_13 = VAR_10->mdev;

   VAR_15 = FUNC_4(VAR_11, VAR_4);
   if (VAR_13 >= VAR_15)
    VAR_15 = VAR_13;
   else
    VAR_15 -= (VAR_15 - VAR_13) >> 2;

   FUNC_7(VAR_11, VAR_4, VAR_15);
  }

  if (FUNC_8(VAR_10)) {

   if (FUNC_2(VAR_11, VAR_5) &&
       !FUNC_3(VAR_11, VAR_5) &&
       (VAR_10->snd_cwnd >> 1) > FUNC_2(VAR_11, VAR_5))
    VAR_11->metrics[VAR_5-1] = VAR_10->snd_cwnd >> 1;
   if (!FUNC_3(VAR_11, VAR_1) &&
       VAR_10->snd_cwnd > FUNC_2(VAR_11, VAR_1))
    VAR_11->metrics[VAR_1 - 1] = VAR_10->snd_cwnd;
  } else if (VAR_10->snd_cwnd > VAR_10->snd_ssthresh &&
      VAR_12->icsk_ca_state == VAR_6) {

   if (!FUNC_3(VAR_11, VAR_5))
    VAR_11->metrics[VAR_5-1] =
     FUNC_6(VAR_10->snd_cwnd >> 1, VAR_10->snd_ssthresh);
   if (!FUNC_3(VAR_11, VAR_1))
    VAR_11->metrics[VAR_1-1] = (FUNC_2(VAR_11, VAR_1) + VAR_10->snd_cwnd) >> 1;
  } else {



   if (!FUNC_3(VAR_11, VAR_1))
    VAR_11->metrics[VAR_1-1] = (FUNC_2(VAR_11, VAR_1) + VAR_10->snd_ssthresh) >> 1;
   if (FUNC_2(VAR_11, VAR_5) &&
       !FUNC_3(VAR_11, VAR_5) &&
       VAR_10->snd_ssthresh > FUNC_2(VAR_11, VAR_5))
    VAR_11->metrics[VAR_5-1] = VAR_10->snd_ssthresh;
  }

  if (!FUNC_3(VAR_11, VAR_2)) {
   if (FUNC_2(VAR_11, VAR_2) < VAR_10->reordering &&
       VAR_10->reordering != VAR_8)
    VAR_11->metrics[VAR_2-1] = VAR_10->reordering;
  }
 }
}

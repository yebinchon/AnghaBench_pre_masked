
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcp_sock {int ecn_flags; int snd_nxt; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct TYPE_6__ {int seq; } ;
struct TYPE_5__ {int gso_type; } ;
struct TYPE_4__ {int cwr; int ece; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__* FUNC_4 (struct sk_buff*) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;

__attribute__((used)) static inline void FUNC_7(struct sock *VAR_4, struct sk_buff *VAR_5,
    int VAR_6)
{
 struct tcp_sock *VAR_7 = FUNC_6(VAR_4);

 if (VAR_7->ecn_flags & VAR_2) {

  if (VAR_5->len != VAR_6 &&
      !FUNC_3(FUNC_2(VAR_5)->seq, VAR_7->snd_nxt)) {
   FUNC_1(VAR_4);
   if (VAR_7->ecn_flags & VAR_3) {
    VAR_7->ecn_flags &= ~VAR_3;
    FUNC_5(VAR_5)->cwr = 1;
    FUNC_4(VAR_5)->gso_type |= VAR_0;
   }
  } else {

   FUNC_0(VAR_4);
  }
  if (VAR_7->ecn_flags & VAR_1)
   FUNC_5(VAR_5)->ece = 1;
 }
}

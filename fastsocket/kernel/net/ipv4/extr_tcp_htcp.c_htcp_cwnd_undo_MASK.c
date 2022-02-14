
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {int snd_ssthresh; int snd_cwnd; } ;
struct sock {int dummy; } ;
struct htcp {int beta; scalar_t__ undo_last_cong; int undo_old_maxB; int old_maxB; int undo_maxRTT; int maxRTT; scalar_t__ last_cong; } ;


 struct htcp* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,int) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static u32 FUNC_3(struct sock *VAR_0)
{
 const struct tcp_sock *VAR_1 = FUNC_2(VAR_0);
 struct htcp *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->undo_last_cong) {
  VAR_2->last_cong = VAR_2->undo_last_cong;
  VAR_2->maxRTT = VAR_2->undo_maxRTT;
  VAR_2->old_maxB = VAR_2->undo_old_maxB;
  VAR_2->undo_last_cong = 0;
 }

 return FUNC_1(VAR_1->snd_cwnd, (VAR_1->snd_ssthresh << 7) / VAR_2->beta);
}

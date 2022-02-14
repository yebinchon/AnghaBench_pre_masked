
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ snd_una; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int end_seq; scalar_t__ seq; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sock*,struct sk_buff*,scalar_t__) ;

__attribute__((used)) static u32 FUNC_7(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_4(VAR_0);
 u32 VAR_3;

 FUNC_0(!FUNC_2(FUNC_1(VAR_1)->end_seq, VAR_2->snd_una));

 VAR_3 = FUNC_5(VAR_1);
 if (FUNC_6(VAR_0, VAR_1, VAR_2->snd_una - FUNC_1(VAR_1)->seq))
  return 0;
 VAR_3 -= FUNC_5(VAR_1);

 if (VAR_3) {
  FUNC_0(FUNC_5(VAR_1) == 0);
  FUNC_0(!FUNC_3(FUNC_1(VAR_1)->seq, FUNC_1(VAR_1)->end_seq));
 }

 return VAR_3;
}

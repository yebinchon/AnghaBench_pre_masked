
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {scalar_t__ tx_seq; int sar; } ;
struct TYPE_3__ {int buffer_seq_srej; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,struct sk_buff*,int) ;
 struct sk_buff* FUNC_4 (int ) ;
 struct sk_buff* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_1, u8 VAR_2)
{
 struct sk_buff *VAR_3;
 u16 VAR_4 = 0;

 while((VAR_3 = FUNC_5(FUNC_0(VAR_1)))) {
  if (FUNC_1(VAR_3)->tx_seq != VAR_2)
   break;

  VAR_3 = FUNC_4(FUNC_0(VAR_1));
  VAR_4 |= FUNC_1(VAR_3)->sar << VAR_0;
  FUNC_3(VAR_1, VAR_3, VAR_4);
  FUNC_2(VAR_1)->buffer_seq_srej =
   (FUNC_2(VAR_1)->buffer_seq_srej + 1) % 64;
  VAR_2++;
 }
}

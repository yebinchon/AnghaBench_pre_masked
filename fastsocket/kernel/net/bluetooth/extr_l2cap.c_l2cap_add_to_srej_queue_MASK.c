
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ tx_seq; scalar_t__ sar; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,struct sk_buff*,struct sk_buff*) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_6 (int ,struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_0, struct sk_buff *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct sk_buff *VAR_4;

 FUNC_3(VAR_1)->tx_seq = VAR_2;
 FUNC_3(VAR_1)->sar = VAR_3;

 VAR_4 = FUNC_4(FUNC_0(VAR_0));
 if (!VAR_4) {
  FUNC_2(FUNC_0(VAR_0), VAR_1);
  return;
 }

 do {
  if (FUNC_3(VAR_4)->tx_seq > VAR_2) {
   FUNC_1(FUNC_0(VAR_0), VAR_4, VAR_1);
   return;
  }

  if (FUNC_5(FUNC_0(VAR_0), VAR_4))
   break;

 } while((VAR_4 = FUNC_6(FUNC_0(VAR_0), VAR_4)));

 FUNC_2(FUNC_0(VAR_0), VAR_1);
}

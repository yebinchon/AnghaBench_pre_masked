
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cluster {scalar_t__ highest_slave; scalar_t__ addr; scalar_t__* nodes; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 struct tipc_msg* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct tipc_msg*,scalar_t__) ;
 int FUNC_6 (struct tipc_msg*,scalar_t__) ;
 int FUNC_7 (struct tipc_msg*,int ) ;
 struct sk_buff* FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (struct sk_buff*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (char*) ;

void FUNC_12(struct cluster *VAR_2, u32 VAR_3)
{
 struct sk_buff *VAR_4;
 struct tipc_msg *VAR_5;
 u32 VAR_6 = VAR_2->highest_slave;
 u32 VAR_7;
 int VAR_8 = 0;

 FUNC_0(!FUNC_4(VAR_3));
 FUNC_0(FUNC_3(VAR_3));
 FUNC_0(FUNC_3(VAR_2->addr));
 if (VAR_6 <= VAR_0)
  return;
 VAR_4 = FUNC_8(VAR_6 - VAR_0 + 1,
         VAR_2->addr);
 if (VAR_4) {
  VAR_5 = FUNC_2(VAR_4);
  FUNC_6(VAR_5, VAR_2->addr);
  FUNC_7(VAR_5, VAR_1);
  for (VAR_7 = VAR_0; VAR_7 <= VAR_6; VAR_7++) {
   if (VAR_2->nodes[VAR_7] &&
       FUNC_10(VAR_2->nodes[VAR_7])) {
    VAR_8 = 1;
    FUNC_5(VAR_5, VAR_7);
   }
  }
  if (VAR_8)
   FUNC_9(VAR_4, VAR_3, VAR_3);
  else
   FUNC_1(VAR_4);
 } else {
  FUNC_11("Memory squeeze: broadcast of lost route failed\n");
 }
}

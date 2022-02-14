
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cluster {size_t highest_node; scalar_t__* nodes; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 struct tipc_msg* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (struct tipc_msg*,size_t) ;
 int FUNC_6 (struct tipc_msg*,int ) ;
 int FUNC_7 (struct tipc_msg*,int ) ;
 struct sk_buff* FUNC_8 (size_t,int ) ;
 int FUNC_9 (struct sk_buff*,size_t,size_t) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (char*) ;

void FUNC_12(struct cluster *VAR_1, u32 VAR_2)
{
 struct sk_buff *VAR_3;
 struct tipc_msg *VAR_4;
 u32 VAR_5 = VAR_1->highest_node;
 u32 VAR_6;
 int VAR_7 = 0;

 FUNC_0(FUNC_4(VAR_2));
 FUNC_0(FUNC_3(VAR_1->addr));
 VAR_3 = FUNC_8(VAR_5, VAR_1->addr);
 if (VAR_3) {
  VAR_4 = FUNC_2(VAR_3);
  FUNC_6(VAR_4, VAR_1->addr);
  FUNC_7(VAR_4, VAR_0);
  for (VAR_6 = 1; VAR_6 <= VAR_5; VAR_6++) {
   if (VAR_1->nodes[VAR_6] &&
       FUNC_10(VAR_1->nodes[VAR_6])) {
    VAR_7 = 1;
    FUNC_5(VAR_4, VAR_6);
   }
  }
  if (VAR_7)
   FUNC_9(VAR_3, VAR_2, VAR_2);
  else
   FUNC_1(VAR_3);
 } else {
  FUNC_11("Memory squeeze: broadcast of local route failed\n");
 }
}

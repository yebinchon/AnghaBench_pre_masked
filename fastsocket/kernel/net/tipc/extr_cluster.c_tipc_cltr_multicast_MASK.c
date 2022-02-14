
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_node {int addr; } ;
struct sk_buff {int dummy; } ;
struct cluster {int highest_slave; int highest_node; struct tipc_node** nodes; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 struct sk_buff* FUNC_6 (struct sk_buff*,int ) ;
 int VAR_2 ;
 int FUNC_7 (struct sk_buff*,int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (struct tipc_node*) ;

__attribute__((used)) static void FUNC_9(struct cluster *VAR_4, struct sk_buff *VAR_5,
    u32 VAR_6, u32 VAR_7)
{
 struct sk_buff *VAR_8;
 struct tipc_node *VAR_9;
 u32 VAR_10;
 u32 VAR_11;

 FUNC_0(VAR_6 <= VAR_7);
 FUNC_0(((VAR_6 >= 1) && (VAR_6 <= VAR_3)) ||
        ((VAR_6 >= VAR_1) && (VAR_6 <= VAR_2)));
 FUNC_0(((VAR_7 >= 1) && (VAR_7 <= VAR_3)) ||
        ((VAR_7 >= VAR_1) && (VAR_7 <= VAR_2)));
 FUNC_0(FUNC_3(VAR_4->addr));

 VAR_11 = FUNC_4(VAR_7) ? VAR_4->highest_slave : VAR_4->highest_node;
 if (VAR_11 > VAR_7)
  VAR_11 = VAR_7;
 for (VAR_10 = VAR_6; VAR_10 <= VAR_11; VAR_10++) {
  VAR_9 = VAR_4->nodes[VAR_10];
  if (VAR_9 && FUNC_8(VAR_9)) {
   VAR_8 = FUNC_6(VAR_5, VAR_0);
   if (VAR_8 == ((void*)0))
    break;
   FUNC_5(FUNC_2(VAR_8), VAR_9->addr);
   FUNC_7(VAR_8, VAR_9->addr, VAR_9->addr);
  }
 }
 FUNC_1(VAR_5);
}

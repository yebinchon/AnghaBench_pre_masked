
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_node {int addr; } ;
struct sk_buff {int dummy; } ;
struct cluster {int highest_node; int highest_slave; struct tipc_node** nodes; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 struct cluster* FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_8 (struct tipc_node*) ;
 int VAR_4 ;

void FUNC_9(struct sk_buff *VAR_5)
{
 struct sk_buff *VAR_6;
 struct cluster *VAR_7;
 struct tipc_node *VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;

 if (VAR_3 == VAR_2) {
  VAR_7 = FUNC_6(VAR_4);
  FUNC_0(FUNC_3(VAR_7->addr));


  VAR_10 = 1;
  VAR_11 = VAR_7->highest_node;
  for (VAR_12 = 1; VAR_12 <= 2; VAR_12++) {
   for (VAR_9 = VAR_10; VAR_9 <= VAR_11; VAR_9++) {
    VAR_8 = VAR_7->nodes[VAR_9];
    if (VAR_8 && FUNC_8(VAR_8)) {
     VAR_6 = FUNC_5(VAR_5, VAR_0);
     if (VAR_6 == ((void*)0))
      goto exit;
     FUNC_4(FUNC_2(VAR_6),
        VAR_8->addr);
     FUNC_7(VAR_6, VAR_8->addr,
             VAR_8->addr);
    }
   }
   VAR_10 = VAR_1;
   VAR_11 = VAR_7->highest_slave;
  }
 }
exit:
 FUNC_1(VAR_5);
}

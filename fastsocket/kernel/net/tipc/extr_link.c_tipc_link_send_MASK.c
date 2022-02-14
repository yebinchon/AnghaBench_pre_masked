
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_node {struct link** active_links; } ;
struct sk_buff {int dummy; } ;
struct link {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct link*,struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_7 (struct tipc_node*) ;
 struct tipc_node* FUNC_8 (int,int) ;
 int FUNC_9 (struct tipc_node*) ;

int FUNC_10(struct sk_buff *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct link *VAR_5;
 struct tipc_node *VAR_6;
 int VAR_7 = -VAR_0;

 FUNC_4(&VAR_1);
 VAR_6 = FUNC_8(VAR_3, VAR_4);
 if (VAR_6) {
  FUNC_7(VAR_6);
  VAR_5 = VAR_6->active_links[VAR_4 & 1];
  if (VAR_5) {
   FUNC_2("tipc_link_send: found link %x for dest %x\n", VAR_5, VAR_3);
   VAR_7 = FUNC_6(VAR_5, VAR_2);
  } else {
   FUNC_2("Attempt to send msg to unreachable node:\n");
   FUNC_3(FUNC_1(VAR_2),">>>");
   FUNC_0(VAR_2);
  }
  FUNC_9(VAR_6);
 } else {
  FUNC_2("Attempt to send msg to unknown node:\n");
  FUNC_3(FUNC_1(VAR_2),">>>");
  FUNC_0(VAR_2);
 }
 FUNC_5(&VAR_1);
 return VAR_7;
}

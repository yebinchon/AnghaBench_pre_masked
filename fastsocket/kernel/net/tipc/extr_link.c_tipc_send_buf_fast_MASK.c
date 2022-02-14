
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tipc_node {struct tipc_node** active_links; } ;
struct sk_buff {int dummy; } ;
struct link {struct link** active_links; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char*,struct sk_buff*,struct tipc_node*,size_t) ;
 scalar_t__ FUNC_2 (struct tipc_node*) ;
 int FUNC_3 (struct tipc_node*,struct sk_buff*,size_t*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 int FUNC_8 (struct tipc_node*) ;
 struct tipc_node* FUNC_9 (size_t,size_t) ;
 int FUNC_10 (struct tipc_node*) ;
 size_t VAR_2 ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,int ) ;

int FUNC_13(struct sk_buff *VAR_3, u32 VAR_4)
{
 struct link *VAR_5;
 struct tipc_node *VAR_6;
 int VAR_7;
 u32 VAR_8 = FUNC_5(FUNC_0(VAR_3)) & 1;
 u32 VAR_9;

 if (VAR_4 == VAR_2)
  return FUNC_11(VAR_3);

 FUNC_6(&VAR_1);
 VAR_6 = FUNC_9(VAR_4, VAR_8);
 if (FUNC_2(VAR_6)) {
  FUNC_8(VAR_6);
  VAR_5 = VAR_6->active_links[VAR_8];
  FUNC_1("send_fast: buf %x selected %x, destnode = %x\n",
      VAR_3, VAR_5, VAR_4);
  if (FUNC_2(VAR_5)) {
   VAR_7 = FUNC_3(VAR_5, VAR_3, &VAR_9);
   FUNC_10(VAR_6);
   FUNC_7(&VAR_1);
   return VAR_7;
  }
  FUNC_10(VAR_6);
 }
 FUNC_7(&VAR_1);
 VAR_7 = FUNC_4(FUNC_0(VAR_3));
 FUNC_12(VAR_3, VAR_0);
 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct port_list {int count; int * ports; struct port_list* next; int * member_1; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct tipc_msg*,char*) ;
 int FUNC_3 (struct tipc_msg*) ;
 int FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 (struct tipc_msg*) ;
 int FUNC_6 (struct tipc_msg*,int ) ;
 struct sk_buff* FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (int ,int ,int ,int ,struct port_list*) ;
 int FUNC_9 (struct port_list*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (char*) ;

void FUNC_12(struct sk_buff *VAR_3, struct port_list *VAR_4)
{
 struct tipc_msg* VAR_5;
 struct port_list VAR_6 = {0, ((void*)0), };
 struct port_list *VAR_7 = VAR_4;
 int VAR_8 = 0;

 VAR_5 = FUNC_1(VAR_3);



 if (VAR_4 == ((void*)0)) {
  FUNC_8(FUNC_4(VAR_5),
         FUNC_3(VAR_5),
         FUNC_5(VAR_5),
         VAR_2,
         &VAR_6);
  VAR_7 = VAR_4 = &VAR_6;
 }



 if (VAR_4->count != 0) {
  if (VAR_4->count == 1) {
   FUNC_6(VAR_5, VAR_4->ports[0]);
   FUNC_10(VAR_3);
   FUNC_9(VAR_4);
   return;
  }
  for (; VAR_8 < VAR_4->count; VAR_8++) {
   int VAR_9 = VAR_8 % VAR_1;
   struct sk_buff *VAR_10 = FUNC_7(VAR_3, VAR_0);

   if (VAR_10 == ((void*)0)) {
    FUNC_11("Unable to deliver multicast message(s)\n");
    FUNC_2(VAR_5, "LOST:");
    goto exit;
   }
   if ((VAR_9 == 0) && (VAR_8 != 0)) {
    VAR_7 = VAR_7->next;
   }
   FUNC_6(FUNC_1(VAR_10),VAR_7->ports[VAR_9]);
   FUNC_10(VAR_10);
  }
 }
exit:
 FUNC_0(VAR_3);
 FUNC_9(VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* next; } ;
struct link {struct sk_buff* proto_msg_queue; struct sk_buff* first_out; struct sk_buff* oldest_deferred_in; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct link*) ;

void FUNC_2(struct link *VAR_0)
{
 struct sk_buff *VAR_1;
 struct sk_buff *VAR_2;

 VAR_1 = VAR_0->oldest_deferred_in;
 while (VAR_1) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }

 VAR_1 = VAR_0->first_out;
 while (VAR_1) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }

 FUNC_1(VAR_0);

 FUNC_0(VAR_0->proto_msg_queue);
 VAR_0->proto_msg_queue = ((void*)0);
}

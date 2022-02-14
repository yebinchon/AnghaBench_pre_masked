
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* next; } ;
struct link {scalar_t__ out_queue_size; struct sk_buff* first_out; } ;


 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct link *VAR_0)
{
 struct sk_buff *VAR_1 = VAR_0->first_out;
 struct sk_buff *VAR_2;

 while (VAR_1) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
 VAR_0->first_out = ((void*)0);
 VAR_0->out_queue_size = 0;
}

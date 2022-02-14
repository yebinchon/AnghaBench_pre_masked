
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* next; } ;
struct link {struct sk_buff* defragm_buf; } ;


 int FUNC_0 (struct sk_buff*) ;

void FUNC_1(struct link *VAR_0)
{
 struct sk_buff *VAR_1 = VAR_0->defragm_buf;
 struct sk_buff *VAR_2;

 while (VAR_1) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
 VAR_0->defragm_buf = ((void*)0);
}

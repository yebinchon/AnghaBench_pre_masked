
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_2)
{
 if (VAR_0 != VAR_1) {
  struct sk_buff *VAR_3 = VAR_2;

  while (VAR_3) {
   FUNC_1(FUNC_0(VAR_3), "In chain: ");
   VAR_3 = VAR_3->next;
  }
 }
}

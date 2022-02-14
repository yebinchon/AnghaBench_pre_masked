
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* next; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_0)
{
 struct sk_buff *VAR_1;

 VAR_1 = FUNC_3(VAR_0, 0);
 FUNC_2(VAR_0);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 do {
  struct sk_buff *VAR_2 = VAR_1->next;
  int VAR_3;

  VAR_1->next = ((void*)0);
  VAR_3 = FUNC_5(VAR_1);

  if (FUNC_4(VAR_3)) {
   while ((VAR_1 = VAR_2)) {
    VAR_2 = VAR_1->next;
    VAR_1->next = ((void*)0);
    FUNC_2(VAR_1);
   }
   return VAR_3;
  }

  VAR_1 = VAR_2;
 } while (VAR_1);

 return 0;
}

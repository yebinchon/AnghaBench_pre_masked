
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int users; int pool_id; } ;


 int FUNC_0 (char*,int ,struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8(struct sk_buff *VAR_0)
{
 if (FUNC_7(!VAR_0))
  return;
 FUNC_0("Try to consum skb[%d] 0x%p with user reference %d\n", VAR_0->pool_id, VAR_0, FUNC_3(&VAR_0->users));
 if (FUNC_4(FUNC_3(&VAR_0->users) == 1))
  FUNC_5();
 else if (FUNC_4(!FUNC_2(&VAR_0->users)))
  return;
 FUNC_6(VAR_0);
 FUNC_1(VAR_0);
}

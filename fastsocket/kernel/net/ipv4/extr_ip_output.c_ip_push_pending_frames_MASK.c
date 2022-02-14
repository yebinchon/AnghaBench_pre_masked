
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 struct sk_buff* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sk_buff*) ;

int FUNC_2(struct sock *VAR_0)
{
 struct sk_buff *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return 0;


 return FUNC_1(VAR_1);
}

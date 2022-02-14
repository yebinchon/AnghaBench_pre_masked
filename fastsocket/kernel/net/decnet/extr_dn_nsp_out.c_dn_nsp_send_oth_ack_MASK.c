
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct sock*,int,int ) ;
 int FUNC_1 (struct sock*,struct sk_buff*,int,int,int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int) ;

void FUNC_4(struct sock *VAR_1)
{
 struct sk_buff *VAR_2 = ((void*)0);

 if ((VAR_2 = FUNC_0(VAR_1, 9, VAR_0)) == ((void*)0))
  return;

 FUNC_3(VAR_2, 9);
 FUNC_1(VAR_1, VAR_2, 0x14, 9, 1);
 FUNC_2(VAR_2);
}

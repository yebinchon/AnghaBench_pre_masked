
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_write_queue; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 struct sk_buff* FUNC_1 (int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sock*) ;

void FUNC_9(struct sock *VAR_1)
{
 struct sk_buff *VAR_2;

 while ((VAR_2 = FUNC_1(&VAR_1->sk_write_queue)) != ((void*)0)) {
  if (FUNC_7(VAR_2))
   FUNC_0(FUNC_8(VAR_1), FUNC_5(FUNC_7(VAR_2)),
          VAR_0);
  FUNC_6(VAR_2);
 }

 FUNC_4(FUNC_3(VAR_1), FUNC_2(VAR_1));
}

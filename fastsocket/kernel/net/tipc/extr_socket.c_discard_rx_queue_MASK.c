
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;


 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_1)
{
 struct sk_buff *VAR_2;

 while ((VAR_2 = FUNC_0(&VAR_1->sk_receive_queue))) {
  FUNC_1(&VAR_0);
  FUNC_2(VAR_2);
 }
}

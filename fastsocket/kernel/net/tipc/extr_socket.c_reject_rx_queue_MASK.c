
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_2)
{
 struct sk_buff *VAR_3;

 while ((VAR_3 = FUNC_0(&VAR_2->sk_receive_queue))) {
  FUNC_2(VAR_3, VAR_0);
  FUNC_1(&VAR_1);
 }
}

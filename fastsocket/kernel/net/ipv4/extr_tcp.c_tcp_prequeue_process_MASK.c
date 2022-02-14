
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ memory; int prequeue; } ;
struct tcp_sock {TYPE_1__ ucopy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct sk_buff* FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 int FUNC_5 (struct sock*) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_1)
{
 struct sk_buff *VAR_2;
 struct tcp_sock *VAR_3 = FUNC_6(VAR_1);

 FUNC_0(FUNC_5(VAR_1), VAR_0);



 FUNC_2();
 while ((VAR_2 = FUNC_1(&VAR_3->ucopy.prequeue)) != ((void*)0))
  FUNC_4(VAR_1, VAR_2);
 FUNC_3();


 VAR_3->ucopy.memory = 0;
}

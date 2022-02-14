
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_shutdown; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*,struct sk_buff*) ;
 int FUNC_1 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_2, struct sk_buff *VAR_3)
{






 VAR_2->sk_shutdown = VAR_0;
 FUNC_1(VAR_2, VAR_1);
 FUNC_0(VAR_2, VAR_3);
}

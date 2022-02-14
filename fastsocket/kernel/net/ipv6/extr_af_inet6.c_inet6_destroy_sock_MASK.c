
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ipv6_txoptions {int tot_len; } ;
struct ipv6_pinfo {int opt; int pktoptions; } ;


 int FUNC_0 (struct sock*) ;
 struct ipv6_pinfo* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*,struct ipv6_txoptions*,int ) ;
 void* FUNC_4 (int *,int *) ;

void FUNC_5(struct sock *VAR_0)
{
 struct ipv6_pinfo *VAR_1 = FUNC_1(VAR_0);
 struct sk_buff *VAR_2;
 struct ipv6_txoptions *VAR_3;



 if ((VAR_2 = FUNC_4(&VAR_1->pktoptions, ((void*)0))) != ((void*)0))
  FUNC_2(VAR_2);


 FUNC_0(VAR_0);



 if ((VAR_3 = FUNC_4(&VAR_1->opt, ((void*)0))) != ((void*)0))
  FUNC_3(VAR_0, VAR_3, VAR_3->tot_len);
}

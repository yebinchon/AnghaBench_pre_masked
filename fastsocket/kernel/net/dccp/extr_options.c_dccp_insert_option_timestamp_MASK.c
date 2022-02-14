
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
typedef int now ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,struct sk_buff*,int ,int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

int FUNC_3(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 __be32 VAR_3 = FUNC_2(FUNC_1());



 return FUNC_0(VAR_1, VAR_2, VAR_0, &VAR_3, sizeof(VAR_3));
}

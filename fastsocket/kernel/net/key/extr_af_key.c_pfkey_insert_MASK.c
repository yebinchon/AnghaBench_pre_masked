
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct netns_pfkey {int table; } ;
struct net {int dummy; } ;


 struct netns_pfkey* FUNC_0 (struct net*,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct sock*,int *) ;
 struct net* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1)
{
 struct net *VAR_2 = FUNC_4(VAR_1);
 struct netns_pfkey *VAR_3 = FUNC_0(VAR_2, VAR_0);

 FUNC_1();
 FUNC_3(VAR_1, &VAR_3->table);
 FUNC_2();
}

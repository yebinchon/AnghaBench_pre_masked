
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_wmem_alloc; int sk_rmem_alloc; int sk_receive_queue; } ;
struct netns_pfkey {int socks_nr; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct netns_pfkey* FUNC_3 (struct net*,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,struct sock*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sock*,int ) ;
 struct net* FUNC_9 (struct sock*) ;

__attribute__((used)) static void FUNC_10(struct sock *VAR_2)
{
 struct net *VAR_3 = FUNC_9(VAR_2);
 struct netns_pfkey *VAR_4 = FUNC_3(VAR_3, VAR_1);

 FUNC_5(FUNC_4(VAR_2));
 FUNC_7(&VAR_2->sk_receive_queue);

 if (!FUNC_8(VAR_2, VAR_0)) {
  FUNC_6("Attempt to release alive pfkey socket: %p\n", VAR_2);
  return;
 }

 FUNC_0(FUNC_2(&VAR_2->sk_rmem_alloc));
 FUNC_0(FUNC_2(&VAR_2->sk_wmem_alloc));

 FUNC_1(&VAR_4->socks_nr);
}

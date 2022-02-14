
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; int * ops; } ;
struct sock {int sk_destruct; int sk_family; } ;
struct netns_pfkey {int socks_nr; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 struct netns_pfkey* FUNC_2 (struct net*,int ) ;
 int FUNC_3 (struct sock*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct sock* FUNC_4 (struct net*,int ,int ,int *) ;
 int FUNC_5 (struct socket*,struct sock*) ;

__attribute__((used)) static int FUNC_6(struct net *VAR_13, struct socket *VAR_14, int VAR_15,
   int VAR_16)
{
 struct netns_pfkey *VAR_17 = FUNC_2(VAR_13, VAR_10);
 struct sock *VAR_18;
 int VAR_19;

 if (!FUNC_1(VAR_0))
  return -VAR_2;
 if (VAR_14->type != VAR_8)
  return -VAR_4;
 if (VAR_15 != VAR_7)
  return -VAR_3;

 VAR_19 = -VAR_1;
 VAR_18 = FUNC_4(VAR_13, VAR_6, VAR_5, &VAR_9);
 if (VAR_18 == ((void*)0))
  goto out;

 VAR_14->ops = &VAR_11;
 FUNC_5(VAR_14, VAR_18);

 VAR_18->sk_family = VAR_6;
 VAR_18->sk_destruct = VAR_12;

 FUNC_0(&VAR_17->socks_nr);

 FUNC_3(VAR_18);

 return 0;
out:
 return VAR_19;
}

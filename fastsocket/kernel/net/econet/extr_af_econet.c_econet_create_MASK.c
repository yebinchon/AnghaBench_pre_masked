
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; int * ops; int state; } ;
struct sock {int sk_reuse; int sk_family; } ;
struct net {int dummy; } ;
struct econet_sock {int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct econet_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int *,struct sock*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct net VAR_11 ;
 struct sock* FUNC_2 (struct net*,int ,int ,int *) ;
 int FUNC_3 (struct socket*,struct sock*) ;
 int FUNC_4 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_12, struct socket *VAR_13, int VAR_14,
    int VAR_15)
{
 struct sock *VAR_16;
 struct econet_sock *VAR_17;
 int VAR_18;

 if (VAR_12 != &VAR_11)
  return -VAR_0;


 if (VAR_13->type != VAR_5)
  return -VAR_2;

 VAR_13->state = VAR_7;

 VAR_18 = -VAR_1;
 VAR_16 = FUNC_2(VAR_12, VAR_4, VAR_3, &VAR_9);
 if (VAR_16 == ((void*)0))
  goto out;

 VAR_16->sk_reuse = 1;
 VAR_13->ops = &VAR_8;
 FUNC_3(VAR_13, VAR_16);

 VAR_17 = FUNC_0(VAR_16);
 FUNC_4(VAR_16, VAR_6);
 VAR_16->sk_family = VAR_4;
 VAR_17->num = VAR_14;

 FUNC_1(&VAR_10, VAR_16);
 return(0);
out:
 return VAR_18;
}

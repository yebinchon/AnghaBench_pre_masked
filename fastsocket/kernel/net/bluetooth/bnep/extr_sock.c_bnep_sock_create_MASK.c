
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; int state; int * ops; } ;
struct sock {int sk_protocol; int sk_state; } ;
struct net {int dummy; } ;


 int FUNC_0 (char*,struct socket*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct sock* FUNC_1 (struct net*,int ,int ,int *) ;
 int FUNC_2 (struct socket*,struct sock*) ;
 int FUNC_3 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_10, struct socket *VAR_11, int VAR_12,
       int VAR_13)
{
 struct sock *VAR_14;

 FUNC_0("sock %p", VAR_11);

 if (VAR_11->type != VAR_5)
  return -VAR_2;

 VAR_14 = FUNC_1(VAR_10, VAR_4, VAR_3, &VAR_8);
 if (!VAR_14)
  return -VAR_1;

 FUNC_2(VAR_11, VAR_14);

 VAR_11->ops = &VAR_9;

 VAR_11->state = VAR_7;

 FUNC_3(VAR_14, VAR_6);

 VAR_14->sk_protocol = VAR_12;
 VAR_14->sk_state = VAR_0;

 return 0;
}

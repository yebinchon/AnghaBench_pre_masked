
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; int * ops; int state; } ;
struct sock {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 (char*,struct socket*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 struct sock* FUNC_2 (struct net*,struct socket*,int,int ) ;
 int FUNC_3 (struct sock*,int *) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_4(struct net *VAR_10, struct socket *VAR_11, int VAR_12,
        int VAR_13)
{
 struct sock *VAR_14;

 FUNC_0("sock %p", VAR_11);

 VAR_11->state = VAR_8;

 if (VAR_11->type != VAR_7 &&
   VAR_11->type != VAR_5 && VAR_11->type != VAR_6)
  return -VAR_3;

 if (VAR_11->type == VAR_6 && !VAR_13 && !FUNC_1(VAR_0))
  return -VAR_2;

 VAR_11->ops = &VAR_9;

 VAR_14 = FUNC_2(VAR_10, VAR_11, VAR_12, VAR_4);
 if (!VAR_14)
  return -VAR_1;

 FUNC_3(VAR_14, ((void*)0));
 return 0;
}

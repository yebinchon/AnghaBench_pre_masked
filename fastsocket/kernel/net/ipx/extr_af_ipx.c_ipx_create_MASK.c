
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; int * ops; } ;
struct sock {int sk_no_check; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct net VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sock* FUNC_0 (struct net*,int ,int ,int *) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct socket*,struct sock*) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_9, struct socket *VAR_10, int VAR_11,
        int VAR_12)
{
 int VAR_13 = -VAR_2;
 struct sock *VAR_14;

 if (VAR_9 != &VAR_6)
  return -VAR_0;







 if (VAR_10->type != VAR_5)
  goto out;

 VAR_13 = -VAR_1;
 VAR_14 = FUNC_0(VAR_9, VAR_4, VAR_3, &VAR_8);
 if (!VAR_14)
  goto out;

 FUNC_1(VAR_14);
 FUNC_2(VAR_10, VAR_14);
 VAR_14->sk_no_check = 1;
 VAR_10->ops = &VAR_7;
 VAR_13 = 0;
out:
 return VAR_13;
}

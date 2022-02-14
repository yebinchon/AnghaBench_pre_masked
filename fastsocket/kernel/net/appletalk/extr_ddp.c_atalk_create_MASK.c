
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; int * ops; } ;
struct sock {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct net VAR_10 ;
 struct sock* FUNC_0 (struct net*,int ,int ,int *) ;
 int FUNC_1 (struct socket*,struct sock*) ;
 int FUNC_2 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_11, struct socket *VAR_12, int VAR_13,
   int VAR_14)
{
 struct sock *VAR_15;
 int VAR_16 = -VAR_2;

 if (VAR_11 != &VAR_10)
  return -VAR_0;





 if (VAR_12->type != VAR_6 && VAR_12->type != VAR_5)
  goto out;
 VAR_16 = -VAR_1;
 VAR_15 = FUNC_0(VAR_11, VAR_4, VAR_3, &VAR_9);
 if (!VAR_15)
  goto out;
 VAR_16 = 0;
 VAR_12->ops = &VAR_8;
 FUNC_1(VAR_12, VAR_15);


 FUNC_2(VAR_15, VAR_7);
out:
 return VAR_16;
}

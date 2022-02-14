
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_2__* sk; TYPE_1__* ops; int type; } ;
struct rds_connection {int dummy; } ;
struct inet_sock {int daddr; int saddr; int dport; int sport; } ;
struct TYPE_4__ {int sk_protocol; int sk_type; int sk_family; } ;
struct TYPE_3__ {int (* accept ) (struct socket*,struct socket*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rds_connection*) ;
 int VAR_1 ;
 int FUNC_1 (struct rds_connection*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct inet_sock* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 struct rds_connection* FUNC_4 (int ,int ,int *,int ) ;
 int FUNC_5 (struct rds_connection*) ;
 scalar_t__ FUNC_6 (struct rds_connection*) ;
 int FUNC_7 (struct rds_connection*,int ,int ) ;
 int FUNC_8 (struct rds_connection*) ;
 int FUNC_9 (struct socket*,struct rds_connection*) ;
 int FUNC_10 (int ) ;
 int VAR_5 ;
 int FUNC_11 (struct socket*) ;
 int FUNC_12 (char*,int *,int ,int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (int ,int ,int ,struct socket**) ;
 int FUNC_14 (struct socket*) ;
 int FUNC_15 (struct socket*,struct socket*,int ) ;

__attribute__((used)) static int FUNC_16(struct socket *VAR_8)
{
 struct socket *VAR_9 = ((void*)0);
 struct rds_connection *VAR_10;
 int VAR_11;
 struct inet_sock *VAR_12;

 VAR_11 = FUNC_13(VAR_8->sk->sk_family, VAR_8->sk->sk_type,
          VAR_8->sk->sk_protocol, &VAR_9);
 if (VAR_11)
  goto out;

 VAR_9->type = VAR_8->type;
 VAR_9->ops = VAR_8->ops;
 VAR_11 = VAR_8->ops->accept(VAR_8, VAR_9, VAR_1);
 if (VAR_11 < 0)
  goto out;

 FUNC_11(VAR_9);

 VAR_12 = FUNC_2(VAR_9->sk);

 FUNC_12("accepted tcp %pI4:%u -> %pI4:%u\n",
   &VAR_12->saddr, FUNC_3(VAR_12->sport),
   &VAR_12->daddr, FUNC_3(VAR_12->dport));

 VAR_10 = FUNC_4(VAR_12->saddr, VAR_12->daddr, &VAR_5,
          VAR_0);
 if (FUNC_0(VAR_10)) {
  VAR_11 = FUNC_1(VAR_10);
  goto out;
 }




 if (!FUNC_7(VAR_10, VAR_3, VAR_2)) {
  if (FUNC_6(VAR_10) == VAR_4)
   FUNC_10(VAR_7);
  else
   FUNC_10(VAR_6);
  FUNC_5(VAR_10);
  VAR_11 = 0;
  goto out;
 }

 FUNC_9(VAR_9, VAR_10);
 FUNC_8(VAR_10);
 VAR_9 = ((void*)0);
 VAR_11 = 0;

out:
 if (VAR_9)
  FUNC_14(VAR_9);
 return VAR_11;
}

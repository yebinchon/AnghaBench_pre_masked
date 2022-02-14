
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; struct sock* sk; } ;
struct sock {int sk_protocol; int sk_type; int sk_family; } ;
struct TYPE_2__ {int (* accept ) (struct socket*,struct socket*,int) ;int owner; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,struct socket**) ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*,struct socket*,int) ;

int FUNC_4(struct socket *VAR_0, struct socket **VAR_1, int VAR_2)
{
 struct sock *VAR_3 = VAR_0->sk;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->sk_family, VAR_3->sk_type, VAR_3->sk_protocol,
          VAR_1);
 if (VAR_4 < 0)
  goto done;

 VAR_4 = VAR_0->ops->accept(VAR_0, *VAR_1, VAR_2);
 if (VAR_4 < 0) {
  FUNC_2(*VAR_1);
  *VAR_1 = ((void*)0);
  goto done;
 }

 (*VAR_1)->ops = VAR_0->ops;
 FUNC_0((*VAR_1)->ops->owner);

done:
 return VAR_4;
}

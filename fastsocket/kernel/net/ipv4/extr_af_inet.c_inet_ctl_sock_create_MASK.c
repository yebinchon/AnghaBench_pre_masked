
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {TYPE_1__* sk_prot; int sk_allocation; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int (* unhash ) (struct sock*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,struct net*) ;
 int FUNC_1 (unsigned short,unsigned short,unsigned char,struct socket**) ;
 int FUNC_2 (struct sock*) ;

int FUNC_3(struct sock **VAR_1, unsigned short VAR_2,
    unsigned short VAR_3, unsigned char VAR_4,
    struct net *VAR_5)
{
 struct socket *VAR_6;
 int VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_6);

 if (VAR_7 == 0) {
  *VAR_1 = VAR_6->sk;
  (*VAR_1)->sk_allocation = VAR_0;




  (*VAR_1)->sk_prot->unhash(*VAR_1);

  FUNC_0(*VAR_1, VAR_5);
 }
 return VAR_7;
}

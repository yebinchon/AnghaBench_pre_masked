
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uio {int dummy; } ;
struct socket {TYPE_2__* so_proto; int so_vnet; } ;
struct sockaddr {int dummy; } ;
struct mbuf {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_3__ {int (* pru_soreceive ) (struct socket*,struct sockaddr**,struct uio*,struct mbuf**,struct mbuf**,int*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*,struct sockaddr**,struct uio*,struct mbuf**,struct mbuf**,int*) ;

int
FUNC_4(struct socket *VAR_1, struct sockaddr **VAR_2, struct uio *VAR_3,
    struct mbuf **VAR_4, struct mbuf **VAR_5, int *VAR_6)
{
 int VAR_7;

 FUNC_1(VAR_1->so_vnet);
 if (!FUNC_2(VAR_1))
  VAR_7 = (VAR_1->so_proto->pr_usrreqs->pru_soreceive(VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5, VAR_6));
 else
  VAR_7 = VAR_0;
 FUNC_0();
 return (VAR_7);
}

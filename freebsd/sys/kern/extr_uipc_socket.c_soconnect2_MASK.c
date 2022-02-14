
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_2__* so_proto; int so_vnet; } ;
struct TYPE_4__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_3__ {int (* pru_connect2 ) (struct socket*,struct socket*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct socket*,struct socket*) ;

int
FUNC_3(struct socket *VAR_0, struct socket *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_0->so_vnet);
 VAR_2 = (*VAR_0->so_proto->pr_usrreqs->pru_connect2)(VAR_0, VAR_1);
 FUNC_0();
 return (VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int so_state; TYPE_2__* so_proto; int so_vnet; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_3__ {int (* pru_accept ) (struct socket*,struct sockaddr**) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct socket*) ;
 int FUNC_4 (struct socket*) ;
 int VAR_0 ;
 int FUNC_5 (struct socket*,struct sockaddr**) ;

int
FUNC_6(struct socket *VAR_1, struct sockaddr **VAR_2)
{
 int VAR_3;

 FUNC_3(VAR_1);
 FUNC_2((VAR_1->so_state & VAR_0) != 0, ("soaccept: !NOFDREF"));
 VAR_1->so_state &= ~VAR_0;
 FUNC_4(VAR_1);

 FUNC_1(VAR_1->so_vnet);
 VAR_3 = (*VAR_1->so_proto->pr_usrreqs->pru_accept)(VAR_1, VAR_2);
 FUNC_0();
 return (VAR_3);
}

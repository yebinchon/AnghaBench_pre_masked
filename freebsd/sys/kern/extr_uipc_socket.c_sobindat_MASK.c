
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct socket {TYPE_2__* so_proto; int so_vnet; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_3__ {int (* pru_bindat ) (int,struct socket*,struct sockaddr*,struct thread*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,struct socket*,struct sockaddr*,struct thread*) ;

int
FUNC_3(int VAR_0, struct socket *VAR_1, struct sockaddr *VAR_2, struct thread *VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_1->so_vnet);
 VAR_4 = (*VAR_1->so_proto->pr_usrreqs->pru_bindat)(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_0();
 return (VAR_4);
}

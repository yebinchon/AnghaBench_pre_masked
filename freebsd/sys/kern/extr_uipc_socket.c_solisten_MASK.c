
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct socket {TYPE_2__* so_proto; int so_vnet; } ;
struct TYPE_4__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_3__ {int (* pru_listen ) (struct socket*,int,struct thread*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct socket*,int,struct thread*) ;

int
FUNC_3(struct socket *VAR_0, int VAR_1, struct thread *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_0->so_vnet);
 VAR_3 = (*VAR_0->so_proto->pr_usrreqs->pru_listen)(VAR_0, VAR_1, VAR_2);
 FUNC_0();
 return (VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int so_state; TYPE_2__* so_proto; } ;
struct TYPE_4__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_3__ {int (* pru_disconnect ) (struct socket*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct socket*) ;
 int FUNC_1 (struct socket*) ;

int
FUNC_2(struct socket *VAR_4)
{
 int VAR_5;

 if ((VAR_4->so_state & VAR_2) == 0)
  return (VAR_1);
 if (VAR_4->so_state & VAR_3)
  return (VAR_0);
 FUNC_0(VAR_4);
 VAR_5 = (*VAR_4->so_proto->pr_usrreqs->pru_disconnect)(VAR_4);
 return (VAR_5);
}

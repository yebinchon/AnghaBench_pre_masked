
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {scalar_t__ so_count; int so_state; TYPE_2__* so_proto; } ;
struct TYPE_4__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_3__ {int (* pru_abort ) (struct socket*) ;} ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct socket*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*) ;
 int FUNC_4 (struct socket*) ;

void
FUNC_5(struct socket *VAR_2)
{







 FUNC_0(VAR_2->so_count == 0, ("soabort: so_count"));
 FUNC_0((VAR_2->so_state & VAR_1) == 0, ("soabort: SS_PROTOREF"));
 FUNC_0(VAR_2->so_state & VAR_0, ("soabort: !SS_NOFDREF"));
 FUNC_2(VAR_2);

 if (VAR_2->so_proto->pr_usrreqs->pru_abort != ((void*)0))
  (*VAR_2->so_proto->pr_usrreqs->pru_abort)(VAR_2);
 FUNC_1(VAR_2);
 FUNC_3(VAR_2);
}

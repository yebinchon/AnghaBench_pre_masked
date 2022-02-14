
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct socket {int so_options; int so_state; TYPE_2__* so_proto; scalar_t__ so_error; int so_vnet; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {int pr_flags; TYPE_1__* pr_usrreqs; } ;
struct TYPE_3__ {int (* pru_connect ) (struct socket*,struct sockaddr*,struct thread*) ;int (* pru_connectat ) (int,struct socket*,struct sockaddr*,struct thread*) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*,struct sockaddr*,struct thread*) ;
 int FUNC_4 (int,struct socket*,struct sockaddr*,struct thread*) ;

int
FUNC_5(int VAR_7, struct socket *VAR_8, struct sockaddr *VAR_9, struct thread *VAR_10)
{
 int VAR_11;

 if (VAR_8->so_options & VAR_4)
  return (VAR_2);

 FUNC_1(VAR_8->so_vnet);





 if (VAR_8->so_state & (VAR_5|VAR_6) &&
     ((VAR_8->so_proto->pr_flags & VAR_3) ||
     (VAR_11 = FUNC_2(VAR_8)))) {
  VAR_11 = VAR_1;
 } else {




  VAR_8->so_error = 0;
  if (VAR_7 == VAR_0) {
   VAR_11 = (*VAR_8->so_proto->pr_usrreqs->pru_connect)(VAR_8,
       VAR_9, VAR_10);
  } else {
   VAR_11 = (*VAR_8->so_proto->pr_usrreqs->pru_connectat)(VAR_7,
       VAR_8, VAR_9, VAR_10);
  }
 }
 FUNC_0();

 return (VAR_11);
}

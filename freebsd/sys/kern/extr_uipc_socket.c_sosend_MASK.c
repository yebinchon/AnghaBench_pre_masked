
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uio {int dummy; } ;
struct thread {int dummy; } ;
struct socket {TYPE_2__* so_proto; int so_vnet; } ;
struct sockaddr {int dummy; } ;
struct mbuf {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_3__ {int (* pru_sosend ) (struct socket*,struct sockaddr*,struct uio*,struct mbuf*,struct mbuf*,int,struct thread*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (struct socket*,struct sockaddr*,struct uio*,struct mbuf*,struct mbuf*,int,struct thread*) ;

int
FUNC_5(struct socket *VAR_1, struct sockaddr *VAR_2, struct uio *VAR_3,
    struct mbuf *VAR_4, struct mbuf *VAR_5, int VAR_6, struct thread *VAR_7)
{
 int VAR_8;

 FUNC_1(VAR_1->so_vnet);
 if (!FUNC_2(VAR_1))
  VAR_8 = VAR_1->so_proto->pr_usrreqs->pru_sosend(VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5, VAR_6, VAR_7);
 else {
  FUNC_3(VAR_4);
  FUNC_3(VAR_5);
  VAR_8 = VAR_0;
 }
 FUNC_0();
 return (VAR_8);
}

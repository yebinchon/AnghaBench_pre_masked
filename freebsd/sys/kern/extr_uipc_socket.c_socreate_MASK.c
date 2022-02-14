
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct thread {TYPE_2__* td_proc; } ;
struct TYPE_9__ {int si_note; } ;
struct TYPE_8__ {int si_note; } ;
struct socket {int so_type; int so_vnet; TYPE_4__ so_wrsel; TYPE_3__ so_rdsel; struct protosw* so_proto; scalar_t__ so_fibnum; int so_cred; } ;
struct protosw {int pr_type; TYPE_5__* pr_usrreqs; TYPE_1__* pr_domain; } ;
struct TYPE_10__ {int (* pru_attach ) (struct socket*,int,struct thread*) ;} ;
struct TYPE_7__ {scalar_t__ p_fibnum; } ;
struct TYPE_6__ {scalar_t__ dom_family; } ;


 int FUNC_0 (struct ucred*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct ucred*) ;
 int FUNC_4 (int *,struct socket*,int ,int ,int ,int ) ;
 int FUNC_5 (struct ucred*,struct socket*) ;
 int * FUNC_6 (int) ;
 struct protosw* FUNC_7 (int,int,int) ;
 struct protosw* FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (struct ucred*,scalar_t__) ;
 int FUNC_10 (struct socket*,int,struct thread*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct socket* FUNC_11 (int ) ;
 int FUNC_12 (struct socket*) ;
 int FUNC_13 (struct socket*) ;
 int FUNC_14 (struct socket*,int,struct thread*) ;

int
FUNC_15(int VAR_15, struct socket **VAR_16, int VAR_17, int VAR_18,
    struct ucred *VAR_19, struct thread *VAR_20)
{
 struct protosw *VAR_21;
 struct socket *VAR_22;
 int VAR_23;

 if (VAR_18)
  VAR_21 = FUNC_7(VAR_15, VAR_18, VAR_17);
 else
  VAR_21 = FUNC_8(VAR_15, VAR_17);

 if (VAR_21 == ((void*)0)) {

  if (FUNC_6(VAR_15) == ((void*)0))
   return (VAR_0);

  if (VAR_18 == 0 && VAR_17 != 0)
   return (VAR_3);
  return (VAR_2);
 }
 if (VAR_21->pr_usrreqs->pru_attach == ((void*)0) ||
     VAR_21->pr_usrreqs->pru_attach == FUNC_10)
  return (VAR_2);

 if (FUNC_9(VAR_19, VAR_21->pr_domain->dom_family) != 0)
  return (VAR_2);

 if (VAR_21->pr_type != VAR_17)
  return (VAR_3);
 VAR_22 = FUNC_11(FUNC_0(VAR_19));
 if (VAR_22 == ((void*)0))
  return (VAR_1);

 VAR_22->so_type = VAR_17;
 VAR_22->so_cred = FUNC_3(VAR_19);
 if ((VAR_21->pr_domain->dom_family == VAR_4) ||
     (VAR_21->pr_domain->dom_family == VAR_5) ||
     (VAR_21->pr_domain->dom_family == VAR_6))
  VAR_22->so_fibnum = VAR_20->td_proc->p_fibnum;
 else
  VAR_22->so_fibnum = 0;
 VAR_22->so_proto = VAR_21;



 FUNC_4(&VAR_22->so_rdsel.si_note, VAR_22, VAR_9, VAR_10,
     VAR_7, VAR_8);
 FUNC_4(&VAR_22->so_wrsel.si_note, VAR_22, VAR_13, VAR_14,
     VAR_11, VAR_12);




 FUNC_2(VAR_22->so_vnet);
 VAR_23 = (*VAR_21->pr_usrreqs->pru_attach)(VAR_22, VAR_18, VAR_20);
 FUNC_1();
 if (VAR_23) {
  FUNC_12(VAR_22);
  return (VAR_23);
 }
 FUNC_13(VAR_22);
 *VAR_16 = VAR_22;
 return (0);
}

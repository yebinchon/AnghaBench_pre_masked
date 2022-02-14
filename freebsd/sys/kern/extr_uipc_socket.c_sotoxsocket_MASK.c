
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xsocket {int xso_len; uintptr_t xso_so; uintptr_t so_pcb; int so_rcv; int so_snd; scalar_t__ so_oobmark; scalar_t__ so_qlimit; scalar_t__ so_incqlen; scalar_t__ so_qlen; int so_state; int so_pgid; int so_uid; int so_error; int so_timeo; int xso_family; int xso_protocol; int so_linger; int so_options; int so_type; } ;
struct socket {int so_rcv; int so_snd; scalar_t__ so_oobmark; int so_qstate; scalar_t__ sol_qlimit; scalar_t__ sol_incqlen; scalar_t__ sol_qlen; TYPE_4__* so_sigio; TYPE_3__* so_cred; int so_error; int so_timeo; TYPE_2__* so_proto; scalar_t__ so_pcb; int so_state; int so_linger; int so_options; int so_type; } ;
struct TYPE_8__ {int sio_pgid; } ;
struct TYPE_7__ {int cr_uid; } ;
struct TYPE_6__ {TYPE_1__* pr_domain; int pr_protocol; } ;
struct TYPE_5__ {int dom_family; } ;


 scalar_t__ FUNC_0 (struct socket*) ;
 int FUNC_1 (struct xsocket*,int) ;
 int FUNC_2 (int *,int *) ;

void
FUNC_3(struct socket *VAR_0, struct xsocket *VAR_1)
{

 FUNC_1(VAR_1, sizeof(*VAR_1));
 VAR_1->xso_len = sizeof *VAR_1;
 VAR_1->xso_so = (uintptr_t)VAR_0;
 VAR_1->so_type = VAR_0->so_type;
 VAR_1->so_options = VAR_0->so_options;
 VAR_1->so_linger = VAR_0->so_linger;
 VAR_1->so_state = VAR_0->so_state;
 VAR_1->so_pcb = (uintptr_t)VAR_0->so_pcb;
 VAR_1->xso_protocol = VAR_0->so_proto->pr_protocol;
 VAR_1->xso_family = VAR_0->so_proto->pr_domain->dom_family;
 VAR_1->so_timeo = VAR_0->so_timeo;
 VAR_1->so_error = VAR_0->so_error;
 VAR_1->so_uid = VAR_0->so_cred->cr_uid;
 VAR_1->so_pgid = VAR_0->so_sigio ? VAR_0->so_sigio->sio_pgid : 0;
 if (FUNC_0(VAR_0)) {
  VAR_1->so_qlen = VAR_0->sol_qlen;
  VAR_1->so_incqlen = VAR_0->sol_incqlen;
  VAR_1->so_qlimit = VAR_0->sol_qlimit;
  VAR_1->so_oobmark = 0;
 } else {
  VAR_1->so_state |= VAR_0->so_qstate;
  VAR_1->so_qlen = VAR_1->so_incqlen = VAR_1->so_qlimit = 0;
  VAR_1->so_oobmark = VAR_0->so_oobmark;
  FUNC_2(&VAR_0->so_snd, &VAR_1->so_snd);
  FUNC_2(&VAR_0->so_rcv, &VAR_1->so_rcv);
 }
}

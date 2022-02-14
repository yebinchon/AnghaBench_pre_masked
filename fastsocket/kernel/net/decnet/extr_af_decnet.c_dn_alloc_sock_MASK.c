
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {int * ops; } ;
struct sock {int sk_no_check; int sk_rcvbuf; int sk_sndbuf; int sk_allocation; scalar_t__ sk_protocol; int sk_family; int sk_destruct; int sk_backlog_rcv; } ;
struct net {int dummy; } ;
struct TYPE_6__ {int acc_accl; int acc_acc; } ;
struct TYPE_5__ {void* sdn_family; } ;
struct TYPE_4__ {void* sdn_family; } ;
struct dn_scp {int numdat; int numoth; int flowrem_oth; int flowloc_oth; int services_loc; int info_loc; int multi_ireq; int keepalive; int delack_fxn; scalar_t__ delack_pending; int delack_timer; int keepalive_fxn; int * persist_fxn; scalar_t__ persist; int other_receive_queue; int other_xmit_queue; int data_xmit_queue; scalar_t__ nsp_rxtshift; int nsp_rttvar; int nsp_srtt; int snd_window; int max_window; TYPE_3__ accessdata; TYPE_2__ peer; TYPE_1__ addr; int accept_mode; scalar_t__ nonagle; scalar_t__ segsize_rem; scalar_t__ info_rem; scalar_t__ services_rem; scalar_t__ flowloc_dat; scalar_t__ flowrem_dat; void* flowloc_sw; void* flowrem_sw; scalar_t__ ackrcv_oth; scalar_t__ ackrcv_dat; scalar_t__ ackxmt_oth; scalar_t__ ackxmt_dat; int state; } ;
typedef int gfp_t ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 struct dn_scp* FUNC_0 (struct sock*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int) ;
 struct sock* FUNC_4 (struct net*,int ,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct socket*,struct sock*) ;
 int * VAR_18 ;
 int * VAR_19 ;

__attribute__((used)) static struct sock *FUNC_7(struct net *VAR_20, struct socket *VAR_21, gfp_t VAR_22)
{
 struct dn_scp *VAR_23;
 struct sock *VAR_24 = FUNC_4(VAR_20, VAR_11, VAR_22, &VAR_16);

 if (!VAR_24)
  goto out;

 if (VAR_21)
  VAR_21->ops = &VAR_17;
 FUNC_6(VAR_21, VAR_24);

 VAR_24->sk_backlog_rcv = VAR_14;
 VAR_24->sk_destruct = VAR_12;
 VAR_24->sk_no_check = 1;
 VAR_24->sk_family = VAR_11;
 VAR_24->sk_protocol = 0;
 VAR_24->sk_allocation = VAR_22;
 VAR_24->sk_sndbuf = VAR_19[1];
 VAR_24->sk_rcvbuf = VAR_18[1];


 VAR_23 = FUNC_0(VAR_24);
 VAR_23->state = VAR_3;
 VAR_23->numdat = 1;
 VAR_23->numoth = 1;
 VAR_23->ackxmt_dat = 0;
 VAR_23->ackxmt_oth = 0;
 VAR_23->ackrcv_dat = 0;
 VAR_23->ackrcv_oth = 0;
 VAR_23->flowrem_sw = VAR_4;
 VAR_23->flowloc_sw = VAR_4;
 VAR_23->flowrem_dat = 0;
 VAR_23->flowrem_oth = 1;
 VAR_23->flowloc_dat = 0;
 VAR_23->flowloc_oth = 1;
 VAR_23->services_rem = 0;
 VAR_23->services_loc = 1 | VAR_6;
 VAR_23->info_rem = 0;
 VAR_23->info_loc = 0x03;
 VAR_23->segsize_rem = 230 - VAR_2;
 VAR_23->nonagle = 0;
 VAR_23->multi_ireq = 1;
 VAR_23->accept_mode = VAR_0;
 VAR_23->addr.sdn_family = VAR_1;
 VAR_23->peer.sdn_family = VAR_1;
 VAR_23->accessdata.acc_accl = 5;
 FUNC_3(VAR_23->accessdata.acc_acc, "LINUX", 5);

 VAR_23->max_window = VAR_9;
 VAR_23->snd_window = VAR_10;
 VAR_23->nsp_srtt = VAR_8;
 VAR_23->nsp_rttvar = VAR_7;
 VAR_23->nsp_rxtshift = 0;

 FUNC_5(&VAR_23->data_xmit_queue);
 FUNC_5(&VAR_23->other_xmit_queue);
 FUNC_5(&VAR_23->other_receive_queue);

 VAR_23->persist = 0;
 VAR_23->persist_fxn = ((void*)0);
 VAR_23->keepalive = 10 * VAR_5;
 VAR_23->keepalive_fxn = VAR_13;

 FUNC_2(&VAR_23->delack_timer);
 VAR_23->delack_pending = 0;
 VAR_23->delack_fxn = VAR_15;

 FUNC_1(VAR_24);
out:
 return VAR_24;
}

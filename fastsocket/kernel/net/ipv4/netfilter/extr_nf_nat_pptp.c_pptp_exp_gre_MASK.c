
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct nf_nat_pptp {int pac_call_id; int pns_call_id; } ;
struct nf_ct_pptp_master {int pns_call_id; int pac_call_id; } ;
struct TYPE_25__ {int key; } ;
struct TYPE_26__ {TYPE_8__ gre; } ;
struct TYPE_14__ {TYPE_9__ u; } ;
struct TYPE_22__ {int key; } ;
struct TYPE_23__ {TYPE_5__ gre; } ;
struct TYPE_24__ {TYPE_6__ u; } ;
struct TYPE_15__ {TYPE_10__ dst; TYPE_7__ src; } ;
struct TYPE_20__ {int key; } ;
struct TYPE_21__ {TYPE_3__ gre; } ;
struct nf_conntrack_expect {int dir; TYPE_11__ tuple; TYPE_4__ saved_proto; struct nf_conn* master; } ;
struct nf_conn {int dummy; } ;
struct TYPE_19__ {struct nf_nat_pptp nat_pptp_info; } ;
struct TYPE_18__ {struct nf_ct_pptp_master ct_pptp_info; } ;
struct TYPE_17__ {TYPE_1__ help; } ;
struct TYPE_16__ {TYPE_2__ help; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_13__* FUNC_0 (struct nf_conn const*) ;
 TYPE_12__* FUNC_1 (struct nf_conn const*) ;

__attribute__((used)) static void
FUNC_2(struct nf_conntrack_expect *VAR_2,
      struct nf_conntrack_expect *VAR_3)
{
 const struct nf_conn *VAR_4 = VAR_2->master;
 struct nf_ct_pptp_master *VAR_5;
 struct nf_nat_pptp *VAR_6;

 VAR_5 = &FUNC_0(VAR_4)->help.ct_pptp_info;
 VAR_6 = &FUNC_1(VAR_4)->help.nat_pptp_info;


 VAR_6->pac_call_id = VAR_5->pac_call_id;


 VAR_2->saved_proto.gre.key = VAR_5->pns_call_id;
 VAR_2->tuple.src.u.gre.key = VAR_6->pns_call_id;
 VAR_2->tuple.dst.u.gre.key = VAR_5->pac_call_id;
 VAR_2->dir = VAR_0;


 VAR_3->saved_proto.gre.key = VAR_6->pns_call_id;
 VAR_3->tuple.src.u.gre.key = VAR_6->pac_call_id;
 VAR_3->tuple.dst.u.gre.key = VAR_5->pns_call_id;
 VAR_3->dir = VAR_1;
}

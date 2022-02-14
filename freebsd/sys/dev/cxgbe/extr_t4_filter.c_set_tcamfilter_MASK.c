
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int ;
struct wrq_cookie {int dummy; } ;
struct TYPE_10__ {int pfvf_vld; int ovlan_vld; int ethtype; int vlan; int vnic; int dport; int sport; int sip; int dip; int tos; int proto; int matchtype; int iport; int fcoe; int macidx; int vlan_vld; int frag; } ;
struct TYPE_9__ {int pfvf_vld; int ovlan_vld; int ethtype; int vlan; int vnic; int dport; int sport; int sip; int dip; int tos; int proto; int matchtype; int iport; int fcoe; int macidx; int vlan_vld; int frag; } ;
struct TYPE_12__ {scalar_t__ action; scalar_t__ newvlan; int nat_dport; int nat_sport; int nat_seq_chk; int nat_sip; int nat_dip; scalar_t__ nat_mode; int nat_flag_chk; int swapmac; TYPE_3__ mask; TYPE_2__ val; scalar_t__ prio; int eport; int hitcnts; int newsmac; int newdmac; int dirsteerhash; int maskhash; int dirsteer; int rpttid; int iq; scalar_t__ type; int hash; } ;
struct t4_filter {size_t idx; TYPE_5__ fs; } ;
struct smt_entry {int dummy; } ;
struct l2t_entry {int idx; } ;
struct fw_filter_wr {int dummy; } ;
struct fw_filter2_wr {int frag_to_ovlan_vldm; int natmode_to_ulp_type; void* natseqcheck; void* newfport; void* newlport; int newfip; int newlip; int filter_type_swapmac; struct fw_filter2_wr* sma; void* fpm; void* fp; void* lpm; void* lp; int fipm; int fip; int lipm; int lip; void* ovlanm; void* ovlan; void* ivlanm; void* ivlan; int ttypm; int ttyp; int ptclm; int ptcl; void* maci_to_matchtypem; void* rx_chan_rx_rpl_iq; scalar_t__ smac_sel; void* ethtypem; void* ethtype; void* del_filter_to_l2tix; void* tid_to_iq; void* len16_pkd; void* op_pkd; } ;
struct filter_entry {int pending; int valid; int tid; TYPE_5__ fs; struct l2t_entry* l2te; struct smt_entry* smt; scalar_t__ locked; } ;
struct TYPE_14__ {size_t nhpftids; int hpftid_base; size_t nftids; int ftid_base; int ftid_lock; int ftid_cv; int ftids_in_use; int hpftids_in_use; struct filter_entry* ftid_tab; struct filter_entry* hpftid_tab; } ;
struct TYPE_8__ {int abs_id; } ;
struct TYPE_13__ {int * ctrlq; TYPE_1__ fwq; } ;
struct TYPE_11__ {scalar_t__ filter2_wr_support; } ;
struct adapter {TYPE_7__ tids; TYPE_6__ sge; TYPE_4__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct fw_filter2_wr) ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int) ;
 int FUNC_28 (int) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (scalar_t__) ;
 int FUNC_32 (int) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (scalar_t__) ;
 int FUNC_35 (int ) ;
 int FUNC_36 (int ) ;
 int FUNC_37 (int ) ;
 int FUNC_38 (int) ;
 int FUNC_39 (int ) ;
 int FUNC_40 (int ) ;
 scalar_t__ FUNC_41 (int ) ;
 int FUNC_42 (int ,int ,int) ;
 int FUNC_43 (struct fw_filter2_wr*,int) ;
 int FUNC_44 (int *,struct fw_filter2_wr*,struct wrq_cookie*) ;
 scalar_t__ FUNC_45 (int *,int *) ;
 int FUNC_46 (int,int) ;
 void* FUNC_47 (int) ;
 void* FUNC_48 (int) ;
 int FUNC_49 (int ,int ,int) ;
 int FUNC_50 (int *) ;
 int FUNC_51 (int *) ;
 scalar_t__ FUNC_52 (struct adapter*) ;
 struct fw_filter2_wr* FUNC_53 (int *,int,struct wrq_cookie*) ;

__attribute__((used)) static int
FUNC_54(struct adapter *VAR_14, struct t4_filter *VAR_15, struct l2t_entry *VAR_16,
    struct smt_entry *VAR_17)
{
 struct filter_entry *VAR_18;
 struct fw_filter2_wr *VAR_19;
 u_int VAR_20, VAR_21;
 struct wrq_cookie VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26;
 u_int VAR_27;
 const int VAR_28 = VAR_15->fs.type ? 4 : 1;

 FUNC_1(!VAR_15->fs.hash);

 FUNC_1((VAR_15->fs.val.pfvf_vld & VAR_15->fs.val.ovlan_vld) == 0);
 FUNC_1((VAR_15->fs.mask.pfvf_vld & VAR_15->fs.mask.ovlan_vld) == 0);

 if (FUNC_52(VAR_14) && VAR_15->fs.prio) {
  FUNC_1(VAR_15->idx < VAR_14->tids.nhpftids);
  VAR_18 = &VAR_14->tids.hpftid_tab[VAR_15->idx];
  VAR_27 = VAR_14->tids.hpftid_base + VAR_15->idx;
 } else {
  FUNC_1(VAR_15->idx < VAR_14->tids.nftids);
  VAR_18 = &VAR_14->tids.ftid_tab[VAR_15->idx];
  VAR_27 = VAR_14->tids.ftid_base + VAR_15->idx;
 }
 VAR_24 = VAR_25 = VAR_26 = 0;
 FUNC_50(&VAR_14->tids.ftid_lock);
 for (VAR_23 = 0; VAR_23 < VAR_28; VAR_23++) {
  VAR_25 += VAR_18[VAR_23].pending + VAR_18[VAR_23].valid;
  VAR_26 += VAR_18[VAR_23].locked;
 }
 if (VAR_26 > 0)
  VAR_24 = VAR_4;
 else if (VAR_25 > 0)
  VAR_24 = VAR_0;
 else {
  int VAR_29;

  if (VAR_14->params.filter2_wr_support)
   VAR_29 = FUNC_46(sizeof(struct fw_filter2_wr), 16);
  else
   VAR_29 = FUNC_46(sizeof(struct fw_filter_wr), 16);
  VAR_19 = FUNC_53(&VAR_14->sge.ctrlq[0], VAR_29, &VAR_22);
  if (FUNC_41(VAR_19 == ((void*)0)))
   VAR_24 = VAR_3;
  else {
   VAR_18->pending = 1;
   if (FUNC_52(VAR_14) && VAR_15->fs.prio)
    VAR_14->tids.hpftids_in_use++;
   else
    VAR_14->tids.ftids_in_use++;
  }
 }
 FUNC_51(&VAR_14->tids.ftid_lock);
 if (VAR_24 != 0)
  return (VAR_24);





 VAR_18->tid = VAR_27;
 VAR_18->fs = VAR_15->fs;
 VAR_18->l2te = VAR_16;
 VAR_18->smt = VAR_17;

 if (VAR_15->fs.val.pfvf_vld || VAR_15->fs.val.ovlan_vld)
  VAR_20 = 1;
 else
  VAR_20 = 0;
 if (VAR_15->fs.mask.pfvf_vld || VAR_15->fs.mask.ovlan_vld)
  VAR_21 = 1;
 else
  VAR_21 = 0;

 FUNC_43(VAR_19, sizeof(*VAR_19));
 if (VAR_14->params.filter2_wr_support)
  VAR_19->op_pkd = FUNC_48(FUNC_40(VAR_7));
 else
  VAR_19->op_pkd = FUNC_48(FUNC_40(VAR_8));
 VAR_19->len16_pkd = FUNC_48(FUNC_0(*VAR_19));
 VAR_19->tid_to_iq =
     FUNC_48(FUNC_38(VAR_18->tid) |
  FUNC_34(VAR_18->fs.type) |
  FUNC_26(0) |
  FUNC_16(VAR_18->fs.iq));
 VAR_19->del_filter_to_l2tix =
     FUNC_48(FUNC_33(VAR_18->fs.rpttid) |
  FUNC_9(VAR_18->fs.action == VAR_5) |
  FUNC_6(VAR_18->fs.dirsteer) |
  FUNC_23(VAR_18->fs.maskhash) |
  FUNC_7(VAR_18->fs.dirsteerhash) |
  FUNC_20(VAR_18->fs.action == VAR_6) |
  FUNC_8(VAR_18->fs.newdmac) |
  FUNC_37(VAR_18->fs.newsmac) |
  FUNC_15(VAR_18->fs.newvlan == VAR_11 ||
      VAR_18->fs.newvlan == VAR_13) |
  FUNC_32(VAR_18->fs.newvlan == VAR_12 ||
      VAR_18->fs.newvlan == VAR_13) |
  FUNC_14(VAR_18->fs.hitcnts) |
  FUNC_39(VAR_18->fs.eport) |
  FUNC_31(VAR_18->fs.prio) |
  FUNC_19(VAR_18->l2te ? VAR_18->l2te->idx : 0));
 VAR_19->ethtype = FUNC_47(VAR_18->fs.val.ethtype);
 VAR_19->ethtypem = FUNC_47(VAR_18->fs.mask.ethtype);
 VAR_19->frag_to_ovlan_vldm =
     (FUNC_12(VAR_18->fs.val.frag) |
  FUNC_13(VAR_18->fs.mask.frag) |
  FUNC_17(VAR_18->fs.val.vlan_vld) |
  FUNC_27(VAR_20) |
  FUNC_18(VAR_18->fs.mask.vlan_vld) |
  FUNC_28(VAR_21));
 VAR_19->smac_sel = 0;
 VAR_19->rx_chan_rx_rpl_iq = FUNC_47(FUNC_35(0) |
     FUNC_36(VAR_14->sge.fwq.abs_id));
 VAR_19->maci_to_matchtypem =
     FUNC_48(FUNC_21(VAR_18->fs.val.macidx) |
  FUNC_22(VAR_18->fs.mask.macidx) |
  FUNC_10(VAR_18->fs.val.fcoe) |
  FUNC_11(VAR_18->fs.mask.fcoe) |
  FUNC_29(VAR_18->fs.val.iport) |
  FUNC_30(VAR_18->fs.mask.iport) |
  FUNC_24(VAR_18->fs.val.matchtype) |
  FUNC_25(VAR_18->fs.mask.matchtype));
 VAR_19->ptcl = VAR_18->fs.val.proto;
 VAR_19->ptclm = VAR_18->fs.mask.proto;
 VAR_19->ttyp = VAR_18->fs.val.tos;
 VAR_19->ttypm = VAR_18->fs.mask.tos;
 VAR_19->ivlan = FUNC_47(VAR_18->fs.val.vlan);
 VAR_19->ivlanm = FUNC_47(VAR_18->fs.mask.vlan);
 VAR_19->ovlan = FUNC_47(VAR_18->fs.val.vnic);
 VAR_19->ovlanm = FUNC_47(VAR_18->fs.mask.vnic);
 FUNC_42(VAR_18->fs.val.dip, VAR_19->lip, sizeof (VAR_19->lip));
 FUNC_42(VAR_18->fs.mask.dip, VAR_19->lipm, sizeof (VAR_19->lipm));
 FUNC_42(VAR_18->fs.val.sip, VAR_19->fip, sizeof (VAR_19->fip));
 FUNC_42(VAR_18->fs.mask.sip, VAR_19->fipm, sizeof (VAR_19->fipm));
 VAR_19->lp = FUNC_47(VAR_18->fs.val.dport);
 VAR_19->lpm = FUNC_47(VAR_18->fs.mask.dport);
 VAR_19->fp = FUNC_47(VAR_18->fs.val.sport);
 VAR_19->fpm = FUNC_47(VAR_18->fs.mask.sport);

 FUNC_43(VAR_19->sma, sizeof (VAR_19->sma));
 if (VAR_14->params.filter2_wr_support) {
  VAR_19->filter_type_swapmac =
      FUNC_4(VAR_18->fs.swapmac);
  VAR_19->natmode_to_ulp_type =
      FUNC_5(VAR_18->fs.nat_mode ?
   VAR_10 : VAR_9) |
      FUNC_2(VAR_18->fs.nat_flag_chk) |
      FUNC_3(VAR_18->fs.nat_mode);
  FUNC_49(VAR_19->newlip, VAR_18->fs.nat_dip, sizeof(VAR_19->newlip));
  FUNC_49(VAR_19->newfip, VAR_18->fs.nat_sip, sizeof(VAR_19->newfip));
  VAR_19->newlport = FUNC_47(VAR_18->fs.nat_dport);
  VAR_19->newfport = FUNC_47(VAR_18->fs.nat_sport);
  VAR_19->natseqcheck = FUNC_48(VAR_18->fs.nat_seq_chk);
 }
 FUNC_44(&VAR_14->sge.ctrlq[0], VAR_19, &VAR_22);


 FUNC_50(&VAR_14->tids.ftid_lock);
 for (;;) {
  if (VAR_18->pending == 0) {
   VAR_24 = VAR_18->valid ? 0 : VAR_2;
   break;
  }
  if (FUNC_45(&VAR_14->tids.ftid_cv, &VAR_14->tids.ftid_lock) != 0) {
   VAR_24 = VAR_1;
   break;
  }
 }
 FUNC_51(&VAR_14->tids.ftid_lock);
 return (VAR_24);
}

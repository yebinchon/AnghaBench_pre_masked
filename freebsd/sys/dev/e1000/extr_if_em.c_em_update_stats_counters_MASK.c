
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_9__ {scalar_t__ media_type; } ;
struct TYPE_10__ {TYPE_2__ mac; TYPE_4__ phy; } ;
struct TYPE_8__ {scalar_t__ xoffrxc; scalar_t__ symerrs; scalar_t__ sec; scalar_t__ crcerrs; scalar_t__ mpc; scalar_t__ scc; scalar_t__ ecol; scalar_t__ mcc; scalar_t__ latecol; scalar_t__ colc; scalar_t__ dc; scalar_t__ rlec; scalar_t__ xonrxc; scalar_t__ xontxc; scalar_t__ xofftxc; scalar_t__ fcruc; scalar_t__ prc64; scalar_t__ prc127; scalar_t__ prc255; scalar_t__ prc511; scalar_t__ prc1023; scalar_t__ prc1522; scalar_t__ gprc; scalar_t__ bprc; scalar_t__ mprc; scalar_t__ gptc; scalar_t__ gorc; scalar_t__ gotc; scalar_t__ rnbc; scalar_t__ ruc; scalar_t__ rfc; scalar_t__ roc; scalar_t__ rjc; scalar_t__ tor; scalar_t__ tot; scalar_t__ tpr; scalar_t__ tpt; scalar_t__ ptc64; scalar_t__ ptc127; scalar_t__ ptc255; scalar_t__ ptc511; scalar_t__ ptc1023; scalar_t__ ptc1522; scalar_t__ mptc; scalar_t__ bptc; scalar_t__ iac; scalar_t__ icrxptc; scalar_t__ icrxatc; scalar_t__ ictxptc; scalar_t__ ictxatc; scalar_t__ ictxqec; scalar_t__ ictxqmtc; scalar_t__ icrxdmtc; scalar_t__ icrxoc; scalar_t__ algnerrc; scalar_t__ rxerrc; scalar_t__ tncrs; scalar_t__ cexterr; scalar_t__ tsctc; scalar_t__ tsctfc; } ;
struct adapter {TYPE_5__ hw; TYPE_3__ stats; TYPE_1__* shared; } ;
struct TYPE_6__ {int isc_pause_frames; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int ) ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 scalar_t__ VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 scalar_t__ VAR_64 ;
 scalar_t__ VAR_65 ;

__attribute__((used)) static void
FUNC_1(struct adapter *VAR_66)
{
 u64 VAR_67 = VAR_66->stats.xoffrxc;

 if(VAR_66->hw.phy.media_type == VAR_65 ||
    (FUNC_0(&VAR_66->hw, VAR_50) & VAR_51)) {
  VAR_66->stats.symerrs += FUNC_0(&VAR_66->hw, VAR_52);
  VAR_66->stats.sec += FUNC_0(&VAR_66->hw, VAR_49);
 }
 VAR_66->stats.crcerrs += FUNC_0(&VAR_66->hw, VAR_5);
 VAR_66->stats.mpc += FUNC_0(&VAR_66->hw, VAR_26);
 VAR_66->stats.scc += FUNC_0(&VAR_66->hw, VAR_48);
 VAR_66->stats.ecol += FUNC_0(&VAR_66->hw, VAR_7);

 VAR_66->stats.mcc += FUNC_0(&VAR_66->hw, VAR_25);
 VAR_66->stats.latecol += FUNC_0(&VAR_66->hw, VAR_24);
 VAR_66->stats.colc += FUNC_0(&VAR_66->hw, VAR_4);
 VAR_66->stats.dc += FUNC_0(&VAR_66->hw, VAR_6);
 VAR_66->stats.rlec += FUNC_0(&VAR_66->hw, VAR_43);
 VAR_66->stats.xonrxc += FUNC_0(&VAR_66->hw, VAR_62);
 VAR_66->stats.xontxc += FUNC_0(&VAR_66->hw, VAR_63);
 VAR_66->stats.xoffrxc += FUNC_0(&VAR_66->hw, VAR_60);




 if (VAR_66->stats.xoffrxc != VAR_67)
  VAR_66->shared->isc_pause_frames = 1;
 VAR_66->stats.xofftxc += FUNC_0(&VAR_66->hw, VAR_61);
 VAR_66->stats.fcruc += FUNC_0(&VAR_66->hw, VAR_8);
 VAR_66->stats.prc64 += FUNC_0(&VAR_66->hw, VAR_34);
 VAR_66->stats.prc127 += FUNC_0(&VAR_66->hw, VAR_30);
 VAR_66->stats.prc255 += FUNC_0(&VAR_66->hw, VAR_32);
 VAR_66->stats.prc511 += FUNC_0(&VAR_66->hw, VAR_33);
 VAR_66->stats.prc1023 += FUNC_0(&VAR_66->hw, VAR_29);
 VAR_66->stats.prc1522 += FUNC_0(&VAR_66->hw, VAR_31);
 VAR_66->stats.gprc += FUNC_0(&VAR_66->hw, VAR_13);
 VAR_66->stats.bprc += FUNC_0(&VAR_66->hw, VAR_1);
 VAR_66->stats.mprc += FUNC_0(&VAR_66->hw, VAR_27);
 VAR_66->stats.gptc += FUNC_0(&VAR_66->hw, VAR_14);




 VAR_66->stats.gorc += FUNC_0(&VAR_66->hw, VAR_10) +
     ((u64)FUNC_0(&VAR_66->hw, VAR_9) << 32);
 VAR_66->stats.gotc += FUNC_0(&VAR_66->hw, VAR_12) +
     ((u64)FUNC_0(&VAR_66->hw, VAR_11) << 32);

 VAR_66->stats.rnbc += FUNC_0(&VAR_66->hw, VAR_44);
 VAR_66->stats.ruc += FUNC_0(&VAR_66->hw, VAR_46);
 VAR_66->stats.rfc += FUNC_0(&VAR_66->hw, VAR_41);
 VAR_66->stats.roc += FUNC_0(&VAR_66->hw, VAR_45);
 VAR_66->stats.rjc += FUNC_0(&VAR_66->hw, VAR_42);

 VAR_66->stats.tor += FUNC_0(&VAR_66->hw, VAR_54);
 VAR_66->stats.tot += FUNC_0(&VAR_66->hw, VAR_55);

 VAR_66->stats.tpr += FUNC_0(&VAR_66->hw, VAR_56);
 VAR_66->stats.tpt += FUNC_0(&VAR_66->hw, VAR_57);
 VAR_66->stats.ptc64 += FUNC_0(&VAR_66->hw, VAR_40);
 VAR_66->stats.ptc127 += FUNC_0(&VAR_66->hw, VAR_36);
 VAR_66->stats.ptc255 += FUNC_0(&VAR_66->hw, VAR_38);
 VAR_66->stats.ptc511 += FUNC_0(&VAR_66->hw, VAR_39);
 VAR_66->stats.ptc1023 += FUNC_0(&VAR_66->hw, VAR_35);
 VAR_66->stats.ptc1522 += FUNC_0(&VAR_66->hw, VAR_37);
 VAR_66->stats.mptc += FUNC_0(&VAR_66->hw, VAR_28);
 VAR_66->stats.bptc += FUNC_0(&VAR_66->hw, VAR_2);



 VAR_66->stats.iac += FUNC_0(&VAR_66->hw, VAR_15);
 VAR_66->stats.icrxptc += FUNC_0(&VAR_66->hw, VAR_19);
 VAR_66->stats.icrxatc += FUNC_0(&VAR_66->hw, VAR_16);
 VAR_66->stats.ictxptc += FUNC_0(&VAR_66->hw, VAR_21);
 VAR_66->stats.ictxatc += FUNC_0(&VAR_66->hw, VAR_20);
 VAR_66->stats.ictxqec += FUNC_0(&VAR_66->hw, VAR_22);
 VAR_66->stats.ictxqmtc += FUNC_0(&VAR_66->hw, VAR_23);
 VAR_66->stats.icrxdmtc += FUNC_0(&VAR_66->hw, VAR_17);
 VAR_66->stats.icrxoc += FUNC_0(&VAR_66->hw, VAR_18);

 if (VAR_66->hw.mac.type >= VAR_64) {
  VAR_66->stats.algnerrc +=
  FUNC_0(&VAR_66->hw, VAR_0);
  VAR_66->stats.rxerrc +=
  FUNC_0(&VAR_66->hw, VAR_47);
  VAR_66->stats.tncrs +=
  FUNC_0(&VAR_66->hw, VAR_53);
  VAR_66->stats.cexterr +=
  FUNC_0(&VAR_66->hw, VAR_3);
  VAR_66->stats.tsctc +=
  FUNC_0(&VAR_66->hw, VAR_58);
  VAR_66->stats.tsctfc +=
  FUNC_0(&VAR_66->hw, VAR_59);
 }
}

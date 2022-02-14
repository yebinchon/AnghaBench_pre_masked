
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ixgbe_hw_stats {int crcerrs; int rlec; int gotc; int gptc; int mptc; int ptc64; int mprc; int gorc; int gprc; int fcoedwtc; int fcoedwrc; int fcoeptc; int fcoeprc; int fcoerpdc; int fclast; int fccrc; int xec; int bptc; int ptc1522; int ptc1023; int ptc511; int ptc255; int ptc127; int tpt; int tpr; int mngptc; int mngpdc; int mngprc; int rjc; int roc; int rfc; int ruc; int lxofftxc; int lxontxc; int prc1522; int prc1023; int prc511; int prc255; int prc127; int prc64; int bprc; int tor; int lxoffrxc; int lxonrxc; int mrfc; int mlfc; int * qprdc; int * qptc; int * qprc; int * mpc; int mspdc; int errbc; int illerrc; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct TYPE_4__ {struct ixgbe_hw_stats pf; } ;
struct adapter {TYPE_3__* shared; TYPE_1__ stats; struct ixgbe_hw hw; } ;
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
 int FUNC_0 (int ) ;
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
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ixgbe_hw*,int ) ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_5 (struct adapter*,int ) ;
 int FUNC_6 (struct adapter*,int ) ;
 int FUNC_7 (struct adapter*,int) ;
 int FUNC_8 (struct adapter*,int ) ;
 int FUNC_9 (struct adapter*,int ) ;
 int FUNC_10 (struct adapter*,int) ;
 int FUNC_11 (struct adapter*,int) ;
 int FUNC_12 (struct adapter*,int) ;
 int FUNC_13 (struct adapter*,int) ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 scalar_t__ VAR_55 ;

__attribute__((used)) static void
FUNC_14(struct adapter *VAR_56)
{
 struct ixgbe_hw *VAR_57 = &VAR_56->hw;
 struct ixgbe_hw_stats *VAR_58 = &VAR_56->stats.pf;
 u32 VAR_59 = 0, VAR_60, VAR_61, VAR_62, VAR_63;
 u32 VAR_64;
 u64 VAR_65 = 0;

 VAR_58->crcerrs += FUNC_4(VAR_57, VAR_3);
 VAR_58->illerrc += FUNC_4(VAR_57, VAR_18);
 VAR_58->errbc += FUNC_4(VAR_57, VAR_4);
 VAR_58->mspdc += FUNC_4(VAR_57, VAR_32);
 VAR_58->mpc[0] += FUNC_4(VAR_57, FUNC_0(0));

 for (int VAR_66 = 0; VAR_66 < 16; VAR_66++) {
  VAR_58->qprc[VAR_66] += FUNC_4(VAR_57, FUNC_1(VAR_66));
  VAR_58->qptc[VAR_66] += FUNC_4(VAR_57, FUNC_3(VAR_66));
  VAR_58->qprdc[VAR_66] += FUNC_4(VAR_57, FUNC_2(VAR_66));
 }
 VAR_58->mlfc += FUNC_4(VAR_57, VAR_25);
 VAR_58->mrfc += FUNC_4(VAR_57, VAR_31);
 VAR_58->rlec += FUNC_4(VAR_57, VAR_47);


 VAR_58->gprc += FUNC_4(VAR_57, VAR_16);
 VAR_58->gprc -= VAR_59;

 if (VAR_57->mac.type != VAR_55) {
  VAR_58->gorc += FUNC_4(VAR_57, VAR_13) +
      ((u64)FUNC_4(VAR_57, VAR_12) << 32);
  VAR_58->gotc += FUNC_4(VAR_57, VAR_15) +
      ((u64)FUNC_4(VAR_57, VAR_14) << 32);
  VAR_58->tor += FUNC_4(VAR_57, VAR_51) +
      ((u64)FUNC_4(VAR_57, VAR_50) << 32);
  VAR_58->lxonrxc += FUNC_4(VAR_57, VAR_23);
  VAR_64 = FUNC_4(VAR_57, VAR_20);
  VAR_58->lxoffrxc += VAR_64;
 } else {
  VAR_58->lxonrxc += FUNC_4(VAR_57, VAR_22);
  VAR_64 = FUNC_4(VAR_57, VAR_19);
  VAR_58->lxoffrxc += VAR_64;

  VAR_58->gorc += FUNC_4(VAR_57, VAR_12);
  VAR_58->gotc += FUNC_4(VAR_57, VAR_14);
  VAR_58->tor += FUNC_4(VAR_57, VAR_50);
 }





 if (VAR_64)
  VAR_56->shared->isc_pause_frames = 1;





 VAR_60 = FUNC_4(VAR_57, VAR_1);
 VAR_58->bprc += VAR_60;
 VAR_58->mprc += FUNC_4(VAR_57, VAR_29);
 if (VAR_57->mac.type == VAR_55)
  VAR_58->mprc -= VAR_60;

 VAR_58->prc64 += FUNC_4(VAR_57, VAR_38);
 VAR_58->prc127 += FUNC_4(VAR_57, VAR_34);
 VAR_58->prc255 += FUNC_4(VAR_57, VAR_36);
 VAR_58->prc511 += FUNC_4(VAR_57, VAR_37);
 VAR_58->prc1023 += FUNC_4(VAR_57, VAR_33);
 VAR_58->prc1522 += FUNC_4(VAR_57, VAR_35);

 VAR_61 = FUNC_4(VAR_57, VAR_24);
 VAR_58->lxontxc += VAR_61;
 VAR_62 = FUNC_4(VAR_57, VAR_21);
 VAR_58->lxofftxc += VAR_62;
 VAR_63 = VAR_61 + VAR_62;

 VAR_58->gptc += FUNC_4(VAR_57, VAR_17);
 VAR_58->mptc += FUNC_4(VAR_57, VAR_30);
 VAR_58->ptc64 += FUNC_4(VAR_57, VAR_44);
 VAR_58->gptc -= VAR_63;
 VAR_58->mptc -= VAR_63;
 VAR_58->ptc64 -= VAR_63;
 VAR_58->gotc -= VAR_63 * VAR_0;

 VAR_58->ruc += FUNC_4(VAR_57, VAR_49);
 VAR_58->rfc += FUNC_4(VAR_57, VAR_45);
 VAR_58->roc += FUNC_4(VAR_57, VAR_48);
 VAR_58->rjc += FUNC_4(VAR_57, VAR_46);
 VAR_58->mngprc += FUNC_4(VAR_57, VAR_27);
 VAR_58->mngpdc += FUNC_4(VAR_57, VAR_26);
 VAR_58->mngptc += FUNC_4(VAR_57, VAR_28);
 VAR_58->tpr += FUNC_4(VAR_57, VAR_52);
 VAR_58->tpt += FUNC_4(VAR_57, VAR_53);
 VAR_58->ptc127 += FUNC_4(VAR_57, VAR_40);
 VAR_58->ptc255 += FUNC_4(VAR_57, VAR_42);
 VAR_58->ptc511 += FUNC_4(VAR_57, VAR_43);
 VAR_58->ptc1023 += FUNC_4(VAR_57, VAR_39);
 VAR_58->ptc1522 += FUNC_4(VAR_57, VAR_41);
 VAR_58->bptc += FUNC_4(VAR_57, VAR_2);
 VAR_58->xec += FUNC_4(VAR_57, VAR_54);
 VAR_58->fccrc += FUNC_4(VAR_57, VAR_5);
 VAR_58->fclast += FUNC_4(VAR_57, VAR_6);

 if (VAR_57->mac.type != VAR_55) {
  VAR_58->fcoerpdc += FUNC_4(VAR_57, VAR_11);
  VAR_58->fcoeprc += FUNC_4(VAR_57, VAR_9);
  VAR_58->fcoeptc += FUNC_4(VAR_57, VAR_10);
  VAR_58->fcoedwrc += FUNC_4(VAR_57, VAR_7);
  VAR_58->fcoedwtc += FUNC_4(VAR_57, VAR_8);
 }


 FUNC_9(VAR_56, VAR_58->gprc);
 FUNC_13(VAR_56, VAR_58->gptc);
 FUNC_6(VAR_56, VAR_58->gorc);
 FUNC_11(VAR_56, VAR_58->gotc);
 FUNC_8(VAR_56, VAR_58->mprc);
 FUNC_12(VAR_56, VAR_58->mptc);
 FUNC_5(VAR_56, 0);
 FUNC_10(VAR_56, VAR_65);
 FUNC_7(VAR_56, VAR_58->crcerrs + VAR_58->rlec);
}

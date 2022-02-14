
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct hifn_softc {int sc_dmaier; int sc_cmdk; int sc_srck; int sc_resk; int sc_cmdu; int sc_srcu; int sc_resu; int sc_flags; int sc_needwakeup; int sc_cid; int sc_dstu; int sc_dev; struct hifn_command** sc_hifn_commands; int sc_dstk; int sc_resi; int sc_dsti; int sc_srci; int sc_cmdi; struct hifn_dma* sc_dma; } ;
struct hifn_dma {TYPE_3__* cmdr; TYPE_2__* srcr; int ** result_bufs; TYPE_1__* resr; } ;
struct hifn_command {int base_masks; } ;
struct TYPE_8__ {int hst_opackets; int hst_abort; } ;
struct TYPE_7__ {int l; } ;
struct TYPE_6__ {int l; } ;
struct TYPE_5__ {int l; } ;


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
 int FUNC_0 (struct hifn_softc*,int,int) ;
 int FUNC_1 (struct hifn_softc*,int,int) ;
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
 int FUNC_2 (struct hifn_softc*) ;
 int VAR_27 ;
 int FUNC_3 (struct hifn_softc*,int,int) ;
 int FUNC_4 (struct hifn_softc*,int,int) ;
 int FUNC_5 (struct hifn_softc*,int,int) ;
 int FUNC_6 (struct hifn_softc*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct hifn_softc*,int ) ;
 int FUNC_9 (struct hifn_softc*,int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (struct hifn_softc*) ;
 int FUNC_13 (struct hifn_softc*,struct hifn_command*,int *) ;
 scalar_t__ VAR_28 ;
 TYPE_4__ VAR_29 ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void
FUNC_15(void *VAR_30)
{
 struct hifn_softc *VAR_31 = VAR_30;
 struct hifn_dma *VAR_32;
 u_int32_t VAR_33, VAR_34;
 int VAR_35, VAR_36;

 VAR_33 = FUNC_8(VAR_31, VAR_6);


 if ((VAR_33 & VAR_31->sc_dmaier) == 0)
  return;

 FUNC_2(VAR_31);

 VAR_32 = VAR_31->sc_dma;
 FUNC_9(VAR_31, VAR_6, VAR_33 & VAR_31->sc_dmaier);

 if ((VAR_31->sc_flags & VAR_25) &&
     (VAR_33 & VAR_16))
  FUNC_9(VAR_31, VAR_8,
      FUNC_8(VAR_31, VAR_8) | VAR_27);

 VAR_34 = VAR_33 & (VAR_13 | VAR_18);
 if (VAR_34)
  FUNC_11(VAR_31->sc_dev, "overrun %x\n", VAR_33);

 if (VAR_31->sc_flags & VAR_26) {
  if (VAR_33 & VAR_14)
   FUNC_11(VAR_31->sc_dev, "illegal read\n");
  if (VAR_33 & VAR_15)
   FUNC_11(VAR_31->sc_dev, "illegal write\n");
 }

 VAR_34 = VAR_33 & (VAR_10 | VAR_19 |
     VAR_12 | VAR_17);
 if (VAR_34) {
  FUNC_11(VAR_31->sc_dev, "abort, resetting.\n");
  VAR_29.hst_abort++;
  FUNC_12(VAR_31);
  FUNC_6(VAR_31);
  return;
 }

 if ((VAR_33 & VAR_11) && (VAR_31->sc_cmdu == 0)) {





  VAR_31->sc_dmaier &= ~VAR_20;
  FUNC_9(VAR_31, VAR_7, VAR_31->sc_dmaier);
 }


 VAR_35 = VAR_31->sc_resk; VAR_36 = VAR_31->sc_resu;
 while (VAR_36 != 0) {
  FUNC_3(VAR_31, VAR_35,
      VAR_0 | VAR_1);
  if (VAR_32->resr[VAR_35].l & FUNC_14(VAR_24)) {
   FUNC_3(VAR_31, VAR_35,
       VAR_2 | VAR_3);
   break;
  }

  if (VAR_35 != VAR_22) {
   struct hifn_command *VAR_37;
   u_int8_t *VAR_38 = ((void*)0);

   FUNC_4(VAR_31, VAR_35, VAR_0);
   VAR_37 = VAR_31->sc_hifn_commands[VAR_35];
   FUNC_7(VAR_37 != ((void*)0),
    ("hifn_intr: null command slot %u", VAR_35));
   VAR_31->sc_hifn_commands[VAR_35] = ((void*)0);

   if (VAR_37->base_masks & VAR_9) {
    VAR_38 = VAR_32->result_bufs[VAR_35];
    VAR_38 += 12;
   }

   FUNC_13(VAR_31, VAR_37, VAR_38);
   VAR_29.hst_opackets++;
   VAR_36--;
  }

  if (++VAR_35 == (VAR_22 + 1))
   VAR_35 = 0;
 }
 VAR_31->sc_resk = VAR_35; VAR_31->sc_resu = VAR_36;

 VAR_35 = VAR_31->sc_srck; VAR_36 = VAR_31->sc_srcu;
 while (VAR_36 != 0) {
  if (VAR_35 == VAR_23)
   VAR_35 = 0;
  FUNC_5(VAR_31, VAR_35,
      VAR_0 | VAR_1);
  if (VAR_32->srcr[VAR_35].l & FUNC_14(VAR_24)) {
   FUNC_5(VAR_31, VAR_35,
       VAR_2 | VAR_3);
   break;
  }
  VAR_35++, VAR_36--;
 }
 VAR_31->sc_srck = VAR_35; VAR_31->sc_srcu = VAR_36;

 VAR_35 = VAR_31->sc_cmdk; VAR_36 = VAR_31->sc_cmdu;
 while (VAR_36 != 0) {
  FUNC_0(VAR_31, VAR_35,
      VAR_0 | VAR_1);
  if (VAR_32->cmdr[VAR_35].l & FUNC_14(VAR_24)) {
   FUNC_0(VAR_31, VAR_35,
       VAR_2 | VAR_3);
   break;
  }
  if (VAR_35 != VAR_21) {
   VAR_36--;
   FUNC_1(VAR_31, VAR_35, VAR_1);
  }
  if (++VAR_35 == (VAR_21 + 1))
   VAR_35 = 0;
 }
 VAR_31->sc_cmdk = VAR_35; VAR_31->sc_cmdu = VAR_36;

 FUNC_6(VAR_31);

 if (VAR_31->sc_needwakeup) {
  int VAR_39 = VAR_31->sc_needwakeup & (VAR_5|VAR_4);







  VAR_31->sc_needwakeup &= ~VAR_39;
  FUNC_10(VAR_31->sc_cid, VAR_39);
 }
}

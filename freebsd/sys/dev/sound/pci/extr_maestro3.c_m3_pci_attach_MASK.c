
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct sc_info {scalar_t__ type; scalar_t__ regtype; scalar_t__ sc_lock; scalar_t__ parent_dmat; void* reg; scalar_t__ regid; void* irq; scalar_t__ irqid; scalar_t__ ih; int * savemem; int bufsz; int sh; int st; int delay2; int delay1; int which; int dev; } ;
struct m3_card_type {scalar_t__ pci_id; int delay2; int delay1; int which; } ;
struct ac97_info {int dummy; } ;
typedef int device_t ;


 struct ac97_info* FUNC_0 (int ,struct sc_info*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sc_info*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct sc_info*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_6 (struct ac97_info*) ;
 int FUNC_7 () ;
 void* FUNC_8 (int ,scalar_t__,scalar_t__*,int) ;
 scalar_t__ FUNC_9 (int ,int,int ,int ,int ,int *,int *,int ,int,int,int ,int *,int *,scalar_t__*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,scalar_t__,scalar_t__,void*) ;
 int FUNC_13 (int ,void*,scalar_t__) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (struct sc_info*,int ) ;
 struct m3_card_type* VAR_23 ;
 int VAR_24 ;
 int FUNC_19 (struct sc_info*) ;
 int FUNC_20 (struct sc_info*) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_21 (struct sc_info*,int ) ;
 int VAR_27 ;
 struct sc_info* FUNC_22 (int,int ,int) ;
 int FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int ,int ,struct ac97_info*) ;
 int FUNC_25 (int ) ;
 scalar_t__ FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (int ,int ,int *,struct sc_info*) ;
 int FUNC_28 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_29 (int ,struct sc_info*,int,int) ;
 scalar_t__ FUNC_30 (int ,char*) ;
 scalar_t__ FUNC_31 (int ,int ,char*,int*) ;
 int FUNC_32 (void*) ;
 int FUNC_33 (void*) ;
 int FUNC_34 (void*) ;
 int VAR_28 ;
 scalar_t__ FUNC_35 (int ,char*) ;
 int FUNC_36 (scalar_t__) ;
 scalar_t__ FUNC_37 (int ,void*,int ,int ,struct sc_info*,scalar_t__*) ;
 int FUNC_38 (char*,int,char*,char*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_39(device_t VAR_29)
{
 struct sc_info *VAR_30;
 struct ac97_info *VAR_31 = ((void*)0);
 char VAR_32[VAR_19];
 struct m3_card_type *VAR_33;
 int VAR_34, VAR_35, VAR_36, VAR_37;

 FUNC_1(VAR_1, ("m3_pci_attach\n"));

 VAR_30 = FUNC_22(sizeof(*VAR_30), VAR_10, VAR_11 | VAR_12);
 VAR_30->dev = VAR_29;
 VAR_30->type = FUNC_26(VAR_29);
 VAR_30->sc_lock = FUNC_35(FUNC_15(VAR_29),
     "snd_maestro3 softc");
 for (VAR_33 = VAR_23 ; VAR_33->pci_id ; VAR_33++) {
  if (VAR_30->type == VAR_33->pci_id) {
   VAR_30->which = VAR_33->which;
   VAR_30->delay1 = VAR_33->delay1;
   VAR_30->delay2 = VAR_33->delay2;
   break;
  }
 }

 if (FUNC_31(FUNC_14(VAR_29), FUNC_16(VAR_29),
     "dac", &VAR_34) == 0) {
      if (VAR_34 < 1)
   VAR_36 = 1;
  else if (VAR_34 > VAR_8)
   VAR_36 = VAR_8;
  else
   VAR_36 = VAR_34;
 } else
  VAR_36 = VAR_8;

 VAR_37 = VAR_9;

 FUNC_25(VAR_29);

 VAR_30->regid = FUNC_4(0);
 VAR_30->regtype = VAR_22;
 VAR_30->reg = FUNC_8(VAR_29, VAR_30->regtype, &VAR_30->regid,
      VAR_17);
 if (!VAR_30->reg) {
  VAR_30->regtype = VAR_20;
  VAR_30->reg = FUNC_8(VAR_29, VAR_30->regtype, &VAR_30->regid,
       VAR_17);
 }
 if (!VAR_30->reg) {
  FUNC_17(VAR_29, "unable to allocate register space\n");
  goto bad;
 }
 VAR_30->st = FUNC_33(VAR_30->reg);
 VAR_30->sh = FUNC_32(VAR_30->reg);

 VAR_30->irqid = 0;
 VAR_30->irq = FUNC_8(VAR_29, VAR_21, &VAR_30->irqid,
      VAR_17 | VAR_18);
 if (!VAR_30->irq) {
  FUNC_17(VAR_29, "unable to allocate interrupt\n");
  goto bad;
 }

 if (FUNC_37(VAR_29, VAR_30->irq, VAR_3, VAR_25, VAR_30, &VAR_30->ih)) {
  FUNC_17(VAR_29, "unable to setup interrupt\n");
  goto bad;
 }

 VAR_30->bufsz = FUNC_28(VAR_29, VAR_6, VAR_4,
     VAR_5);

 if (FUNC_9(
     FUNC_11(VAR_29),
     2, 0,
     VAR_7,
     VAR_0,
     ((void*)0), ((void*)0),
     VAR_30->bufsz,
     1,
     0x3ffff,
     0,
     ((void*)0),
     ((void*)0),
     &VAR_30->parent_dmat) != 0) {
  FUNC_17(VAR_29, "unable to create dma tag\n");
  goto bad;
 }

 FUNC_2(VAR_30);
 FUNC_21(VAR_30, 0);

 VAR_34 = FUNC_20(VAR_30);
 FUNC_3(VAR_30);
 if (VAR_34 == -1) {
  FUNC_17(VAR_29, "unable to initialize the card\n");
  goto bad;
 }


 VAR_31 = FUNC_0(VAR_29, VAR_30, VAR_24);
 if (VAR_31 == ((void*)0)) {
  FUNC_17(VAR_29, "ac97_create error\n");
  goto bad;
 }
 if (FUNC_24(VAR_29, FUNC_7(), VAR_31)) {
  FUNC_17(VAR_29, "mixer_init error\n");
  goto bad;
 }

 FUNC_19(VAR_30);

 if (FUNC_29(VAR_29, VAR_30, VAR_36, VAR_37)) {
  FUNC_17(VAR_29, "pcm_register error\n");
  goto bad;
 }
 for (VAR_34=0 ; VAR_34<VAR_36 ; VAR_34++) {
  if (FUNC_27(VAR_29, VAR_13, &VAR_26, VAR_30)) {
   FUNC_17(VAR_29, "pcm_addchan (play) error\n");
   goto bad;
  }
 }
 for (VAR_34=0 ; VAR_34<VAR_37 ; VAR_34++) {
  if (FUNC_27(VAR_29, VAR_14, &VAR_27, VAR_30)) {
   FUNC_17(VAR_29, "pcm_addchan (rec) error\n");
   goto bad;
  }
 }
  FUNC_38(VAR_32, VAR_19, "at %s 0x%jx irq %jd %s",
     (VAR_30->regtype == VAR_20)? "io" : "memory",
     FUNC_34(VAR_30->reg), FUNC_34(VAR_30->irq),
     FUNC_5(VAR_28));
 if (FUNC_30(VAR_29, VAR_32)) {
  FUNC_17(VAR_29, "attach: pcm_setstatus error\n");
  goto bad;
 }

 FUNC_23(VAR_29);


 VAR_35 = sizeof(u_int16_t) * (VAR_15 +
     VAR_16);
 VAR_30->savemem = (u_int16_t*)FUNC_22(VAR_35, VAR_10, VAR_11 | VAR_12);

 return 0;

 bad:
 if (VAR_31)
  FUNC_6(VAR_31);
 if (VAR_30->ih)
  FUNC_13(VAR_29, VAR_30->irq, VAR_30->ih);
 if (VAR_30->irq)
  FUNC_12(VAR_29, VAR_21, VAR_30->irqid, VAR_30->irq);
 if (VAR_30->reg)
  FUNC_12(VAR_29, VAR_30->regtype, VAR_30->regid, VAR_30->reg);
 if (VAR_30->parent_dmat)
  FUNC_10(VAR_30->parent_dmat);
 if (VAR_30->sc_lock)
  FUNC_36(VAR_30->sc_lock);
 FUNC_18(VAR_30, VAR_10);
 return VAR_2;
}

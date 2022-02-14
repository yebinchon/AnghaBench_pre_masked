
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {scalar_t__ lock; scalar_t__ control_dmat; scalar_t__ buffer_dmat; void* irq; scalar_t__ irqid; scalar_t__ ih; void* reg; scalar_t__ regid; int * regbase; int bufsz; int sh; int st; int rev; int type; int dev; } ;
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct ac97_info*) ;
 int FUNC_4 (struct ac97_info*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct ac97_info*,int) ;
 void* FUNC_7 (int ,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_8 (int ,int,int ,int ,int ,int *,int *,int ,int,int,int ,int *,int *,scalar_t__*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,scalar_t__,void*) ;
 int FUNC_12 (int ,void*,scalar_t__) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (struct sc_info*) ;
 int VAR_20 ;
 int FUNC_17 (struct sc_info*,int ) ;
 struct sc_info* FUNC_18 (int,int ,int) ;
 int FUNC_19 (int ,int ,struct ac97_info*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ,int ,int *,struct sc_info*) ;
 int FUNC_26 (int ,int,int ,int) ;
 scalar_t__ FUNC_27 (int ,struct sc_info*,int,int) ;
 int FUNC_28 (int ,char*) ;
 int FUNC_29 (void*) ;
 int FUNC_30 (void*) ;
 int FUNC_31 (void*) ;
 int VAR_21 ;
 scalar_t__ FUNC_32 (int ,char*) ;
 int FUNC_33 (scalar_t__) ;
 scalar_t__ FUNC_34 (int ,void*,int ,int ,struct sc_info*,scalar_t__*) ;
 int FUNC_35 (char*,int,char*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_36(device_t VAR_22)
{
 u_int32_t VAR_23, VAR_24;
 struct sc_info *VAR_25;
 struct ac97_info *VAR_26 = ((void*)0);
 char VAR_27[VAR_14];

 VAR_25 = FUNC_18(sizeof(*VAR_25), VAR_7, VAR_8 | VAR_9);
 VAR_25->lock = FUNC_32(FUNC_13(VAR_22), "snd_ds1 softc");
 VAR_25->dev = VAR_22;
 VAR_23 = (FUNC_23(VAR_22) << 16) | FUNC_24(VAR_22);
 VAR_25->type = FUNC_15(FUNC_21(VAR_22), VAR_23);
 VAR_25->rev = FUNC_22(VAR_22);

 FUNC_20(VAR_22);

 VAR_25->regid = FUNC_1(0);
 VAR_25->reg = FUNC_7(VAR_22, VAR_16, &VAR_25->regid,
      VAR_12);
 if (!VAR_25->reg) {
  FUNC_14(VAR_22, "unable to map register space\n");
  goto bad;
 }

 VAR_25->st = FUNC_30(VAR_25->reg);
 VAR_25->sh = FUNC_29(VAR_25->reg);

 VAR_25->bufsz = FUNC_26(VAR_22, 4096, VAR_3, 65536);

 if (FUNC_8( FUNC_10(VAR_22), 2,
              0,
             VAR_2,
              VAR_1,
            ((void*)0), ((void*)0),
             VAR_25->bufsz, 1, 0x3ffff,
           0, ((void*)0),
             ((void*)0), &VAR_25->buffer_dmat) != 0) {
  FUNC_14(VAR_22, "unable to create dma tag\n");
  goto bad;
 }

 VAR_25->regbase = ((void*)0);
 if (FUNC_16(VAR_25) == -1) {
  FUNC_14(VAR_22, "unable to initialize the card\n");
  goto bad;
 }

 VAR_26 = FUNC_0(VAR_22, VAR_25, VAR_19);
 if (VAR_26 == ((void*)0))
  goto bad;




 switch (VAR_23) {
 case 0x81171033:
  FUNC_6(VAR_26, FUNC_4(VAR_26) | VAR_0);
  break;
 default:
  break;
 }
 FUNC_19(VAR_22, FUNC_5(), VAR_26);

 VAR_25->irqid = 0;
 VAR_25->irq = FUNC_7(VAR_22, VAR_15, &VAR_25->irqid,
      VAR_12 | VAR_13);
 if (!VAR_25->irq || FUNC_34(VAR_22, VAR_25->irq, VAR_6, VAR_20, VAR_25, &VAR_25->ih)) {
  FUNC_14(VAR_22, "unable to map interrupt\n");
  goto bad;
 }

 FUNC_35(VAR_27, VAR_14, "at memory 0x%jx irq %jd %s",
   FUNC_31(VAR_25->reg), FUNC_31(VAR_25->irq),FUNC_2(VAR_21));

 if (FUNC_27(VAR_22, VAR_25, VAR_4, 2))
  goto bad;
 for (VAR_24 = 0; VAR_24 < VAR_4; VAR_24++)
  FUNC_25(VAR_22, VAR_10, &VAR_17, VAR_25);
 for (VAR_24 = 0; VAR_24 < 2; VAR_24++)
  FUNC_25(VAR_22, VAR_11, &VAR_18, VAR_25);
 FUNC_28(VAR_22, VAR_27);

 return 0;

bad:
 if (VAR_26)
  FUNC_3(VAR_26);
 if (VAR_25->reg)
  FUNC_11(VAR_22, VAR_16, VAR_25->regid, VAR_25->reg);
 if (VAR_25->ih)
  FUNC_12(VAR_22, VAR_25->irq, VAR_25->ih);
 if (VAR_25->irq)
  FUNC_11(VAR_22, VAR_15, VAR_25->irqid, VAR_25->irq);
 if (VAR_25->buffer_dmat)
  FUNC_9(VAR_25->buffer_dmat);
 if (VAR_25->control_dmat)
  FUNC_9(VAR_25->control_dmat);
 if (VAR_25->lock)
  FUNC_33(VAR_25->lock);
 FUNC_17(VAR_25, VAR_7);
 return VAR_5;
}

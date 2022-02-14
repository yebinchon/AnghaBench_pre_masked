
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {scalar_t__ type; int rev; int audigy; int audigy2; int nchans; scalar_t__ lock; scalar_t__ parent_dmat; int * irq; scalar_t__ ih; int * reg; int bufsz; int sh; int st; int addrmask; int dev; } ;
struct ac97_info {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 struct ac97_info* FUNC_0 (int ,struct sc_info*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (struct ac97_info*) ;
 int FUNC_4 (struct ac97_info*) ;
 int FUNC_5 () ;
 void* FUNC_6 (int ,int ,int*,int) ;
 scalar_t__ FUNC_7 (int ,int,int ,unsigned int,int ,int *,int *,int ,int,int,int ,int ,int *,scalar_t__*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int,int *) ;
 int FUNC_11 (int ,int *,scalar_t__) ;
 int VAR_20 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*) ;
 int VAR_21 ;
 int FUNC_14 (struct sc_info*) ;
 int VAR_22 ;
 int FUNC_15 (struct sc_info*) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_16 (struct sc_info*,int ) ;
 struct sc_info* FUNC_17 (int,int ,int) ;
 int FUNC_18 (int ,int ,struct ac97_info*) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int ,int *,struct sc_info*) ;
 int FUNC_23 (int ,int,int ,int) ;
 scalar_t__ FUNC_24 (int ,struct sc_info*,int,int) ;
 int FUNC_25 (int ,char*) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int VAR_25 ;
 scalar_t__ FUNC_29 (int ,char*) ;
 int FUNC_30 (scalar_t__) ;
 scalar_t__ FUNC_31 (int ,int *,int ,int ,struct sc_info*,scalar_t__*) ;
 int FUNC_32 (char*,int,char*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_33(device_t VAR_26)
{
 struct ac97_info *VAR_27 = ((void*)0);
 struct sc_info *VAR_28;
 int VAR_29, VAR_30;
 char VAR_31[VAR_17];

 VAR_28 = FUNC_17(sizeof(*VAR_28), VAR_10, VAR_11 | VAR_12);
 VAR_28->lock = FUNC_29(FUNC_12(VAR_26), "snd_emu10k1 softc");
 VAR_28->dev = VAR_26;
 VAR_28->type = FUNC_20(VAR_26);
 VAR_28->rev = FUNC_21(VAR_26);
 VAR_28->audigy = VAR_28->type == VAR_2 || VAR_28->type == VAR_3;
 VAR_28->audigy2 = (VAR_28->audigy && VAR_28->rev == 0x04);
 VAR_28->nchans = VAR_28->audigy ? 8 : 4;
 VAR_28->addrmask = VAR_28->audigy ? VAR_4 : VAR_6;

 FUNC_19(VAR_26);

 VAR_29 = FUNC_1(0);
 VAR_28->reg = FUNC_6(VAR_26, VAR_18, &VAR_29, VAR_15);
 if (VAR_28->reg == ((void*)0)) {
  FUNC_13(VAR_26, "unable to map register space\n");
  goto bad;
 }
 VAR_28->st = FUNC_27(VAR_28->reg);
 VAR_28->sh = FUNC_26(VAR_28->reg);

 VAR_28->bufsz = FUNC_23(VAR_26, 4096, VAR_5, 65536);

 if (FUNC_7( FUNC_9(VAR_26), 2,
              0,
             (1U << 31) - 1,
              VAR_1,
            ((void*)0), ((void*)0),
             VAR_28->bufsz, 1, 0x3ffff,
           0, VAR_20,
             &VAR_8, &VAR_28->parent_dmat) != 0) {
  FUNC_13(VAR_26, "unable to create dma tag\n");
  goto bad;
 }

 if (FUNC_14(VAR_28) == -1) {
  FUNC_13(VAR_26, "unable to initialize the card\n");
  goto bad;
 }

 VAR_27 = FUNC_0(VAR_26, VAR_28, VAR_21);
 if (VAR_27 == ((void*)0)) goto bad;
 VAR_30 = (FUNC_4(VAR_27) & VAR_0) ? 1 : 0;
 if (FUNC_18(VAR_26, FUNC_5(), VAR_27) == -1) goto bad;

 FUNC_15(VAR_28);

 VAR_29 = 0;
 VAR_28->irq = FUNC_6(VAR_26, VAR_19, &VAR_29,
     VAR_15 | VAR_16);
 if (!VAR_28->irq ||
     FUNC_31(VAR_26, VAR_28->irq, VAR_9, VAR_22, VAR_28, &VAR_28->ih)) {
  FUNC_13(VAR_26, "unable to map interrupt\n");
  goto bad;
 }

 FUNC_32(VAR_31, VAR_17, "at io 0x%jx irq %jd %s",
     FUNC_28(VAR_28->reg), FUNC_28(VAR_28->irq),
     FUNC_2(VAR_25));

 if (FUNC_24(VAR_26, VAR_28, VAR_28->nchans, VAR_30 ? 3 : 2)) goto bad;
 for (VAR_29 = 0; VAR_29 < VAR_28->nchans; VAR_29++)
  FUNC_22(VAR_26, VAR_13, &VAR_23, VAR_28);
 for (VAR_29 = 0; VAR_29 < (VAR_30 ? 3 : 2); VAR_29++)
  FUNC_22(VAR_26, VAR_14, &VAR_24, VAR_28);

 FUNC_25(VAR_26, VAR_31);

 return 0;

bad:
 if (VAR_27) FUNC_3(VAR_27);
 if (VAR_28->reg) FUNC_10(VAR_26, VAR_18, FUNC_1(0), VAR_28->reg);
 if (VAR_28->ih) FUNC_11(VAR_26, VAR_28->irq, VAR_28->ih);
 if (VAR_28->irq) FUNC_10(VAR_26, VAR_19, 0, VAR_28->irq);
 if (VAR_28->parent_dmat) FUNC_8(VAR_28->parent_dmat);
 if (VAR_28->lock) FUNC_30(VAR_28->lock);
 FUNC_16(VAR_28, VAR_10);
 return VAR_7;
}

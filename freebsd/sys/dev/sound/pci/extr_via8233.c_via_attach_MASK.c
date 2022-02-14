
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct via_info {int poll_ticks; int polling; int bufsz; int blkcnt; int dma_eol_wake; int dxs_src; int codec_caps; scalar_t__ lock; scalar_t__ sgd_dmat; int sgd_dmamap; scalar_t__ sgd_table; scalar_t__ sgd_addr; scalar_t__ parent_dmat; void* irq; scalar_t__ irqid; scalar_t__ ih; void* reg; scalar_t__ regid; scalar_t__ codec; int sh; int st; int poll_timer; int dev; } ;
struct via_dma_op {int dummy; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,struct via_info*,int ) ;
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
 scalar_t__ FUNC_1 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__,int) ;
 void* FUNC_8 (int ,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_9 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,scalar_t__*) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,int ,scalar_t__,int,int ,struct via_info*,int ) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (scalar_t__,void**,int ,int *) ;
 int FUNC_14 (scalar_t__,scalar_t__,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,scalar_t__,void*) ;
 int FUNC_17 (int ,void*,scalar_t__) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,char*,...) ;
 int VAR_30 ;
 int FUNC_23 (struct via_info*,int ) ;
 struct via_info* FUNC_24 (int,int ,int) ;
 int FUNC_25 (int ,int ,scalar_t__) ;
 int FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (int ) ;
 int FUNC_28 (int ,int ) ;
 int FUNC_29 (int ,int ,int *,struct via_info*) ;
 int FUNC_30 (int ,int,int ,int) ;
 scalar_t__ FUNC_31 (int ,struct via_info*,int,int) ;
 int FUNC_32 (int ,char*) ;
 scalar_t__ FUNC_33 (int ,int ,char*,int*) ;
 int FUNC_34 (void*) ;
 int FUNC_35 (void*) ;
 int FUNC_36 (void*) ;
 scalar_t__ FUNC_37 (int ,char*) ;
 int FUNC_38 (scalar_t__) ;
 scalar_t__ FUNC_39 (int ,void*,int ,int ,struct via_info*,scalar_t__*) ;
 int VAR_31 ;
 int FUNC_40 (char*,int,char*,int ,int ,int ) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ FUNC_41 (int ) ;
 int FUNC_42 (int ) ;
 int VAR_36 ;

__attribute__((used)) static int
FUNC_43(device_t VAR_37)
{
 struct via_info *VAR_38 = ((void*)0);
 char VAR_39[VAR_19];
 int VAR_40, VAR_41, VAR_42, VAR_43, VAR_44;
 int VAR_45;
 uint32_t VAR_46;

 VAR_38 = FUNC_24(sizeof *VAR_38, VAR_8, VAR_9 | VAR_10);
 VAR_38->lock = FUNC_37(FUNC_20(VAR_37),
     "snd_via8233 softc");
 VAR_38->dev = VAR_37;

 FUNC_18(&VAR_38->poll_timer, 1);
 VAR_38->poll_ticks = 1;

 if (FUNC_33(FUNC_19(VAR_37),
     FUNC_21(VAR_37), "polling", &VAR_40) == 0 && VAR_40 != 0)
  VAR_38->polling = 1;
 else
  VAR_38->polling = 0;

 FUNC_28(VAR_37, VAR_14);
 FUNC_26(VAR_37);

 VAR_38->regid = FUNC_1(0);
 VAR_38->reg = FUNC_8(VAR_37, VAR_20, &VAR_38->regid,
       VAR_17);
 if (!VAR_38->reg) {
  FUNC_22(VAR_37, "cannot allocate bus resource.");
  goto bad;
 }
 VAR_38->st = FUNC_35(VAR_38->reg);
 VAR_38->sh = FUNC_34(VAR_38->reg);

 VAR_38->irqid = 0;
 VAR_38->irq = FUNC_8(VAR_37, VAR_21, &VAR_38->irqid,
     VAR_17 | VAR_18);
 if (!VAR_38->irq ||
     FUNC_39(VAR_37, VAR_38->irq, VAR_7,
     VAR_36, VAR_38, &VAR_38->ih)) {
  FUNC_22(VAR_37, "unable to map interrupt\n");
  goto bad;
 }

 VAR_38->bufsz = FUNC_30(VAR_37, 4096, VAR_26, 65536);
 if (FUNC_33(FUNC_19(VAR_37),
     FUNC_21(VAR_37), "blocksize", &VAR_40) == 0 && VAR_40 > 0) {
  VAR_40 &= VAR_24;
  if (VAR_40 < VAR_25)
   VAR_40 = VAR_25;
  VAR_38->blkcnt = VAR_38->bufsz / VAR_40;
  VAR_40 = 0;
  while (VAR_38->blkcnt >> VAR_40)
   VAR_40++;
  VAR_38->blkcnt = 1 << (VAR_40 - 1);
  if (VAR_38->blkcnt < VAR_29)
   VAR_38->blkcnt = VAR_29;
  else if (VAR_38->blkcnt > VAR_28)
   VAR_38->blkcnt = VAR_28;

 } else
  VAR_38->blkcnt = VAR_27;

 VAR_46 = FUNC_27(VAR_37);





 if (VAR_46 == VAR_23)
  VAR_38->dma_eol_wake = 1;
 else
  VAR_38->dma_eol_wake = 0;




 if (VAR_46 == VAR_22) {






  VAR_41 = 1;
 } else if (FUNC_33(FUNC_19(VAR_37),
     FUNC_21(VAR_37), "via_dxs_disabled",
     &VAR_41) == 0)
  VAR_41 = (VAR_41 > 0) ? 1 : 0;
 else
  VAR_41 = 0;

 if (VAR_41) {
  VAR_43 = 0;
  VAR_44 = 1;
 } else {
  if (FUNC_33(FUNC_19(VAR_37),
      FUNC_21(VAR_37), "via_dxs_channels",
      &VAR_43) != 0)
   VAR_43 = VAR_11;
  if (FUNC_33(FUNC_19(VAR_37),
      FUNC_21(VAR_37), "via_sgd_channels",
      &VAR_44) != 0)
   VAR_44 = VAR_12;
 }
 if (VAR_43 > VAR_11)
  VAR_43 = VAR_11;
 else if (VAR_43 < 0)
  VAR_43 = 0;
 if (VAR_44 > VAR_12)
  VAR_44 = VAR_12;
 else if (VAR_44 < 0)
  VAR_44 = 0;
 if (VAR_43 + VAR_44 < 1) {

  VAR_43 = 1;
  VAR_44 = 0;
 }
 if (VAR_43 > 0 && FUNC_33(FUNC_19(VAR_37),
     FUNC_21(VAR_37), "via_dxs_src", &VAR_42) == 0)
  VAR_38->dxs_src = (VAR_42 > 0) ? 1 : 0;
 else
  VAR_38->dxs_src = 0;

 VAR_45 = (VAR_43 + VAR_44 + VAR_13) * VAR_28;


 if (FUNC_9( FUNC_15(VAR_37), 2,
              0,
             VAR_5,
              VAR_4,
            ((void*)0), ((void*)0),
             VAR_38->bufsz, 1, 0x3ffff,
           0, ((void*)0),
             ((void*)0), &VAR_38->parent_dmat) != 0) {
  FUNC_22(VAR_37, "unable to create dma tag\n");
  goto bad;
 }






 if (FUNC_9( FUNC_15(VAR_37), 2,
              0,
             VAR_5,
              VAR_4,
            ((void*)0), ((void*)0),
             VAR_45 * sizeof(struct via_dma_op),
               1, 0x3ffff,
           0, ((void*)0),
             ((void*)0), &VAR_38->sgd_dmat) != 0) {
  FUNC_22(VAR_37, "unable to create dma tag\n");
  goto bad;
 }

 if (FUNC_13(VAR_38->sgd_dmat, (void **)&VAR_38->sgd_table,
     VAR_3, &VAR_38->sgd_dmamap) == -1)
  goto bad;
 if (FUNC_11(VAR_38->sgd_dmat, VAR_38->sgd_dmamap, VAR_38->sgd_table,
     VAR_45 * sizeof(struct via_dma_op), VAR_30, VAR_38, 0))
  goto bad;

 if (FUNC_41(VAR_37))
  goto bad;

 VAR_38->codec = FUNC_0(VAR_37, VAR_38, VAR_35);
 if (!VAR_38->codec)
  goto bad;

 FUNC_25(VAR_37, FUNC_6(), VAR_38->codec);

 VAR_38->codec_caps = FUNC_4(VAR_38->codec);


 if (VAR_38->codec_caps &
     (VAR_1 | VAR_2 | VAR_0)) {
  uint16_t VAR_47 = FUNC_5(VAR_38->codec);
  VAR_47 |= (VAR_38->codec_caps &
      (VAR_1 | VAR_2));
  VAR_47 &= ~VAR_0;
  FUNC_7(VAR_38->codec, VAR_47);
 }

 FUNC_40(VAR_39, VAR_19, "at io 0x%jx irq %jd %s",
     FUNC_36(VAR_38->reg), FUNC_36(VAR_38->irq),
     FUNC_2(VAR_31));


 if (FUNC_31(VAR_37, VAR_38, VAR_43 + VAR_44, VAR_13))
       goto bad;
 for (VAR_40 = 0; VAR_40 < VAR_43; VAR_40++)
       FUNC_29(VAR_37, VAR_15, &VAR_32, VAR_38);
 for (VAR_40 = 0; VAR_40 < VAR_44; VAR_40++)
       FUNC_29(VAR_37, VAR_15, &VAR_33, VAR_38);
 for (VAR_40 = 0; VAR_40 < VAR_13; VAR_40++)
       FUNC_29(VAR_37, VAR_16, &VAR_34, VAR_38);
 if (VAR_43 > 0)
  FUNC_42(VAR_37);
 FUNC_22(VAR_37, "<VIA DXS %sabled: DXS%s %d / SGD %d / REC %d>\n",
     (VAR_43 > 0) ? "En" : "Dis", (VAR_38->dxs_src) ? "(SRC)" : "",
     VAR_43, VAR_44, VAR_13);

 FUNC_32(VAR_37, VAR_39);

 return (0);
bad:
 if (VAR_38->codec)
  FUNC_3(VAR_38->codec);
 if (VAR_38->reg)
  FUNC_16(VAR_37, VAR_20, VAR_38->regid, VAR_38->reg);
 if (VAR_38->ih)
  FUNC_17(VAR_37, VAR_38->irq, VAR_38->ih);
 if (VAR_38->irq)
  FUNC_16(VAR_37, VAR_21, VAR_38->irqid, VAR_38->irq);
 if (VAR_38->parent_dmat)
  FUNC_10(VAR_38->parent_dmat);
 if (VAR_38->sgd_addr)
  FUNC_12(VAR_38->sgd_dmat, VAR_38->sgd_dmamap);
 if (VAR_38->sgd_table)
  FUNC_14(VAR_38->sgd_dmat, VAR_38->sgd_table, VAR_38->sgd_dmamap);
 if (VAR_38->sgd_dmat)
  FUNC_10(VAR_38->sgd_dmat);
 if (VAR_38->lock)
  FUNC_38(VAR_38->lock);
 if (VAR_38)
  FUNC_23(VAR_38, VAR_8);
 return (VAR_6);
}

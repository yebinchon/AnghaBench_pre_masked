
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sc_info {int adcn; int dacn; scalar_t__ lock; scalar_t__ mt; int mtid; scalar_t__ ds; int dsid; scalar_t__ ddma; int ddmaid; scalar_t__ cs; int csid; TYPE_2__* cfg; int * dac; int * adc; scalar_t__ dmat; scalar_t__ irq; int irqid; scalar_t__ ih; scalar_t__ chnum; int dev; } ;
typedef int device_t ;
struct TYPE_4__ {TYPE_1__* codec; } ;
struct TYPE_3__ {int (* destroy ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct sc_info*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct sc_info*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct sc_info*) ;
 int FUNC_9 (struct sc_info*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (struct sc_info*,int ) ;
 struct sc_info* FUNC_11 (int,int ,int ) ;
 int FUNC_12 (int ,int *,struct sc_info*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,int *,struct sc_info*) ;
 int FUNC_15 (int ,struct sc_info*,int,int) ;
 int FUNC_16 (int ,char*) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 scalar_t__ FUNC_19 (int ,char*) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (char*,int,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;

__attribute__((used)) static int
FUNC_24(device_t VAR_10)
{
 struct sc_info *VAR_11;
 char VAR_12[VAR_5];
 int VAR_13 = 0;
 int VAR_14;





 if ((VAR_11 = FUNC_11(sizeof(*VAR_11), VAR_1, VAR_2)) == ((void*)0)) {
  FUNC_5(VAR_10, "cannot allocate softc\n");
  return VAR_0;
 }

 FUNC_3(VAR_11, sizeof(*VAR_11));
 VAR_11->lock = FUNC_19(FUNC_4(VAR_10), "snd_envy24 softc");
 VAR_11->dev = VAR_10;


 FUNC_13(VAR_10);


 VAR_13 = FUNC_6(VAR_11);
 if (VAR_13) {
  FUNC_5(VAR_10, "unable to allocate system resources\n");
  goto bad;
 }


 VAR_13 = FUNC_9(VAR_11);
 if (VAR_13) {
  FUNC_5(VAR_10, "unable to initialize the card\n");
  goto bad;
 }


 FUNC_12(VAR_10, &VAR_9, VAR_11);


 VAR_13 = FUNC_15(VAR_10, VAR_11, 5, 2 + VAR_11->adcn);
 if (VAR_13)
  goto bad;
 VAR_11->chnum = 0;
 for (VAR_14 = 0; VAR_14 < 5; VAR_14++) {
  FUNC_14(VAR_10, VAR_3, &VAR_8, VAR_11);
  VAR_11->chnum++;
 }
 for (VAR_14 = 0; VAR_14 < 2 + VAR_11->adcn; VAR_14++) {
  FUNC_14(VAR_10, VAR_4, &VAR_8, VAR_11);
  VAR_11->chnum++;
 }


 FUNC_21(VAR_12, VAR_5,
     "at io 0x%jx:%jd,0x%jx:%jd,0x%jx:%jd,0x%jx:%jd irq %jd",
     FUNC_18(VAR_11->cs),
     FUNC_17(VAR_11->cs) - FUNC_18(VAR_11->cs) + 1,
     FUNC_18(VAR_11->ddma),
     FUNC_17(VAR_11->ddma) - FUNC_18(VAR_11->ddma) + 1,
     FUNC_18(VAR_11->ds),
     FUNC_17(VAR_11->ds) - FUNC_18(VAR_11->ds) + 1,
     FUNC_18(VAR_11->mt),
     FUNC_17(VAR_11->mt) - FUNC_18(VAR_11->mt) + 1,
     FUNC_18(VAR_11->irq));
 FUNC_16(VAR_10, VAR_12);

 return 0;

bad:
 if (VAR_11->ih)
  FUNC_2(VAR_10, VAR_11->irq, VAR_11->ih);
 if (VAR_11->irq)
  FUNC_1(VAR_10, VAR_7, VAR_11->irqid, VAR_11->irq);
 FUNC_8(VAR_11);
 if (VAR_11->dmat)
  FUNC_0(VAR_11->dmat);
 if (VAR_11->cfg->codec->destroy != ((void*)0)) {
                for (VAR_14 = 0; VAR_14 < VAR_11->adcn; VAR_14++)
                        VAR_11->cfg->codec->destroy(VAR_11->adc[VAR_14]);
                for (VAR_14 = 0; VAR_14 < VAR_11->dacn; VAR_14++)
                        VAR_11->cfg->codec->destroy(VAR_11->dac[VAR_14]);
        }
 FUNC_7(VAR_11->cfg);
 if (VAR_11->cs)
  FUNC_1(VAR_10, VAR_6, VAR_11->csid, VAR_11->cs);
 if (VAR_11->ddma)
  FUNC_1(VAR_10, VAR_6, VAR_11->ddmaid, VAR_11->ddma);
 if (VAR_11->ds)
  FUNC_1(VAR_10, VAR_6, VAR_11->dsid, VAR_11->ds);
 if (VAR_11->mt)
  FUNC_1(VAR_10, VAR_6, VAR_11->mtid, VAR_11->mt);
 if (VAR_11->lock)
  FUNC_20(VAR_11->lock);
 FUNC_10(VAR_11, VAR_1);
 return VAR_13;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {void* irq; void* irqid; scalar_t__ ih; void* reg; void* regid; void* buf; void* bufid; int type; int dev; } ;
struct ac97_info {int dummy; } ;
typedef int device_t ;


 struct ac97_info* FUNC_0 (int ,struct sc_info*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct ac97_info*) ;
 int FUNC_4 () ;
 void* FUNC_5 (int ,int ,void**,int) ;
 int FUNC_6 (int ,int ,void*,void*) ;
 int FUNC_7 (int ,void*,scalar_t__) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct sc_info*,int ) ;
 struct sc_info* FUNC_10 (int,int ,int) ;
 int FUNC_11 (int ,int ,struct ac97_info*) ;
 int VAR_11 ;
 int FUNC_12 (struct sc_info*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,int *,struct sc_info*) ;
 scalar_t__ FUNC_16 (int ,struct sc_info*,int,int) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (void*) ;
 int VAR_14 ;
 scalar_t__ FUNC_19 (int ,void*,int ,int ,struct sc_info*,scalar_t__*) ;
 int FUNC_20 (char*,int,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_21(device_t VAR_15)
{
 struct sc_info *VAR_16;
 struct ac97_info *VAR_17 = ((void*)0);
 char VAR_18[VAR_8];

 VAR_16 = FUNC_10(sizeof(*VAR_16), VAR_1, VAR_2 | VAR_3);
 VAR_16->dev = VAR_15;
 VAR_16->type = FUNC_14(VAR_15);

 FUNC_13(VAR_15);

 VAR_16->bufid = FUNC_1(0);
 VAR_16->buf = FUNC_5(VAR_15, VAR_10, &VAR_16->bufid,
      VAR_6);
 VAR_16->regid = FUNC_1(1);
 VAR_16->reg = FUNC_5(VAR_15, VAR_10, &VAR_16->regid,
      VAR_6);

 if (!VAR_16->buf || !VAR_16->reg) {
  FUNC_8(VAR_15, "unable to map register space\n");
  goto bad;
 }

 if (FUNC_12(VAR_16) == -1) {
  FUNC_8(VAR_15, "unable to initialize the card\n");
  goto bad;
 }

 VAR_17 = FUNC_0(VAR_15, VAR_16, VAR_11);
 if (VAR_17 == ((void*)0)) goto bad;
 if (FUNC_11(VAR_15, FUNC_4(), VAR_17) == -1) goto bad;

 VAR_16->irqid = 0;
 VAR_16->irq = FUNC_5(VAR_15, VAR_9, &VAR_16->irqid,
      VAR_6 | VAR_7);
 if (!VAR_16->irq || FUNC_19(VAR_15, VAR_16->irq, 0, VAR_12, VAR_16, &VAR_16->ih)) {
  FUNC_8(VAR_15, "unable to map interrupt\n");
  goto bad;
 }

 FUNC_20(VAR_18, VAR_8, "at memory 0x%jx, 0x%jx irq %jd %s",
   FUNC_18(VAR_16->buf), FUNC_18(VAR_16->reg),
   FUNC_18(VAR_16->irq),FUNC_2(VAR_14));

 if (FUNC_16(VAR_15, VAR_16, 1, 1)) goto bad;
 FUNC_15(VAR_15, VAR_5, &VAR_13, VAR_16);
 FUNC_15(VAR_15, VAR_4, &VAR_13, VAR_16);
 FUNC_17(VAR_15, VAR_18);

 return 0;

bad:
 if (VAR_17) FUNC_3(VAR_17);
 if (VAR_16->buf) FUNC_6(VAR_15, VAR_10, VAR_16->bufid, VAR_16->buf);
 if (VAR_16->reg) FUNC_6(VAR_15, VAR_10, VAR_16->regid, VAR_16->reg);
 if (VAR_16->ih) FUNC_7(VAR_15, VAR_16->irq, VAR_16->ih);
 if (VAR_16->irq) FUNC_6(VAR_15, VAR_9, VAR_16->irqid, VAR_16->irq);
 FUNC_9(VAR_16, VAR_1);
 return VAR_0;
}

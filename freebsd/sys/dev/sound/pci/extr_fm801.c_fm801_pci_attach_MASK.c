
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm801_info {scalar_t__ regtype; scalar_t__ parent_dmat; void* irq; scalar_t__ irqid; scalar_t__ ih; void* reg; scalar_t__ regid; int radio; int bufsz; int sh; int st; int type; } ;
struct ac97_info {int dummy; } ;
typedef int device_t ;


 struct ac97_info* FUNC_0 (int ,struct fm801_info*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_3 (struct ac97_info*) ;
 int FUNC_4 () ;
 void* FUNC_5 (int ,scalar_t__,scalar_t__*,int) ;
 scalar_t__ FUNC_6 (int ,int,int ,int ,int ,int *,int *,int ,int,int,int ,int ,int *,scalar_t__*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__,scalar_t__,void*) ;
 int FUNC_11 (int ,void*,scalar_t__) ;
 int VAR_18 ;
 int FUNC_12 (int ,char*,int) ;
 int FUNC_13 (int ,char*) ;
 int VAR_19 ;
 int FUNC_14 (struct fm801_info*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_15 (struct fm801_info*,int ) ;
 struct fm801_info* FUNC_16 (int,int ,int) ;
 int FUNC_17 (int ,int ,struct ac97_info*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int ,int *,struct fm801_info*) ;
 int FUNC_21 (int ,int,int ,int) ;
 scalar_t__ FUNC_22 (int ,struct fm801_info*,int ,int) ;
 int FUNC_23 (int ,char*) ;
 int FUNC_24 (void*) ;
 int FUNC_25 (void*) ;
 int FUNC_26 (void*) ;
 int VAR_22 ;
 scalar_t__ FUNC_27 (int ,void*,int ,int ,struct fm801_info*,scalar_t__*) ;
 int FUNC_28 (char*,int,char*,char*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_29(device_t VAR_23)
{
 struct ac97_info *VAR_24 = ((void*)0);
 struct fm801_info *VAR_25;
 int VAR_26;
 int VAR_27 = 0;
 char VAR_28[VAR_14];

 VAR_25 = FUNC_16(sizeof(*VAR_25), VAR_6, VAR_7 | VAR_8);
 VAR_25->type = FUNC_19(VAR_23);

 FUNC_18(VAR_23);

 for (VAR_26 = 0; (VAR_27 == 0) && (VAR_26 < VAR_9); VAR_26++) {
  VAR_25->regid = FUNC_1(VAR_26);
  VAR_25->regtype = VAR_17;
  VAR_25->reg = FUNC_5(VAR_23, VAR_25->regtype,
          &VAR_25->regid, VAR_12);
  if(!VAR_25->reg)
  {
   VAR_25->regtype = VAR_15;
   VAR_25->reg = FUNC_5(VAR_23,
           VAR_25->regtype,
           &VAR_25->regid,
           VAR_12);
  }

  if(VAR_25->reg) {
   VAR_25->st = FUNC_25(VAR_25->reg);
   VAR_25->sh = FUNC_24(VAR_25->reg);
   VAR_27++;
  }
 }

 if (VAR_27 == 0) {
  FUNC_13(VAR_23, "unable to map register space\n");
  goto oops;
 }

 VAR_25->bufsz = FUNC_21(VAR_23, 4096, VAR_3, 65536);

 FUNC_14(VAR_25);

 VAR_24 = FUNC_0(VAR_23, VAR_25, VAR_19);
 if (VAR_24 == ((void*)0)) goto oops;

 if (FUNC_17(VAR_23, FUNC_4(), VAR_24) == -1) goto oops;

 VAR_25->irqid = 0;
 VAR_25->irq = FUNC_5(VAR_23, VAR_16, &VAR_25->irqid,
         VAR_12 | VAR_13);
 if (!VAR_25->irq ||
     FUNC_27(VAR_23, VAR_25->irq, 0, VAR_20, VAR_25, &VAR_25->ih)) {
  FUNC_13(VAR_23, "unable to map interrupt\n");
  goto oops;
 }

 if (FUNC_6( FUNC_9(VAR_23), 2,
              0,
             VAR_1,
              VAR_0,
            ((void*)0), ((void*)0),
             VAR_25->bufsz, 1, 0x3ffff,
           0, VAR_18,
             &VAR_5, &VAR_25->parent_dmat) != 0) {
  FUNC_13(VAR_23, "unable to create dma tag\n");
  goto oops;
 }

 FUNC_28(VAR_28, 64, "at %s 0x%jx irq %jd %s",
  (VAR_25->regtype == VAR_15)? "io" : "memory",
  FUNC_26(VAR_25->reg), FUNC_26(VAR_25->irq),FUNC_2(VAR_22));


 if (FUNC_22(VAR_23, VAR_25, 1, 1)) goto oops;
 FUNC_20(VAR_23, VAR_10, &VAR_21, VAR_25);
 FUNC_20(VAR_23, VAR_11, &VAR_21, VAR_25);
 FUNC_23(VAR_23, VAR_28);

 VAR_25->radio = FUNC_12(VAR_23, "radio", -1);
 FUNC_8(VAR_23);

 return 0;

oops:
 if (VAR_24) FUNC_3(VAR_24);
 if (VAR_25->reg) FUNC_10(VAR_23, VAR_25->regtype, VAR_25->regid, VAR_25->reg);
 if (VAR_25->ih) FUNC_11(VAR_23, VAR_25->irq, VAR_25->ih);
 if (VAR_25->irq) FUNC_10(VAR_23, VAR_16, VAR_25->irqid, VAR_25->irq);
 if (VAR_25->parent_dmat) FUNC_7(VAR_25->parent_dmat);
 FUNC_15(VAR_25, VAR_6);
 return VAR_2;
}

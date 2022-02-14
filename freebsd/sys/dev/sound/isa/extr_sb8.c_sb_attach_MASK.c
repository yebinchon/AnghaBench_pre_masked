
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sb_info {uintptr_t bd_id; uintptr_t bd_flags; int bufsize; int drq; int irq; int io_base; int parent_dmat; int ih; int parent_dev; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,uintptr_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int ,int,int ,int ,int ,int *,int *,int ,int,int,int ,int ,int *,int *) ;
 int FUNC_3 (int ) ;
 int VAR_12 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 struct sb_info* FUNC_6 (int,int ,int) ;
 scalar_t__ FUNC_7 (int ,int *,struct sb_info*) ;
 int FUNC_8 (int ,int ,int *,struct sb_info*) ;
 int FUNC_9 (int ,int,int ,int) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,struct sb_info*,int,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (struct sb_info*,int ) ;
 int VAR_13 ;
 int FUNC_16 (struct sb_info*,int ) ;
 scalar_t__ FUNC_17 (struct sb_info*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_18 (int ,int ,int ,int ,struct sb_info*,int *) ;
 int FUNC_19 (char*,int,char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_20(device_t VAR_18)
{
     struct sb_info *VAR_19;
     char VAR_20[VAR_11];
 uintptr_t VAR_21;

     VAR_19 = FUNC_6(sizeof(*VAR_19), VAR_4, VAR_5 | VAR_6);
 VAR_19->parent_dev = FUNC_4(VAR_18);
 FUNC_0(FUNC_4(VAR_18), VAR_18, 1, &VAR_21);
 VAR_19->bd_id = VAR_21 & 0x0000ffff;
 VAR_19->bd_flags = (VAR_21 & 0xffff0000) >> 16;
 VAR_19->bufsize = FUNC_9(VAR_18, 4096, VAR_9, 65536);

     if (FUNC_15(VAR_19, VAR_18))
  goto no;
     if (FUNC_17(VAR_19))
  goto no;
     if (FUNC_7(VAR_18, (VAR_19->bd_id < 0x300)? &VAR_15 : &VAR_16, VAR_19))
  goto no;
 if (FUNC_18(VAR_18, VAR_19->irq, 0, VAR_13, VAR_19, &VAR_19->ih))
  goto no;

 FUNC_12(VAR_18, FUNC_10(VAR_18) | VAR_10);

     if (FUNC_2( FUNC_3(VAR_18), 2,
               0,
              VAR_1,
               VAR_0,
             ((void*)0), ((void*)0),
              VAR_19->bufsize, 1,
              0x3ffff, 0,
               VAR_12, &VAR_3,
   &VAR_19->parent_dmat) != 0) {
  FUNC_5(VAR_18, "unable to create dma tag\n");
  goto no;
     }

     FUNC_19(VAR_20, VAR_11, "at io 0x%jx irq %jd drq %jd bufsz %u %s",
           FUNC_14(VAR_19->io_base), FUNC_14(VAR_19->irq),
  FUNC_14(VAR_19->drq), VAR_19->bufsize, FUNC_1(VAR_17));

     if (FUNC_11(VAR_18, VAR_19, 1, 1))
  goto no;
 FUNC_8(VAR_18, VAR_8, &VAR_14, VAR_19);
 FUNC_8(VAR_18, VAR_7, &VAR_14, VAR_19);

     FUNC_13(VAR_18, VAR_20);

     return 0;

no:
     FUNC_16(VAR_19, VAR_18);
     return VAR_2;
}

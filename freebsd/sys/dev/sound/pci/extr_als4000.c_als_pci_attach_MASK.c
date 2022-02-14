
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int irq; int reg; int dev; int lock; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct sc_info*) ;
 int VAR_8 ;
 int FUNC_2 (int ,struct sc_info*) ;
 scalar_t__ FUNC_3 (int ,struct sc_info*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct sc_info*,int ) ;
 struct sc_info* FUNC_7 (int,int ,int) ;
 scalar_t__ FUNC_8 (int ,int *,struct sc_info*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (int ,int ,int *,struct sc_info*) ;
 scalar_t__ FUNC_13 (int ,struct sc_info*,int,int) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int ) ;
 int VAR_11 ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (char*,int,char*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_12)
{
 struct sc_info *VAR_13;
 char VAR_14[VAR_7];

 VAR_13 = FUNC_7(sizeof(*VAR_13), VAR_1, VAR_2 | VAR_3);
 VAR_13->lock = FUNC_16(FUNC_4(VAR_12), "snd_als4000 softc");
 VAR_13->dev = VAR_12;

 FUNC_9(VAR_12);





 if (FUNC_10(VAR_12) != VAR_4) {

  FUNC_5(VAR_12, "chip is in D%d power mode "
         "-- setting to D0\n", FUNC_10(VAR_12));
  FUNC_11(VAR_12, VAR_4);
 }

 if (FUNC_3(VAR_12, VAR_13)) {
  FUNC_5(VAR_12, "failed to allocate resources\n");
  goto bad_attach;
 }

 if (FUNC_1(VAR_13)) {
  FUNC_5(VAR_12, "failed to initialize hardware\n");
  goto bad_attach;
 }

 if (FUNC_8(VAR_12, &VAR_8, VAR_13)) {
  FUNC_5(VAR_12, "failed to initialize mixer\n");
  goto bad_attach;
 }

 if (FUNC_13(VAR_12, VAR_13, 1, 1)) {
  FUNC_5(VAR_12, "failed to register pcm entries\n");
  goto bad_attach;
 }

 FUNC_12(VAR_12, VAR_5, &VAR_9, VAR_13);
 FUNC_12(VAR_12, VAR_6, &VAR_10, VAR_13);

 FUNC_17(VAR_14, VAR_7, "at io 0x%jx irq %jd %s",
   FUNC_15(VAR_13->reg), FUNC_15(VAR_13->irq),FUNC_0(VAR_11));
 FUNC_14(VAR_12, VAR_14);
 return 0;

 bad_attach:
 FUNC_2(VAR_12, VAR_13);
 FUNC_6(VAR_13, VAR_1);
 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_gic_softc {int gic_res; int gic_irqs; int nirqs; int mutex; int gic_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (struct mtk_gic_softc*,int ,int) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (char*,int ,int *,struct mtk_gic_softc*,int ,int ,int *) ;
 struct mtk_gic_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 intptr_t FUNC_10 (int ) ;
 int * FUNC_11 (int ,intptr_t) ;
 int VAR_6 ;
 scalar_t__ FUNC_12 (struct mtk_gic_softc*) ;
 int VAR_7 ;
 int FUNC_13 (int *,char*,char*,int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_8)
{
 struct mtk_gic_softc *VAR_9;
 intptr_t VAR_10 = FUNC_10(VAR_8);
 int VAR_11;

 VAR_9 = FUNC_8(VAR_8);

 if (FUNC_5(VAR_8, VAR_7, VAR_9->gic_res)) {
  FUNC_9(VAR_8, "could not allocate resources\n");
  return (VAR_0);
 }

 VAR_9->gic_dev = VAR_8;


 FUNC_13(&VAR_9->mutex, "PIC lock", "", VAR_5);


 VAR_9->nirqs = FUNC_14(VAR_9->gic_irqs);


 FUNC_4(VAR_9, VAR_2, 0xFFFFFFFF);


 FUNC_4(VAR_9, VAR_4, 0x00000000);


 FUNC_4(VAR_9, VAR_3, 0xFFFFFFFF);




 for (VAR_11 = 0; VAR_11 < 32; VAR_11++) {
  FUNC_4(VAR_9, FUNC_0(VAR_11), FUNC_2(0));
  FUNC_4(VAR_9, FUNC_1(VAR_11, 0), FUNC_3(0));
 }


 if (FUNC_12(VAR_9) != 0) {
  FUNC_9(VAR_8, "could not register GIC ISRCs\n");
  goto cleanup;
 }





 if (FUNC_11(VAR_8, VAR_10) == ((void*)0)) {
  FUNC_9(VAR_8, "could not register PIC\n");
  goto cleanup;
 }

 FUNC_7("gic", VAR_6, ((void*)0), VAR_9, 0, VAR_1,
     ((void*)0));

 return (0);

cleanup:
 FUNC_6(VAR_8, VAR_7, VAR_9->gic_res);
 return(VAR_0);
}

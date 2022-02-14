
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_pic_softc {int * pic_res; int pic_intrhand; int pic_irqs; int nirqs; int mutex; int pic_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mtk_pic_softc*,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int *,struct mtk_pic_softc*,int *) ;
 struct mtk_pic_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,intptr_t) ;
 int * FUNC_7 (int ,intptr_t) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (struct mtk_pic_softc*) ;
 int VAR_7 ;
 int FUNC_9 (int *,char*,char*,int ) ;
 int FUNC_10 (int ) ;
 intptr_t FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_8)
{
 struct mtk_pic_softc *VAR_9;
 intptr_t VAR_10 = FUNC_11(VAR_8);

 VAR_9 = FUNC_4(VAR_8);

 if (FUNC_1(VAR_8, VAR_7, VAR_9->pic_res)) {
  FUNC_5(VAR_8, "could not allocate resources\n");
  return (VAR_0);
 }

 VAR_9->pic_dev = VAR_8;


 FUNC_9(&VAR_9->mutex, "PIC lock", "", VAR_5);


 VAR_9->nirqs = FUNC_10(VAR_9->pic_irqs);


 FUNC_0(VAR_9, VAR_2, 0x7FFFFFFF);


 FUNC_0(VAR_9, VAR_3, 0x80000000);


 FUNC_0(VAR_9, VAR_4, 0x00000000);


 if (FUNC_8(VAR_9) != 0) {
  FUNC_5(VAR_8, "could not register PIC ISRCs\n");
  goto cleanup;
 }





 if (FUNC_7(VAR_8, VAR_10) == ((void*)0)) {
  FUNC_5(VAR_8, "could not register PIC\n");
  goto cleanup;
 }

 if (FUNC_3(VAR_8, VAR_9->pic_res[1], VAR_1,
     VAR_6, ((void*)0), VAR_9, &VAR_9->pic_intrhand)) {
  FUNC_5(VAR_8, "could not setup irq handler\n");
  FUNC_6(VAR_8, VAR_10);
  goto cleanup;
 }
 return (0);

cleanup:
 FUNC_2(VAR_8, VAR_7, VAR_9->pic_res);
 return(VAR_0);
}

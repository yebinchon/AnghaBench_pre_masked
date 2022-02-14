
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jz4780_pic_softc {int * pic_res; int pic_intrhand; int pic_irqs; int nirqs; int pic_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct jz4780_pic_softc*,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int *,struct jz4780_pic_softc*,int *) ;
 struct jz4780_pic_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,intptr_t) ;
 int * FUNC_7 (int ,intptr_t) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (struct jz4780_pic_softc*) ;
 int VAR_5 ;
 int FUNC_9 (int ) ;
 intptr_t FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_6)
{
 struct jz4780_pic_softc *VAR_7;
 intptr_t VAR_8;

 VAR_8 = FUNC_10(VAR_6);

 VAR_7 = FUNC_4(VAR_6);

 if (FUNC_1(VAR_6, VAR_5, VAR_7->pic_res)) {
  FUNC_5(VAR_6, "could not allocate resources\n");
  return (VAR_0);
 }

 VAR_7->pic_dev = VAR_6;


 VAR_7->nirqs = FUNC_9(VAR_7->pic_irqs);


 FUNC_0(VAR_7, VAR_2, 0xFFFFFFFF);
 FUNC_0(VAR_7, VAR_3, 0xFFFFFFFF);


 if (FUNC_8(VAR_7) != 0) {
  FUNC_5(VAR_6, "could not register PIC ISRCs\n");
  goto cleanup;
 }





 if (FUNC_7(VAR_6, VAR_8) == ((void*)0)) {
  FUNC_5(VAR_6, "could not register PIC\n");
  goto cleanup;
 }

 if (FUNC_3(VAR_6, VAR_7->pic_res[1], VAR_1,
     VAR_4, ((void*)0), VAR_7, &VAR_7->pic_intrhand)) {
  FUNC_5(VAR_6, "could not setup irq handler\n");
  FUNC_6(VAR_6, VAR_8);
  goto cleanup;
 }

 return (0);

cleanup:
 FUNC_2(VAR_6, VAR_5, VAR_7->pic_res);

 return(VAR_0);
}

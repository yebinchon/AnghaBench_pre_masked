
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_pic_softc {int pic_irqs; int nirqs; int pic_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 struct mips_pic_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,intptr_t,int ,struct mips_pic_softc*,int ) ;
 int FUNC_3 (int ,intptr_t) ;
 int * FUNC_4 (int ,intptr_t) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (struct mips_pic_softc*) ;
 int FUNC_6 (int ) ;
 struct mips_pic_softc* VAR_2 ;
 intptr_t FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_3)
{
 struct mips_pic_softc *VAR_4;
 intptr_t VAR_5 = FUNC_7(VAR_3);

 if (VAR_2)
  return (VAR_0);

 VAR_4 = FUNC_0(VAR_3);

 VAR_4->pic_dev = VAR_3;
 VAR_2 = VAR_4;


 VAR_4->nirqs = FUNC_6(VAR_4->pic_irqs);


 if (FUNC_5(VAR_4) != 0) {
  FUNC_1(VAR_3, "could not register PIC ISRCs\n");
  goto cleanup;
 }





 if (FUNC_4(VAR_3, VAR_5) == ((void*)0)) {
  FUNC_1(VAR_3, "could not register PIC\n");
  goto cleanup;
 }


 if (FUNC_2(VAR_3, VAR_5, VAR_1, VAR_4, 0) != 0) {
  FUNC_1(VAR_3, "could not set PIC as a root\n");
  FUNC_3(VAR_3, VAR_5);
  goto cleanup;
 }

 return (0);

cleanup:
 return(VAR_0);
}

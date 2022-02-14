
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bcm_mbox_softc {scalar_t__* have_message; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct bcm_mbox_softc*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct bcm_mbox_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bcm_mbox_softc* FUNC_4 (int ) ;
 int FUNC_5 (char*,int,int ) ;
 int FUNC_6 (struct bcm_mbox_softc*,int ) ;
 int FUNC_7 (struct bcm_mbox_softc*,int ,int ) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_4, int VAR_5, uint32_t VAR_6)
{
 int VAR_7 = 1000;
 struct bcm_mbox_softc *VAR_8 = FUNC_4(VAR_4);

 FUNC_5("bcm_mbox_write: chan %d, data %08x\n", VAR_5, VAR_6);
 FUNC_1(VAR_8);
 VAR_8->have_message[VAR_5] = 0;
 while ((FUNC_6(VAR_8, VAR_1) & VAR_3) && --VAR_7)
  FUNC_0(5);
 if (VAR_7 == 0) {
  FUNC_8("bcm_mbox_write: STATUS_FULL stuck");
  FUNC_3(VAR_8);
  return (VAR_0);
 }
 FUNC_7(VAR_8, VAR_2, FUNC_2(VAR_5, VAR_6));
 FUNC_3(VAR_8);

 return (0);
}

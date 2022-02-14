
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mpt_softc {int * fw_image; scalar_t__ is_1078; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mpt_softc*) ;
 int FUNC_2 (struct mpt_softc*) ;
 int FUNC_3 (struct mpt_softc*) ;
 int FUNC_4 (struct mpt_softc*,int ,char*) ;
 int FUNC_5 (struct mpt_softc*,char*) ;
 int FUNC_6 (struct mpt_softc*,int ) ;
 int FUNC_7 (struct mpt_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_8(struct mpt_softc *VAR_5)
{
 int VAR_6;
 int VAR_7;
 uint32_t VAR_8;

 FUNC_4(VAR_5, VAR_4, "hard reset\n");

 if (VAR_5->is_1078) {
  FUNC_7(VAR_5, VAR_3, 0x07);
  FUNC_0(1000);
  return;
 }

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6) {
  FUNC_5(VAR_5, "WARNING - Could not enter diagnostic mode !\n");
  FUNC_5(VAR_5, "Trying to reset anyway.\n");
 }

 VAR_8 = FUNC_6(VAR_5, VAR_2);





 FUNC_7(VAR_5, VAR_2, VAR_8 | VAR_0);
 FUNC_0(1000);


 FUNC_7(VAR_5, VAR_2, VAR_8 | VAR_1);







 VAR_7 = 5000;
 do {
  FUNC_0(1000);
  VAR_8 = FUNC_6(VAR_5, VAR_2);
 } while (--VAR_7 && (VAR_8 & VAR_1) == 0);

 if (VAR_7 == 0) {
  FUNC_5(VAR_5, "WARNING - Failed hard reset! "
   "Trying to initialize anyway.\n");
 }





 if (VAR_5->fw_image != ((void*)0)) {

  VAR_6 = FUNC_2(VAR_5);

  if (VAR_6) {
   FUNC_5(VAR_5, "WARNING - Firmware Download Failed!\n");
   FUNC_5(VAR_5, "Trying to initialize anyway.\n");
  }
 }






 FUNC_1(VAR_5);
}

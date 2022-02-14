
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct fxp_softc {int eeprom_size; } ;


 int FUNC_0 (struct fxp_softc*,int ) ;
 int FUNC_1 (struct fxp_softc*,int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct fxp_softc*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct fxp_softc *VAR_4, int VAR_5, uint16_t VAR_6)
{
 int VAR_7;




 FUNC_1(VAR_4, VAR_0, VAR_1);
 FUNC_3(VAR_4, 0x4, 3);
 FUNC_3(VAR_4, 0x03 << (VAR_4->eeprom_size - 2), VAR_4->eeprom_size);
 FUNC_1(VAR_4, VAR_0, 0);
 FUNC_2(1);



 FUNC_1(VAR_4, VAR_0, VAR_1);
 FUNC_3(VAR_4, VAR_3, 3);
 FUNC_3(VAR_4, VAR_5, VAR_4->eeprom_size);
 FUNC_3(VAR_4, VAR_6, 16);
 FUNC_1(VAR_4, VAR_0, 0);
 FUNC_2(1);



 FUNC_1(VAR_4, VAR_0, VAR_1);
 FUNC_2(1);
 for (VAR_7 = 0; VAR_7 < 1000; VAR_7++) {
  if (FUNC_0(VAR_4, VAR_0) & VAR_2)
   break;
  FUNC_2(50);
 }
 FUNC_1(VAR_4, VAR_0, 0);
 FUNC_2(1);



 FUNC_1(VAR_4, VAR_0, VAR_1);
 FUNC_3(VAR_4, 0x4, 3);
 FUNC_3(VAR_4, 0, VAR_4->eeprom_size);
 FUNC_1(VAR_4, VAR_0, 0);
 FUNC_2(1);
}

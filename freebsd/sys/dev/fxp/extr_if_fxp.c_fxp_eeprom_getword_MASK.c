
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct fxp_softc {int eeprom_size; } ;


 int FUNC_0 (struct fxp_softc*,int ) ;
 int FUNC_1 (struct fxp_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct fxp_softc*,int ,int) ;

__attribute__((used)) static uint16_t
FUNC_4(struct fxp_softc *VAR_6, int VAR_7, int VAR_8)
{
 uint16_t VAR_9, VAR_10;
 int VAR_11;

 FUNC_1(VAR_6, VAR_0, VAR_1);



 FUNC_3(VAR_6, VAR_5, 3);



 VAR_10 = 0;
 for (VAR_11 = 1 << (VAR_6->eeprom_size - 1); VAR_11; VAR_11 >>= 1) {
  if (VAR_7 & VAR_11)
   VAR_9 = VAR_1 | VAR_2;
  else
   VAR_9 = VAR_1;
  FUNC_1(VAR_6, VAR_0, VAR_9);
  FUNC_2(1);
  FUNC_1(VAR_6, VAR_0, VAR_9 | VAR_4);
  FUNC_2(1);
  FUNC_1(VAR_6, VAR_0, VAR_9);
  FUNC_2(1);
  VAR_9 = FUNC_0(VAR_6, VAR_0) & VAR_3;
  VAR_10++;
  if (VAR_8 && VAR_9 == 0) {
   VAR_6->eeprom_size = VAR_10;
   break;
  }
 }



 VAR_10 = 0;
 VAR_9 = VAR_1;
 for (VAR_11 = 1 << 15; VAR_11; VAR_11 >>= 1) {
  FUNC_1(VAR_6, VAR_0, VAR_9 | VAR_4);
  FUNC_2(1);
  if (FUNC_0(VAR_6, VAR_0) & VAR_3)
   VAR_10 |= VAR_11;
  FUNC_1(VAR_6, VAR_0, VAR_9);
  FUNC_2(1);
 }
 FUNC_1(VAR_6, VAR_0, 0);
 FUNC_2(1);

 return (VAR_10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bge_softc {int bge_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct bge_softc*,int ,int ) ;
 int VAR_8 ;
 int FUNC_2 (struct bge_softc*,int ) ;
 int FUNC_3 (struct bge_softc*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static uint8_t
FUNC_6(struct bge_softc *VAR_9, int VAR_10, uint8_t *VAR_11)
{
 int VAR_12;
 uint32_t VAR_13 = 0;





 FUNC_1(VAR_9, VAR_6, VAR_7);


 FUNC_3(VAR_9, VAR_2,
     VAR_1 | FUNC_0(VAR_5));
 FUNC_4(20);


 FUNC_3(VAR_9, VAR_2, VAR_4 | VAR_10);


 for(VAR_12 = 0; VAR_12 < VAR_8 * 10; VAR_12++) {
  FUNC_4(10);
  if (FUNC_2(VAR_9, VAR_2) & VAR_0)
   break;
 }

 if (VAR_12 == VAR_8 * 10) {
  FUNC_5(VAR_9->bge_dev, "EEPROM read timed out\n");
  return (1);
 }


 VAR_13 = FUNC_2(VAR_9, VAR_3);

 *VAR_11 = (VAR_13 >> ((VAR_10 % 4) * 8)) & 0xFF;

 return (0);
}

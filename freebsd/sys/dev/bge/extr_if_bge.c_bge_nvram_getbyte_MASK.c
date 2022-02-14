
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bge_softc {int bge_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct bge_softc*,int ) ;
 int FUNC_1 (struct bge_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static uint8_t
FUNC_5(struct bge_softc *VAR_12, int VAR_13, uint8_t *VAR_14)
{
 uint32_t VAR_15, VAR_16 = 0;
 int VAR_17;


 FUNC_1(VAR_12, VAR_10, VAR_4);
 for (VAR_17 = 0; VAR_17 < 8000; VAR_17++) {
  if (FUNC_0(VAR_12, VAR_10) & VAR_3)
   break;
  FUNC_2(20);
 }
 if (VAR_17 == 8000)
  return (1);


 VAR_15 = FUNC_0(VAR_12, VAR_5);
 FUNC_1(VAR_12, VAR_5, VAR_15 | VAR_0);

 FUNC_1(VAR_12, VAR_6, VAR_13 & 0xfffffffc);
 FUNC_1(VAR_12, VAR_7, VAR_9);
 for (VAR_17 = 0; VAR_17 < VAR_11 * 10; VAR_17++) {
  FUNC_2(10);
  if (FUNC_0(VAR_12, VAR_7) & VAR_1) {
   FUNC_2(10);
   break;
  }
 }

 if (VAR_17 == VAR_11 * 10) {
  FUNC_4(VAR_12->bge_ifp, "nvram read timed out\n");
  return (1);
 }


 VAR_16 = FUNC_0(VAR_12, VAR_8);

 *VAR_14 = (FUNC_3(VAR_16) >> ((VAR_13 % 4) * 8)) & 0xFF;


 FUNC_1(VAR_12, VAR_5, VAR_15);


 FUNC_1(VAR_12, VAR_10, VAR_2);
 FUNC_0(VAR_12, VAR_10);

 return (0);
}

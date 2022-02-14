
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct rsu_softc {int sc_dev; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct rsu_softc*,int) ;
 int FUNC_4 (struct rsu_softc*,int ) ;
 int FUNC_5 (struct rsu_softc*,int ,int) ;

__attribute__((used)) static uint8_t
FUNC_6(struct rsu_softc *VAR_4, uint16_t VAR_5)
{
 uint32_t VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(VAR_4, VAR_0);
 VAR_6 = FUNC_1(VAR_6, VAR_1, VAR_5);
 VAR_6 &= ~VAR_3;
 FUNC_5(VAR_4, VAR_0, VAR_6);

 for (VAR_7 = 0; VAR_7 < 100; VAR_7++) {
  VAR_6 = FUNC_4(VAR_4, VAR_0);
  if (VAR_6 & VAR_3)
   return (FUNC_0(VAR_6, VAR_2));
  FUNC_3(VAR_4, 1);
 }
 FUNC_2(VAR_4->sc_dev,
     "could not read efuse byte at address 0x%x\n", VAR_5);
 return (0xff);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emac_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct emac_softc*,int ,int) ;
 struct emac_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct emac_softc*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct emac_softc *VAR_7;

 VAR_7 = FUNC_1(VAR_3);


 FUNC_0(VAR_7, VAR_0, (VAR_4 << 8) | VAR_5);

 FUNC_0(VAR_7, VAR_2, VAR_6);

 FUNC_0(VAR_7, VAR_1, 0x1);
 if (!FUNC_3(VAR_7)) {
  FUNC_2(VAR_3, "timeout waiting for mii write\n");
  return (0);
 }

 FUNC_0(VAR_7, VAR_1, 0x0);

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fxp_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct fxp_softc*,int ) ;
 int FUNC_1 (struct fxp_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct fxp_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2, int VAR_3, int VAR_4)
{
 struct fxp_softc *VAR_5 = FUNC_3(VAR_2);
 int VAR_6 = 10000;
 int VAR_7;

 FUNC_1(VAR_5, VAR_0,
     (VAR_1 << 26) | (VAR_4 << 16) | (VAR_3 << 21));

 while (((VAR_7 = FUNC_0(VAR_5, VAR_0)) & 0x10000000) == 0
     && VAR_6--)
  FUNC_2(10);

 if (VAR_6 <= 0)
  FUNC_4(VAR_2, "fxp_miibus_readreg: timed out\n");

 return (VAR_7 & 0xffff);
}

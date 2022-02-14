
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsec_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct tsec_softc*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct tsec_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct tsec_softc*,int ) ;

int
FUNC_6(device_t VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct tsec_softc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_3);

 FUNC_0();
 FUNC_2(VAR_7, VAR_1, (VAR_4 << 8) | VAR_5);
 FUNC_2(VAR_7, VAR_2, VAR_6);
 VAR_8 = FUNC_5(VAR_7, VAR_0);
 FUNC_1();

 if (VAR_8)
  FUNC_4(VAR_3, "Timeout while writing to PHY!\n");

 return (0);
}

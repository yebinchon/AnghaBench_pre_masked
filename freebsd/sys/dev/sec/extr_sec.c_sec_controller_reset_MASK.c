
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_softc {int sc_dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sec_softc*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct sec_softc*,int ,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct sec_softc *VAR_4)
{
 int VAR_5 = VAR_3;


 FUNC_2(VAR_4, VAR_1, VAR_2);

 while (FUNC_1(VAR_4, VAR_1) & VAR_2) {
  FUNC_0(1000);
  VAR_5 -= 1000;

  if (VAR_5 < 0) {
   FUNC_3(VAR_4->sc_dev, "timeout while waiting for "
       "device reset!\n");
   return (VAR_0);
  }
 }

 return (0);
}

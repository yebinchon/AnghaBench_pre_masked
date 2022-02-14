
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ste_softc {int ste_dev; } ;


 int FUNC_0 (struct ste_softc*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(struct ste_softc *VAR_2)
{
 int VAR_3;

 FUNC_1(1000);

 for (VAR_3 = 0; VAR_3 < 100; VAR_3++) {
  if (FUNC_0(VAR_2, VAR_1) & VAR_0)
   FUNC_1(1000);
  else
   break;
 }

 if (VAR_3 == 100) {
  FUNC_2(VAR_2->ste_dev, "eeprom failed to come ready\n");
  return (1);
 }

 return (0);
}

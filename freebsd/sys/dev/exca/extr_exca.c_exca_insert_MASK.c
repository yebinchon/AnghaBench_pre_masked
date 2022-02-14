
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exca_softc {int dev; int pccarddev; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

void
FUNC_3(struct exca_softc *VAR_0)
{
 if (FUNC_1(VAR_0->pccarddev)) {
  if (FUNC_0(VAR_0->pccarddev) != 0)
   FUNC_2(VAR_0->dev,
       "PC Card card activation failed\n");
 } else {
  FUNC_2(VAR_0->dev,
      "PC Card inserted, but no pccard bus.\n");
 }
}

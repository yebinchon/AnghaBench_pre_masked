
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spibus_softc {int dev; } ;
typedef int device_t ;


 struct spibus_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct spibus_softc *VAR_1 = FUNC_0(VAR_0);

 VAR_1->dev = VAR_0;
 FUNC_1(VAR_0);
 return (FUNC_2(VAR_0));
}

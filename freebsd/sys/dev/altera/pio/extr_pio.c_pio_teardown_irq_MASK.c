
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pio_softc {int ih; int * res; int dev; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ) ;
 struct pio_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0)
{
 struct pio_softc *VAR_1;

 VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->dev, VAR_1->res[1], VAR_1->ih);

 return (0);
}

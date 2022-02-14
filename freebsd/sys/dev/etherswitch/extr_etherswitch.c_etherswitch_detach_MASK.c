
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etherswitch_softc {scalar_t__ sc_devnode; } ;
typedef int device_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0)
{
 struct etherswitch_softc *VAR_1 = (struct etherswitch_softc *)FUNC_1(VAR_0);

 if (VAR_1->sc_devnode)
  FUNC_0(VAR_1->sc_devnode);

 return (0);
}

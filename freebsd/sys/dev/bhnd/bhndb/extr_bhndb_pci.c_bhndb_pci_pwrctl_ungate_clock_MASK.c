
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_pci_softc {int dev; } ;
typedef int device_t ;
typedef scalar_t__ bhnd_clock ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct bhndb_pci_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, device_t VAR_4,
 bhnd_clock VAR_5)
{
 struct bhndb_pci_softc *VAR_6 = FUNC_2(VAR_3);


 if (FUNC_1(VAR_6->dev))
  return (VAR_1);


 if (VAR_5 != VAR_0)
  return (VAR_2);

 return (FUNC_0(VAR_6->dev));
}

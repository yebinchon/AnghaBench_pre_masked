
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhndb_pci_softc {int parent; int dev; } ;
typedef int device_t ;
typedef scalar_t__ bhnd_clock ;
typedef int bhnd_clksrc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 struct bhndb_pci_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static bhnd_clksrc
FUNC_3(device_t VAR_6, device_t VAR_7,
 bhnd_clock VAR_8)
{
 struct bhndb_pci_softc *VAR_9;
 uint32_t VAR_10;

 VAR_9 = FUNC_1(VAR_6);


 if (FUNC_0(VAR_9->dev))
  return (VAR_3);


 if (VAR_8 != VAR_5)
  return (VAR_3);

 VAR_10 = FUNC_2(VAR_9->parent, VAR_0, 4);
 if (VAR_10 & VAR_1)
  return (VAR_2);
 else
  return (VAR_4);
}

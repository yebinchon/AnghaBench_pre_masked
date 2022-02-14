
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_pci_softc {int quirks; } ;
struct bhnd_core_info {int unit; } ;
typedef int device_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bhnd_core_info*) ;
 struct bwn_pci_softc* FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(device_t VAR_4, device_t VAR_5,
    struct bhnd_core_info *VAR_6)
{
 struct bwn_pci_softc *VAR_7;

 VAR_7 = FUNC_1(VAR_4);

 switch (FUNC_0(VAR_6)) {
 case 128:
  if (VAR_6->unit > 0 && !(VAR_7->quirks & VAR_3))
   return (1);

  return (0);

 case 133:
 case 132:
 case 131:
  return ((VAR_7->quirks & VAR_0) != 0);

 case 129:
  return ((VAR_7->quirks & VAR_2) != 0);

 case 130:
  return ((VAR_7->quirks & VAR_1) != 0);

 default:
  return (0);
 }
}

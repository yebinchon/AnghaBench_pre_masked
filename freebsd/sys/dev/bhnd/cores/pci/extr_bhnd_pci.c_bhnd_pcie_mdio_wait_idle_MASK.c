
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhnd_pci_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bhnd_pci_softc*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2(struct bhnd_pci_softc *VAR_5)
{
 uint32_t VAR_6;


 for (int VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6 = FUNC_0(VAR_5, VAR_1);
  if ((VAR_6 & VAR_0))
   return (0);

  FUNC_1(VAR_3);
 }

 return (VAR_4);
}

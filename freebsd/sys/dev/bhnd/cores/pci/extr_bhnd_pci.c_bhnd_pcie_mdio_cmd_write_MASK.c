
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
 int VAR_4 ;
 int FUNC_0 (struct bhnd_pci_softc*,int ) ;
 int FUNC_1 (struct bhnd_pci_softc*,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (struct bhnd_pci_softc*) ;

__attribute__((used)) static int
FUNC_4(struct bhnd_pci_softc *VAR_6, uint32_t VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_6, VAR_5);

 VAR_7 |= VAR_1|VAR_2|VAR_0;

 FUNC_1(VAR_6, VAR_4, VAR_7);
 FUNC_2(VAR_3);

 if ((VAR_8 = FUNC_3(VAR_6)))
  return (VAR_8);

 return (0);
}

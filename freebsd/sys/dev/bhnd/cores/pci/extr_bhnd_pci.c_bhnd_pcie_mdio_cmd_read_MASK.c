
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct bhnd_pci_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bhnd_pci_softc*,int ) ;
 int FUNC_1 (struct bhnd_pci_softc*,int ) ;
 int FUNC_2 (struct bhnd_pci_softc*,int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (struct bhnd_pci_softc*) ;

__attribute__((used)) static int
FUNC_5(struct bhnd_pci_softc *VAR_7, uint32_t VAR_8,
    uint16_t *VAR_9)
{
 int VAR_10;

 FUNC_0(VAR_7, VAR_6);

 VAR_8 |= VAR_2|VAR_3|VAR_0;
 FUNC_2(VAR_7, VAR_5, VAR_8);
 FUNC_3(VAR_4);

 if ((VAR_10 = FUNC_4(VAR_7)))
  return (VAR_10);

 *VAR_9 = (FUNC_1(VAR_7, VAR_5) &
     VAR_1);
 return (0);
}

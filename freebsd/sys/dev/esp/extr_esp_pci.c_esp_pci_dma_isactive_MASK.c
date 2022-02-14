
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncr53c9x_softc {int dummy; } ;
struct esp_pci_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct esp_pci_softc*,int ) ;

__attribute__((used)) static int
FUNC_1(struct ncr53c9x_softc *VAR_3)
{
 struct esp_pci_softc *VAR_4 = (struct esp_pci_softc *)VAR_3;


 if ((FUNC_0(VAR_4, VAR_2) & VAR_0) != VAR_1)
  return (1);

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pci_softc {int cfg_mode; int cfg_freq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sdhci_pci_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_4)
{
 struct sdhci_pci_softc *VAR_5 = FUNC_0(VAR_4);


 FUNC_1(VAR_4, VAR_3, 0xfc, 1);
 FUNC_1(VAR_4, VAR_2, VAR_5->cfg_mode, 1);
 FUNC_1(VAR_4, VAR_3, 0x00, 1);


 FUNC_1(VAR_4, VAR_1, 0x01, 1);
 FUNC_1(VAR_4, VAR_0, VAR_5->cfg_freq, 1);
 FUNC_1(VAR_4, VAR_1, 0x00, 1);
}

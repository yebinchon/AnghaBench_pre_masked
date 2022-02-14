
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pci_softc {void* cfg_freq; void* cfg_mode; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sdhci_pci_softc* FUNC_0 (int ) ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_5)
{
 struct sdhci_pci_softc *VAR_6 = FUNC_0(VAR_5);





 FUNC_2(VAR_5, VAR_3, 0xfc, 1);
 VAR_6->cfg_mode = FUNC_1(VAR_5, VAR_2, 1);
 FUNC_2(VAR_5, VAR_2, VAR_4, 1);
 FUNC_2(VAR_5, VAR_3, 0x00, 1);





 FUNC_2(VAR_5, VAR_1, 0x01, 1);
 VAR_6->cfg_freq = FUNC_1(VAR_5, VAR_0, 1);
 FUNC_2(VAR_5, VAR_0, 50, 1);
 FUNC_2(VAR_5, VAR_1, 0x00, 1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra_pcib_softc {int afi_mem_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_6)
{
 struct tegra_pcib_softc *VAR_7 = VAR_6;
 uint32_t VAR_8, VAR_9;

 VAR_8 = FUNC_0(VAR_7->afi_mem_res, VAR_0) & VAR_2;
 VAR_9 = FUNC_0(VAR_7->afi_mem_res, VAR_3);
 FUNC_1(VAR_7->afi_mem_res, VAR_0, 0);
 if (VAR_8 == VAR_1)
  return(VAR_5);

 FUNC_2("tegra_pci_intr: code %x sig %x\n", VAR_8, VAR_9);
 return (VAR_4);
}

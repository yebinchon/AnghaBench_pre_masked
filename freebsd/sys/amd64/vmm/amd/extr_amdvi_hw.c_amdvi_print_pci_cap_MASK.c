
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdvi_softc {int cap_off; int pci_cap; int dev; } ;
typedef int device_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct amdvi_softc*,int) ;
 struct amdvi_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int,int,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
 struct amdvi_softc *VAR_1;
 uint32_t VAR_2, VAR_3;


 VAR_1 = FUNC_2(VAR_0);
 VAR_2 = VAR_1->cap_off;





 VAR_3 = FUNC_1(VAR_1, VAR_2);


 FUNC_0((((VAR_3 >> 16) & 0x7) == 0x3),
     ("Not a IOMMU capability 0x%x@0x%x", VAR_3, VAR_2));

 VAR_1->pci_cap = VAR_3 >> 24;
 FUNC_3(VAR_1->dev, "PCI cap 0x%x@0x%x feature:%b\n",
     VAR_3, VAR_2, VAR_1->pci_cap,
     "\20\1IOTLB\2HT\3NPCache\4EFR\5CapExt");

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_pci_device {scalar_t__ device; scalar_t__ vendor; } ;
struct bwn_pci_devcfg {struct bwn_pci_device* devices; } ;
typedef int device_t ;


 int VAR_0 ;
 struct bwn_pci_devcfg* VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, const struct bwn_pci_devcfg **VAR_3,
    const struct bwn_pci_device **VAR_4)
{
 const struct bwn_pci_devcfg *VAR_5;
 const struct bwn_pci_device *VAR_6;

 for (VAR_5 = VAR_1; VAR_5->devices != ((void*)0); VAR_5++) {
  for (VAR_6 = VAR_5->devices; VAR_6->device != 0; VAR_6++) {
   if (FUNC_1(VAR_2) == VAR_6->vendor &&
       FUNC_0(VAR_2) == VAR_6->device)
   {
    if (VAR_3 != ((void*)0))
     *VAR_3 = VAR_5;

    if (VAR_4 != ((void*)0))
     *VAR_4 = VAR_6;

    return (0);
   }
  }
 }

 return (VAR_0);
}

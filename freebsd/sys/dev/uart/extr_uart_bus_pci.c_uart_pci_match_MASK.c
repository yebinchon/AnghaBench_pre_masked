
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct pci_id {int vendor; scalar_t__ device; int subven; scalar_t__ subdev; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) const static struct pci_id *
FUNC_4(device_t VAR_0, const struct pci_id *VAR_1)
{
 uint16_t VAR_2, VAR_3, VAR_4, VAR_5;

 VAR_5 = FUNC_3(VAR_0);
 VAR_2 = FUNC_0(VAR_0);
 while (VAR_1->vendor != 0xffff &&
     (VAR_1->vendor != VAR_5 || VAR_1->device != VAR_2))
  VAR_1++;
 if (VAR_1->vendor == 0xffff)
  return (((void*)0));
 if (VAR_1->subven == 0xffff)
  return (VAR_1);
 VAR_4 = FUNC_2(VAR_0);
 VAR_3 = FUNC_1(VAR_0);
 while (VAR_1->vendor == VAR_5 && VAR_1->device == VAR_2 &&
     (VAR_1->subven != VAR_4 || VAR_1->subdev != VAR_3))
  VAR_1++;
 return ((VAR_1->vendor == VAR_5 && VAR_1->device == VAR_2) ? VAR_1 : ((void*)0));
}

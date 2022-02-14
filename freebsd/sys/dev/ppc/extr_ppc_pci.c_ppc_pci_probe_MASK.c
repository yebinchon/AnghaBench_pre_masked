
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pci_id {int type; int rid; int desc; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct pci_id* VAR_1 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 struct pci_id *VAR_3;
 uint32_t VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 VAR_3 = VAR_1;
 while (VAR_3->type != 0xffff && VAR_3->type != VAR_4)
  VAR_3++;
 if (VAR_3->type == 0xffff)
  return (VAR_0);
 FUNC_0(VAR_2, VAR_3->desc);
 return (FUNC_2(VAR_2, VAR_3->rid));
}

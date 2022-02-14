
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m3_card_type {scalar_t__ pci_id; int name; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 struct m3_card_type* VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4)
{
 struct m3_card_type *VAR_5;

 FUNC_0(VAR_1, ("m3_pci_probe(0x%x)\n", FUNC_2(VAR_4)));

 for (VAR_5 = VAR_3 ; VAR_5->pci_id ; VAR_5++) {
  if (FUNC_2(VAR_4) == VAR_5->pci_id) {
   FUNC_1(VAR_4, VAR_5->name);
   return VAR_0;
  }
 }
 return VAR_2;
}

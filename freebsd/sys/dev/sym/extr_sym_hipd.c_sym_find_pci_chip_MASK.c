
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
typedef scalar_t__ u_char ;
struct sym_pci_chip {scalar_t__ device_id; scalar_t__ revision_id; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sym_pci_chip*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct sym_pci_chip* VAR_1 ;

__attribute__((used)) static const struct sym_pci_chip *
FUNC_4(device_t VAR_2)
{
 const struct sym_pci_chip *VAR_3;
 int VAR_4;
 u_short VAR_5;
 u_char VAR_6;

 if (FUNC_3(VAR_2) != VAR_0)
  return ((void*)0);

 VAR_5 = FUNC_1(VAR_2);
 VAR_6 = FUNC_2(VAR_2);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  VAR_3 = &VAR_1[VAR_4];
  if (VAR_5 != VAR_3->device_id)
   continue;
  if (VAR_6 > VAR_3->revision_id)
   continue;
  return VAR_3;
 }

 return ((void*)0);
}

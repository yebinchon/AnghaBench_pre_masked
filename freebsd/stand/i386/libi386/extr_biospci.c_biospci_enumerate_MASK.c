
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pci_subclass {int ps_subclass; struct pci_progif* ps_progif; } ;
struct pci_progif {scalar_t__ pi_code; } ;
struct pci_class {int pc_class; struct pci_subclass* pc_subclass; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct pci_class*,struct pci_subclass*,struct pci_progif*) ;
 int FUNC_1 (scalar_t__,int,int *) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 struct pci_class* VAR_1 ;

__attribute__((used)) static void
FUNC_3(void)
{
    int VAR_2, VAR_3;
    uint32_t VAR_4, VAR_5;
    struct pci_class *VAR_6;
    struct pci_subclass *VAR_7;
    struct pci_progif *VAR_8;


    for (VAR_6 = VAR_1; VAR_6->pc_class >= 0; VAR_6++) {

 for (VAR_7 = VAR_6->pc_subclass; VAR_7->ps_subclass >= 0; VAR_7++) {

     for (VAR_8 = VAR_7->ps_progif; VAR_8->pi_code >= 0; VAR_8++) {


  for (VAR_2 = 0; ; VAR_2++) {

      VAR_3 = FUNC_1((VAR_6->pc_class << 16)
   + (VAR_7->ps_subclass << 8) + VAR_8->pi_code,
   VAR_2, &VAR_4);
      if (VAR_3 != 0)
   break;


      VAR_3 = FUNC_2(VAR_4, 0, VAR_0, &VAR_5);
      if (VAR_3 != 0)
   break;


      FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8);
  }
     }
 }
    }
}

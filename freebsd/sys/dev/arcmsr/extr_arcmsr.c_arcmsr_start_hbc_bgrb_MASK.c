
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AdapterControlBlock {int pci_unit; int acb_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct AdapterControlBlock*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(struct AdapterControlBlock *VAR_6)
{
 VAR_6->acb_flags |= VAR_0;
 FUNC_0(VAR_3, 0, VAR_5, VAR_2);
 FUNC_0(VAR_3, 0, VAR_4, VAR_1);
 if(!FUNC_1(VAR_6)) {
  FUNC_2("arcmsr%d: wait 'start adapter background rebulid' timeout \n", VAR_6->pci_unit);
 }
}

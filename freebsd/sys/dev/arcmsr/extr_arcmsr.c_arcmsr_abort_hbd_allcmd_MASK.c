
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AdapterControlBlock {int pci_unit; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct AdapterControlBlock*) ;
 int VAR_2 ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(struct AdapterControlBlock *VAR_3)
{
 FUNC_0(VAR_1, 0, VAR_2, VAR_0);
 if(!FUNC_1(VAR_3)) {
  FUNC_2("arcmsr%d: wait 'abort all outstanding command' timeout \n", VAR_3->pci_unit);
 }
}

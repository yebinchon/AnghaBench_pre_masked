
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AdapterControlBlock {int pci_unit; int out_doorbell; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct AdapterControlBlock*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(struct AdapterControlBlock *VAR_5)
{
 FUNC_0(VAR_2, 0, VAR_3, VAR_1);
 VAR_5->out_doorbell ^= VAR_0;
 FUNC_0(VAR_2, 0, VAR_4, VAR_5->out_doorbell);
 if(!FUNC_1(VAR_5)) {
  FUNC_2("arcmsr%d: wait 'abort all outstanding command' timeout \n", VAR_5->pci_unit);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AdapterControlBlock {int adapter_type; int pci_unit; } ;







 int FUNC_0 (struct AdapterControlBlock*) ;
 int FUNC_1 (struct AdapterControlBlock*) ;
 int FUNC_2 (struct AdapterControlBlock*) ;
 int FUNC_3 (struct AdapterControlBlock*) ;
 int FUNC_4 (struct AdapterControlBlock*) ;
 int FUNC_5 (char*,int,int) ;

__attribute__((used)) static void FUNC_6(struct AdapterControlBlock *VAR_0)
{
 switch (VAR_0->adapter_type) {
 case 132:
  FUNC_0(VAR_0);
  break;
 case 131:
  FUNC_1(VAR_0);
  break;
 case 130:
  FUNC_2(VAR_0);
  break;
 case 129:
  FUNC_3(VAR_0);
  break;
 case 128:
  FUNC_4(VAR_0);
  break;
 default:
  FUNC_5("arcmsr%d: interrupt service,"
  " unknown adapter type =%d\n", VAR_0->pci_unit, VAR_0->adapter_type);
  break;
 }
}

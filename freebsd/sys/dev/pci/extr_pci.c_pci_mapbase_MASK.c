
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int pci_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static pci_addr_t
FUNC_1(uint64_t VAR_2)
{

 if (FUNC_0(VAR_2))
  return (VAR_2 & VAR_1);
 else
  return (VAR_2 & VAR_0);
}

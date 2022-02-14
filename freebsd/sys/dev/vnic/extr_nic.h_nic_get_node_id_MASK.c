
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int pci_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct resource*) ;

__attribute__((used)) static __inline int
FUNC_1(struct resource *VAR_2)
{
 pci_addr_t VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 return ((VAR_3 >> VAR_1) & VAR_0);
}

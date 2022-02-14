
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_pci_range {int dummy; } ;
typedef int phandle_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct mv_pci_range*) ;
 int FUNC_2 (int ,struct mv_pci_range*,struct mv_pci_range*) ;

__attribute__((used)) static int
FUNC_3(phandle_t VAR_0, struct mv_pci_range *VAR_1,
    struct mv_pci_range *VAR_2)
{
 int VAR_3;

 FUNC_0("Processing PCI node: %x\n", VAR_0);
 if ((VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2)) != 0) {
  FUNC_0("could not decode parent PCI node 'ranges'\n");
  return (VAR_3);
 }

 FUNC_0("Post fixup dump:\n");
 FUNC_1(VAR_1);
 FUNC_1(VAR_2);
 return (0);
}

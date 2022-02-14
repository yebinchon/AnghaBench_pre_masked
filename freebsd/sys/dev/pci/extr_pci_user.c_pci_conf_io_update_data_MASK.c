
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct pci_conf_io32 {int num_matches; int offset; int generation; int status; } ;
struct pci_conf_io {int num_matches; int offset; int generation; int status; } ;
typedef scalar_t__ caddr_t ;







__attribute__((used)) static void
FUNC_0(const struct pci_conf_io *VAR_0, caddr_t VAR_1,
    u_long VAR_2)
{
 struct pci_conf_io *VAR_3;




 switch (VAR_2) {
 case 131:



  VAR_3 = (struct pci_conf_io *)VAR_1;
  VAR_3->status = VAR_0->status;
  VAR_3->generation = VAR_0->generation;
  VAR_3->offset = VAR_0->offset;
  VAR_3->num_matches = VAR_0->num_matches;
  return;
 default:

  return;
 }
}

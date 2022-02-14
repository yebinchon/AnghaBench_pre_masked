
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct pci_match_conf_old32 {int dummy; } ;
struct pci_match_conf_old {int dummy; } ;
struct pci_match_conf32 {int dummy; } ;
struct pci_match_conf {int dummy; } ;
struct pci_conf {int dummy; } ;






 int FUNC_0 (struct pci_match_conf32*,int,struct pci_conf*) ;
 int FUNC_1 (struct pci_match_conf*,int,struct pci_conf*) ;
 int FUNC_2 (struct pci_match_conf_old*,int,struct pci_conf*) ;
 int FUNC_3 (struct pci_match_conf_old32*,int,struct pci_conf*) ;

__attribute__((used)) static int
FUNC_4(u_long VAR_0, struct pci_match_conf *VAR_1, int VAR_2,
    struct pci_conf *VAR_3)
{

 switch (VAR_0) {
 case 131:
  return (FUNC_1(
      (struct pci_match_conf *)VAR_1, VAR_2, VAR_3));
 default:

  return (0);
 }
}

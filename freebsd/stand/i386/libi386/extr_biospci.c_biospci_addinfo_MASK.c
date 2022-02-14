
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnpinfo {int pi_desc; } ;
struct pci_subclass {char* ps_name; } ;
struct pci_progif {char* pi_name; } ;
struct pci_class {char* pc_name; } ;


 int FUNC_0 (struct pnpinfo*,char*) ;
 int FUNC_1 (struct pnpinfo*) ;
 struct pnpinfo* FUNC_2 () ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(int VAR_0, struct pci_class *VAR_1, struct pci_subclass *VAR_2, struct pci_progif *VAR_3)
{
    struct pnpinfo *VAR_4;
    char VAR_5[80];



    VAR_5[0] = 0;
    if (VAR_3->pi_name != ((void*)0)) {
 FUNC_4(VAR_5, VAR_3->pi_name);
 FUNC_4(VAR_5, " ");
    }
    if (VAR_2->ps_name != ((void*)0)) {
 FUNC_4(VAR_5, VAR_2->ps_name);
 FUNC_4(VAR_5, " ");
    }
    if (VAR_1->pc_name != ((void*)0))
 FUNC_4(VAR_5, VAR_1->pc_name);

    VAR_4 = FUNC_2();
    VAR_4->pi_desc = FUNC_5(VAR_5);
    FUNC_3(VAR_5,"0x%08x", VAR_0);
    FUNC_0(VAR_4, VAR_5);
    FUNC_1(VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnpinfo {struct pnpinfo* pi_argv; struct pnpinfo* pi_module; struct pnpinfo* pi_desc; struct pnpinfo* id_ident; int pi_ident; } ;
struct pnpident {struct pnpident* pi_argv; struct pnpident* pi_module; struct pnpident* pi_desc; struct pnpident* id_ident; int pi_ident; } ;


 int FUNC_0 (int *) ;
 struct pnpinfo* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct pnpinfo*) ;
 int VAR_0 ;

void
FUNC_4(struct pnpinfo *VAR_1)
{
    struct pnpident *VAR_2;

    while (!FUNC_0(&VAR_1->pi_ident)) {
 VAR_2 = FUNC_1(&VAR_1->pi_ident);
 FUNC_2(&VAR_1->pi_ident, VAR_0);
 FUNC_3(VAR_2->id_ident);
 FUNC_3(VAR_2);
    }
    if (VAR_1->pi_desc)
 FUNC_3(VAR_1->pi_desc);
    if (VAR_1->pi_module)
 FUNC_3(VAR_1->pi_module);
    if (VAR_1->pi_argv)
 FUNC_3(VAR_1->pi_argv);
    FUNC_3(VAR_1);
}

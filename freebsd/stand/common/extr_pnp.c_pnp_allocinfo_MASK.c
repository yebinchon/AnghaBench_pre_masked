
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnpinfo {int pi_ident; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pnpinfo*,int) ;
 struct pnpinfo* FUNC_2 (int) ;

struct pnpinfo *
FUNC_3(void)
{
    struct pnpinfo *VAR_0;

    VAR_0 = FUNC_2(sizeof(struct pnpinfo));
    FUNC_1(VAR_0, sizeof(struct pnpinfo));
    FUNC_0(&VAR_0->pi_ident);
    return(VAR_0);
}

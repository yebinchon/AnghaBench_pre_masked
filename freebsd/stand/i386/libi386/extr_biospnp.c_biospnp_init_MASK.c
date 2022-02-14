
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_isaConfiguration {int ic_revision; int ic_rdport; int ic_nCSN; } ;
struct pnp_ICstructure {int dummy; } ;




 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 struct pnp_ICstructure* VAR_1 ;
 struct pnp_isaConfiguration VAR_2 ;
 struct pnp_isaConfiguration VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct pnp_isaConfiguration*) ;

__attribute__((used)) static int
FUNC_6(void)
{
    struct pnp_isaConfiguration VAR_4;
    char *VAR_5;
    int VAR_6;


    VAR_1 = ((void*)0);
    for (VAR_5 = FUNC_0(0xf0000); VAR_5 < FUNC_0(0xfffff); VAR_5 += 16)
 if (!FUNC_1(VAR_5, "$PnP", 4)) {
     VAR_1 = (struct pnp_ICstructure *)VAR_5;
     break;
 }


    if (VAR_1 == ((void*)0))
 return(1);




    VAR_6 = FUNC_2(FUNC_5(&VAR_3), FUNC_5(&VAR_2));
    if (VAR_6 != 128) {
 return(1);
    }




    VAR_6 = FUNC_3(FUNC_5(&VAR_4));
    switch (VAR_6) {
    case 128:

 if ((VAR_4.ic_revision == 1) && (VAR_4.ic_nCSN > 0))
     VAR_0 = VAR_4.ic_rdport;
 break;
    case 129:

 FUNC_4("PnP BIOS claims no ISA bus\n");
 VAR_0 = -1;
 break;
    }
    return(0);
}

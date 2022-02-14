
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct pim {int pim_typever; int pim_rsv; } ;
struct TYPE_5__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int const*,int ,int const*) ;
 int VAR_0 ;
 int FUNC_5 (int ,char*,int ) ;

void
FUNC_6(netdissect_options *VAR_1,
          register const u_char *VAR_2, register u_int VAR_3, const u_char *VAR_4)
{
 register const struct pim *VAR_5 = (const struct pim *)VAR_2;





 FUNC_1(VAR_5->pim_typever);
 switch (FUNC_3(VAR_5->pim_typever)) {
 case 2:
  if (!VAR_1->ndo_vflag) {
   FUNC_0((VAR_1, "PIMv%u, %s, length %u",
             FUNC_3(VAR_5->pim_typever),
             FUNC_5(VAR_0,"Unknown Type",FUNC_2(VAR_5->pim_typever)),
             VAR_3));
   return;
  } else {
   FUNC_0((VAR_1, "PIMv%u, length %u\n\t%s",
             FUNC_3(VAR_5->pim_typever),
             VAR_3,
             FUNC_5(VAR_0,"Unknown Type",FUNC_2(VAR_5->pim_typever))));
   FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);
  }
  break;
 default:
  FUNC_0((VAR_1, "PIMv%u, length %u",
            FUNC_3(VAR_5->pim_typever),
            VAR_3));
  break;
 }
 return;

trunc:
 FUNC_0((VAR_1, "[|pim]"));
 return;
}

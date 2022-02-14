
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct krb {int pvno; } ;
struct TYPE_5__ {int const* ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int const*) ;
 int VAR_0 ;

void
FUNC_2(netdissect_options *VAR_1,
          const u_char *VAR_2)
{
 register const struct krb *VAR_3;

 VAR_3 = (const struct krb *)VAR_2;

 if (VAR_2 >= VAR_1->ndo_snapend) {
  FUNC_0((VAR_1, "%s", VAR_0));
  return;
 }

 switch (VAR_3->pvno) {

 case 1:
 case 2:
 case 3:
  FUNC_0((VAR_1, " v%d", VAR_3->pvno));
  break;

 case 4:
  FUNC_0((VAR_1, " v%d", VAR_3->pvno));
  FUNC_1(VAR_1, (const u_char *)VAR_3);
  break;

 case 106:
 case 107:
  FUNC_0((VAR_1, " v5"));

  break;
 }
 return;
}

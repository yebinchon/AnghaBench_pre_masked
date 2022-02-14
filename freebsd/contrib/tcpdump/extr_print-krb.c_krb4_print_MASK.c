
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
struct krb {int type; } ;
struct TYPE_5__ {int* ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;






 scalar_t__ FUNC_0 (struct krb const*) ;
 int FUNC_1 (struct krb const*,int const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int const,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_5 (TYPE_1__*,int const*) ;
 int FUNC_6 (int ,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_7(netdissect_options *VAR_4,
           const u_char *VAR_5)
{
 register const struct krb *VAR_6;
 u_char VAR_7;
 u_short VAR_8;






 VAR_6 = (const struct krb *)VAR_5;

 if ((&VAR_6->type) >= VAR_4->ndo_snapend) {
  FUNC_2((VAR_4, "%s", VAR_2));
  return;
 }

 VAR_7 = VAR_6->type & (0xFF << 1);

 FUNC_2((VAR_4, " %s %s: ",
     (((VAR_6)->type & 0x01) != 0) ? "le" : "be", FUNC_6(VAR_3, ((void*)0), VAR_7)));

 switch (VAR_7) {

 case 128:
  if ((VAR_5 = FUNC_5(VAR_4, VAR_5)) == ((void*)0))
   return;
  VAR_5 += 4;
  FUNC_3(*VAR_5);
  FUNC_2((VAR_4, " %dmin ", *VAR_5++ * 5));
  if ((VAR_5 = FUNC_0(VAR_4, VAR_5, VAR_4->ndo_snapend)) == ((void*)0)) goto trunc;
  FUNC_2((VAR_4, "."));
  if ((VAR_5 = FUNC_0(VAR_4, VAR_5, VAR_4->ndo_snapend)) == ((void*)0)) goto trunc;
  break;

 case 131:
  VAR_5 += 2;
  FUNC_3(*VAR_5);
  FUNC_2((VAR_4, "v%d ", *VAR_5++));
  if ((VAR_5 = FUNC_0(VAR_4, VAR_5, VAR_4->ndo_snapend)) == ((void*)0)) goto trunc;
  FUNC_3(*VAR_5);
  FUNC_2((VAR_4, " (%d)", *VAR_5++));
  FUNC_3(*VAR_5);
  FUNC_2((VAR_4, " (%d)", *VAR_5));
  break;

 case 129:
  if ((VAR_5 = FUNC_5(VAR_4, VAR_5)) == ((void*)0))
   return;
  VAR_5 += 10;
  FUNC_4(*VAR_5, sizeof(short));
  VAR_8 = ((((VAR_6)->type & 0x01) != 0) ? FUNC_0(VAR_5) : FUNC_0(VAR_5));
  FUNC_2((VAR_4, " (%d)", VAR_8));
  break;

 case 130:
  if ((VAR_5 = FUNC_5(VAR_4, VAR_5)) == ((void*)0))
   return;
  VAR_5 += 4;
  FUNC_4(*VAR_5, sizeof(short));
  FUNC_2((VAR_4, " %s ", FUNC_6(VAR_1, ((void*)0), ((((VAR_6)->type & 0x01) != 0) ? FUNC_0(VAR_5) : FUNC_0(VAR_5)))));
  VAR_5 += 4;
  if ((VAR_5 = FUNC_0(VAR_4, VAR_5, VAR_4->ndo_snapend)) == ((void*)0)) goto trunc;
  break;

 default:
  FUNC_2((VAR_4, "(unknown)"));
  break;
 }

 return;
trunc:
 FUNC_2((VAR_4, "%s", VAR_2));
}

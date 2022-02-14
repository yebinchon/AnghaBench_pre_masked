
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef scalar_t__ u_char ;
struct TYPE_6__ {int ndo_vflag; scalar_t__ ndo_Xflag; } ;
typedef TYPE_1__ netdissect_options ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__ const) ;
 int FUNC_2 (TYPE_1__*,char*,scalar_t__ const*,int,int) ;
 int FUNC_3 (TYPE_1__*,scalar_t__ const*,scalar_t__,int) ;
 int VAR_1 ;

void
FUNC_4(netdissect_options *VAR_2, const u_char *VAR_3, u_int VAR_4)
{
 int VAR_5 = 1;
 const u_char *VAR_6;
 int VAR_7;

 VAR_6 = VAR_3;

 FUNC_1(*VAR_3);
 while (VAR_4 > 0 && *VAR_3 == VAR_0) {




  VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_4, 0);
  if (VAR_7 < 0)
   break;




  if (VAR_2->ndo_Xflag && 2 < VAR_2->ndo_vflag) {
   if (VAR_5)
    FUNC_0((VAR_2, "\nTelnet:"));
   FUNC_2(VAR_2, "\n", VAR_3, VAR_7, VAR_3 - VAR_6);
   if (VAR_7 > 8)
    FUNC_0((VAR_2, "\n\t\t\t\t"));
   else
    FUNC_0((VAR_2, "%*s\t", (8 - VAR_7) * 3, ""));
  } else
   FUNC_0((VAR_2, "%s", (VAR_5) ? " [telnet " : ", "));

  (void)FUNC_3(VAR_2, VAR_3, VAR_4, 1);
  VAR_5 = 0;

  VAR_3 += VAR_7;
  VAR_4 -= VAR_7;
  FUNC_1(*VAR_3);
 }
 if (!VAR_5) {
  if (VAR_2->ndo_Xflag && 2 < VAR_2->ndo_vflag)
   FUNC_0((VAR_2, "\n"));
  else
   FUNC_0((VAR_2, "]"));
 }
 return;
trunc:
 FUNC_0((VAR_2, "%s", VAR_1));
}

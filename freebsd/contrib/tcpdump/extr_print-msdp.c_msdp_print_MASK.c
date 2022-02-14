
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct TYPE_6__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 unsigned int FUNC_0 (int const*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const,int) ;
 int FUNC_4 (TYPE_1__*,int const*,int ) ;
 int FUNC_5 (TYPE_1__*,int const*) ;

void
FUNC_6(netdissect_options *VAR_1, const u_char *VAR_2, u_int VAR_3)
{
 unsigned int VAR_4, VAR_5;

 FUNC_3(*VAR_2, 3);

 VAR_4 = *VAR_2;
 VAR_5 = FUNC_0(VAR_2 + 1);
 if (VAR_5 > 1500 || VAR_5 < 3 || VAR_4 == 0 || VAR_4 > VAR_0)
  goto trunc;
 FUNC_1((VAR_1, " msdp:"));
 while (VAR_3 > 0) {
  FUNC_3(*VAR_2, 3);
  VAR_4 = *VAR_2;
  VAR_5 = FUNC_0(VAR_2 + 1);
  if (VAR_5 > 1400 || VAR_1->ndo_vflag)
   FUNC_1((VAR_1, " [len %u]", VAR_5));
  if (VAR_5 < 3)
   goto trunc;
  VAR_2 += 3;
  VAR_3 -= 3;
  switch (VAR_4) {
  case 1:
  case 3:
   if (VAR_4 == 1)
    FUNC_1((VAR_1, " SA"));
   else
    FUNC_1((VAR_1, " SA-Response"));
   FUNC_2(*VAR_2);
   FUNC_1((VAR_1, " %u entries", *VAR_2));
   if ((u_int)((*VAR_2 * 12) + 8) < VAR_5) {
    FUNC_1((VAR_1, " [w/data]"));
    if (VAR_1->ndo_vflag > 1) {
     FUNC_1((VAR_1, " "));
     FUNC_4(VAR_1, VAR_2 + *VAR_2 * 12 + 8 - 3,
              VAR_5 - (*VAR_2 * 12 + 8));
    }
   }
   break;
  case 2:
   FUNC_1((VAR_1, " SA-Request"));
   FUNC_3(*VAR_2, 5);
   FUNC_1((VAR_1, " for %s", FUNC_5(VAR_1, VAR_2 + 1)));
   break;
  case 4:
   FUNC_1((VAR_1, " Keepalive"));
   if (VAR_5 != 3)
    FUNC_1((VAR_1, "[len=%d] ", VAR_5));
   break;
  case 5:
   FUNC_1((VAR_1, " Notification"));
   break;
  default:
   FUNC_1((VAR_1, " [type=%d len=%d]", VAR_4, VAR_5));
   break;
  }
  VAR_2 += (VAR_5 - 3);
  VAR_3 -= (VAR_5 - 3);
 }
 return;
trunc:
 FUNC_1((VAR_1, " [|msdp]"));
}

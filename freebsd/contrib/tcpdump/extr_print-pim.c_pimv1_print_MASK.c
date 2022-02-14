
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct in_addr {int dummy; } ;
struct TYPE_7__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int const,int) ;
 int FUNC_5 (int const) ;
 int FUNC_6 (TYPE_1__*,int const*) ;
 int FUNC_7 (TYPE_1__*,int const*,int ) ;
 int VAR_0 ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (TYPE_1__*,int ) ;

void
FUNC_10(netdissect_options *VAR_1,
            register const u_char *VAR_2, register u_int VAR_3)
{
 register u_char VAR_4;

 FUNC_3(VAR_2[1]);
 VAR_4 = VAR_2[1];

 FUNC_2((VAR_1, " %s", FUNC_8(VAR_0, "[type %u]", VAR_4)));
 switch (VAR_4) {
 case 131:
  if (FUNC_5(VAR_2[8])) {
   switch (VAR_2[8] >> 4) {
   case 0:
    FUNC_2((VAR_1, " Dense-mode"));
    break;
   case 1:
    FUNC_2((VAR_1, " Sparse-mode"));
    break;
   case 2:
    FUNC_2((VAR_1, " Sparse-Dense-mode"));
    break;
   default:
    FUNC_2((VAR_1, " mode-%d", VAR_2[8] >> 4));
    break;
   }
  }
  if (VAR_1->ndo_vflag) {
   FUNC_4(VAR_2[10],2);
   FUNC_2((VAR_1, " (Hold-time "));
   FUNC_9(VAR_1, FUNC_0(&VAR_2[10]));
   FUNC_2((VAR_1, ")"));
  }
  break;

 case 130:
  FUNC_4(VAR_2[8], 20);
  FUNC_2((VAR_1, " for %s > %s", FUNC_6(VAR_1, &VAR_2[20]),
      FUNC_6(VAR_1, &VAR_2[24])));
  break;
 case 129:
  FUNC_4(VAR_2[12], sizeof(struct in_addr));
  FUNC_2((VAR_1, " for %s > %s", FUNC_6(VAR_1, &VAR_2[8]),
      FUNC_6(VAR_1, &VAR_2[12])));
  break;
 case 128:
  if (VAR_1->ndo_vflag) {
   FUNC_4(VAR_2[22], 2);
   FUNC_2((VAR_1, " group %s", FUNC_6(VAR_1, &VAR_2[8])));
   if (FUNC_1(&VAR_2[12]) != 0xffffffff)
    FUNC_2((VAR_1, "/%s", FUNC_6(VAR_1, &VAR_2[12])));
   FUNC_2((VAR_1, " RP %s hold ", FUNC_6(VAR_1, &VAR_2[16])));
   FUNC_9(VAR_1, FUNC_0(&VAR_2[22]));
  }
  break;
 case 135:
  FUNC_4(VAR_2[16], sizeof(struct in_addr));
  FUNC_2((VAR_1, " for %s > %s", FUNC_6(VAR_1, &VAR_2[16]),
      FUNC_6(VAR_1, &VAR_2[8])));
  if (FUNC_1(&VAR_2[12]) != 0xffffffff)
   FUNC_2((VAR_1, "/%s", FUNC_6(VAR_1, &VAR_2[12])));
  FUNC_4(VAR_2[24], 4);
  FUNC_2((VAR_1, " %s pref %d metric %d",
      (VAR_2[20] & 0x80) ? "RP-tree" : "SPT",
  FUNC_1(&VAR_2[20]) & 0x7fffffff,
  FUNC_1(&VAR_2[24])));
  break;
 case 132:
 case 134:
 case 133:
  if (VAR_1->ndo_vflag) {
   if (VAR_3 < 8)
    goto trunc;
   FUNC_7(VAR_1, &VAR_2[8], VAR_3 - 8);
  }
  break;
 }
 FUNC_3(VAR_2[4]);
 if ((VAR_2[4] >> 4) != 1)
  FUNC_2((VAR_1, " [v%d]", VAR_2[4] >> 4));
 return;

trunc:
 FUNC_2((VAR_1, "[|pim]"));
 return;
}

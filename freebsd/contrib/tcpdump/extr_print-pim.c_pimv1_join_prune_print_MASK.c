
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct in_addr {int dummy; } ;
struct TYPE_6__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int const,int) ;
 scalar_t__ FUNC_4 (int const,int) ;
 int FUNC_5 (TYPE_1__*,int const*) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_7(netdissect_options *VAR_0,
                       register const u_char *VAR_1, register u_int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 int VAR_6;


 if (FUNC_4(VAR_1[0], 30) && VAR_1[11] == 1 &&
     ((VAR_4 = FUNC_0(&VAR_1[20])) + FUNC_0(&VAR_1[22])) == 1) {
  int VAR_7;

  FUNC_2((VAR_0, " RPF %s ", FUNC_5(VAR_0, VAR_1)));
  VAR_7 = FUNC_0(&VAR_1[6]);
  if (VAR_7 != 180) {
   FUNC_2((VAR_0, "Hold "));
   FUNC_6(VAR_0, VAR_7);
  }
  FUNC_2((VAR_0, "%s (%s/%d, %s", VAR_4 ? "Join" : "Prune",
  FUNC_5(VAR_0, &VAR_1[26]), VAR_1[25] & 0x3f,
  FUNC_5(VAR_0, &VAR_1[12])));
  if (FUNC_1(&VAR_1[16]) != 0xffffffff)
   FUNC_2((VAR_0, "/%s", FUNC_5(VAR_0, &VAR_1[16])));
  FUNC_2((VAR_0, ") %s%s %s",
      (VAR_1[24] & 0x01) ? "Sparse" : "Dense",
      (VAR_1[25] & 0x80) ? " WC" : "",
      (VAR_1[25] & 0x40) ? "RP" : "SPT"));
  return;
 }

 if (VAR_2 < sizeof(struct in_addr))
  goto trunc;
 FUNC_3(VAR_1[0], sizeof(struct in_addr));
 if (VAR_0->ndo_vflag > 1)
  FUNC_2((VAR_0, "\n"));
 FUNC_2((VAR_0, " Upstream Nbr: %s", FUNC_5(VAR_0, VAR_1)));
 VAR_1 += 4;
 VAR_2 -= 4;
 if (VAR_2 < 4)
  goto trunc;
 FUNC_3(VAR_1[2], 2);
 if (VAR_0->ndo_vflag > 1)
  FUNC_2((VAR_0, "\n"));
 FUNC_2((VAR_0, " Hold time: "));
 FUNC_6(VAR_0, FUNC_0(&VAR_1[2]));
 if (VAR_0->ndo_vflag < 2)
  return;
 VAR_1 += 4;
 VAR_2 -= 4;

 if (VAR_2 < 4)
  goto trunc;
 FUNC_3(VAR_1[0], 4);
 VAR_3 = VAR_1[3];
 VAR_1 += 4;
 VAR_2 -= 4;
 while (VAR_3--) {




  if (VAR_2 < 4)
   goto trunc;
  FUNC_3(VAR_1[0], sizeof(struct in_addr));
  FUNC_2((VAR_0, "\n\tGroup: %s", FUNC_5(VAR_0, VAR_1)));
  VAR_1 += 4;
  VAR_2 -= 4;
  if (VAR_2 < 4)
   goto trunc;
  FUNC_3(VAR_1[0], sizeof(struct in_addr));
  if (FUNC_1(&VAR_1[0]) != 0xffffffff)
   FUNC_2((VAR_0, "/%s", FUNC_5(VAR_0, &VAR_1[0])));
  VAR_1 += 4;
  VAR_2 -= 4;
  if (VAR_2 < 4)
   goto trunc;
  FUNC_3(VAR_1[0], 4);
  VAR_4 = FUNC_0(&VAR_1[0]);
  VAR_5 = FUNC_0(&VAR_1[2]);
  FUNC_2((VAR_0, " joined: %d pruned: %d", VAR_4, VAR_5));
  VAR_1 += 4;
  VAR_2 -= 4;
  for (VAR_6 = 0; VAR_6 < (VAR_4 + VAR_5); VAR_6++) {
   const char *VAR_8;

   if (VAR_6 < VAR_4)
    VAR_8 = "Join ";
   else
    VAR_8 = "Prune";
   if (VAR_2 < 6)
    goto trunc;
   FUNC_3(VAR_1[0], 6);
   FUNC_2((VAR_0, "\n\t%s %s%s%s%s/%d", VAR_8,
       (VAR_1[0] & 0x01) ? "Sparse " : "Dense ",
       (VAR_1[1] & 0x80) ? "WC " : "",
       (VAR_1[1] & 0x40) ? "RP " : "SPT ",
       FUNC_5(VAR_0, &VAR_1[2]),
       VAR_1[1] & 0x3f));
   VAR_1 += 6;
   VAR_2 -= 6;
  }
 }
 return;
trunc:
 FUNC_2((VAR_0, "[|pim]"));
 return;
}

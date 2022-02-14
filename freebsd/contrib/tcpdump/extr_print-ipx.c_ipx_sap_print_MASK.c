
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_short ;
typedef int u_int ;
typedef int u_char ;
struct TYPE_6__ {int ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int const,int) ;
 int FUNC_5 (TYPE_1__*,int const*,int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int const*) ;
 int FUNC_8 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_9(netdissect_options *VAR_0, const u_short *VAR_1, u_int VAR_2)
{
    int VAR_3, VAR_4;

    FUNC_3(VAR_1[0]);
    VAR_3 = FUNC_0(VAR_1);
    VAR_1++;
    VAR_2 -= 2;

    switch (VAR_3) {
      case 1:
      case 3:
 if (VAR_3 == 1)
     FUNC_2((VAR_0, "ipx-sap-req"));
 else
     FUNC_2((VAR_0, "ipx-sap-nearest-req"));

 FUNC_3(VAR_1[0]);
 FUNC_2((VAR_0, " %s", FUNC_8(VAR_0, FUNC_6(FUNC_0(&VAR_1[0])))));
 break;

      case 2:
      case 4:
 if (VAR_3 == 2)
     FUNC_2((VAR_0, "ipx-sap-resp"));
 else
     FUNC_2((VAR_0, "ipx-sap-nearest-resp"));

 for (VAR_4 = 0; VAR_4 < 8 && VAR_2 > 0; VAR_4++) {
     FUNC_3(VAR_1[0]);
     FUNC_2((VAR_0, " %s '", FUNC_8(VAR_0, FUNC_6(FUNC_0(&VAR_1[0])))));
     if (FUNC_5(VAR_0, (const u_char *)&VAR_1[1], 48, VAR_0->ndo_snapend)) {
  FUNC_2((VAR_0, "'"));
  goto trunc;
     }
     FUNC_4(VAR_1[25], 10);
     FUNC_2((VAR_0, "' addr %s",
  FUNC_7(FUNC_1(&VAR_1[25]), (const u_char *)&VAR_1[27])));
     VAR_1 += 32;
     VAR_2 -= 64;
 }
 break;
      default:
 FUNC_2((VAR_0, "ipx-sap-?%x", VAR_3));
 break;
    }
    return;
trunc:
    FUNC_2((VAR_0, "[|ipx %d]", VAR_2));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_int ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const) ;

__attribute__((used)) static void
FUNC_4(netdissect_options *VAR_0, const u_short *VAR_1, u_int VAR_2)
{
    int VAR_3, VAR_4;

    FUNC_3(VAR_1[0]);
    VAR_3 = FUNC_0(VAR_1);
    VAR_1++;
    VAR_2 -= 2;

    switch (VAR_3) {
      case 1:
 FUNC_2((VAR_0, "ipx-rip-req"));
 if (VAR_2 > 0) {
     FUNC_3(VAR_1[3]);
     FUNC_2((VAR_0, " %08x/%d.%d", FUNC_1(&VAR_1[0]),
    FUNC_0(&VAR_1[2]), FUNC_0(&VAR_1[3])));
 }
 break;
      case 2:
 FUNC_2((VAR_0, "ipx-rip-resp"));
 for (VAR_4 = 0; VAR_4 < 50 && VAR_2 > 0; VAR_4++) {
     FUNC_3(VAR_1[3]);
     FUNC_2((VAR_0, " %08x/%d.%d", FUNC_1(&VAR_1[0]),
    FUNC_0(&VAR_1[2]), FUNC_0(&VAR_1[3])));

     VAR_1 += 4;
     VAR_2 -= 8;
 }
 break;
      default:
 FUNC_2((VAR_0, "ipx-rip-?%x", VAR_3));
 break;
    }
    return;
trunc:
    FUNC_2((VAR_0, "[|ipx %d]", VAR_2));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_5__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const,int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int const*) ;
 int FUNC_4 (int ,char*,int const) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_2,
                    register const u_char *VAR_3, register u_int VAR_4)
{
    u_int VAR_5, VAR_6, VAR_7;
    register u_int VAR_8, VAR_9;


    if (VAR_4 < 16 || VAR_4 & 0x03) {
 FUNC_1((VAR_2, " [invalid len %d]", VAR_4));
 return;
    }
    FUNC_2(VAR_3[6], 2);
    VAR_7 = FUNC_0(&VAR_3[6]);
    FUNC_1((VAR_2, ", %d group record(s)", VAR_7));
    if (VAR_2->ndo_vflag > 0) {

 VAR_5 = 8;
        for (VAR_8=0; VAR_8<VAR_7; VAR_8++) {
     if (VAR_4 < VAR_5+8) {
  FUNC_1((VAR_2, " [invalid number of groups]"));
  return;
     }
     FUNC_2(VAR_3[VAR_5+4], 4);
            FUNC_1((VAR_2, " [gaddr %s", FUNC_3(VAR_2, &VAR_3[VAR_5+4])));
     FUNC_1((VAR_2, " %s", FUNC_4(VAR_0, " [v3-report-#%d]",
        VAR_3[VAR_5])));
            VAR_6 = FUNC_0(&VAR_3[VAR_5+2]);

     if (VAR_4 < VAR_5+8+(VAR_6<<2)) {
  FUNC_1((VAR_2, " [invalid number of sources %d]", VAR_6));
  return;
     }
            if (VAR_2->ndo_vflag == 1)
                FUNC_1((VAR_2, ", %d source(s)", VAR_6));
            else {

                FUNC_1((VAR_2, " {"));
                for (VAR_9=0; VAR_9<VAR_6; VAR_9++) {
      FUNC_2(VAR_3[VAR_5+8+(VAR_9<<2)], 4);
      FUNC_1((VAR_2, " %s", FUNC_3(VAR_2, &VAR_3[VAR_5+8+(VAR_9<<2)])));
  }
                FUNC_1((VAR_2, " }"));
            }

            VAR_5 += 8 + (VAR_6 << 2);
     FUNC_1((VAR_2, "]"));
        }
    }
    return;
trunc:
    FUNC_1((VAR_2, "%s", VAR_1));
}

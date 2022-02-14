
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct cksum_vec {int const* ptr; int len; } ;
struct TYPE_11__ {scalar_t__ ndo_vflag; scalar_t__ ndo_qflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int const,int) ;
 scalar_t__ FUNC_5 (int const,int) ;
 int FUNC_6 (TYPE_1__*,int const*,int) ;
 scalar_t__ FUNC_7 (struct cksum_vec*,int) ;
 int FUNC_8 (TYPE_1__*,int const*) ;
 int FUNC_9 (TYPE_1__*,int const*,int) ;
 int FUNC_10 (TYPE_1__*,int const*,int) ;
 int FUNC_11 (TYPE_1__*,int const*,int) ;
 int FUNC_12 (TYPE_1__*,int const*,int) ;
 int FUNC_13 (TYPE_1__*,int const*,int) ;
 int VAR_0 ;

void
FUNC_14(netdissect_options *VAR_1,
           register const u_char *VAR_2, register u_int VAR_3)
{
    struct cksum_vec VAR_4[1];

    if (VAR_1->ndo_qflag) {
        FUNC_2((VAR_1, "igmp"));
        return;
    }

    FUNC_3(VAR_2[0]);
    switch (VAR_2[0]) {
    case 0x11:
        FUNC_2((VAR_1, "igmp query"));
 if (VAR_3 >= 12)
     FUNC_10(VAR_1, VAR_2, VAR_3);
 else {
            FUNC_3(VAR_2[1]);
     if (VAR_2[1]) {
  FUNC_2((VAR_1, " v2"));
  if (VAR_2[1] != 100)
      FUNC_2((VAR_1, " [max resp time %d]", VAR_2[1]));
     } else
  FUNC_2((VAR_1, " v1"));
            FUNC_4(VAR_2[4], 4);
     if (FUNC_1(&VAR_2[4]))
                FUNC_2((VAR_1, " [gaddr %s]", FUNC_8(VAR_1, &VAR_2[4])));
            if (VAR_3 != 8)
                FUNC_2((VAR_1, " [len %d]", VAR_3));
 }
        break;
    case 0x12:
        FUNC_4(VAR_2[4], 4);
        FUNC_2((VAR_1, "igmp v1 report %s", FUNC_8(VAR_1, &VAR_2[4])));
        if (VAR_3 != 8)
            FUNC_2((VAR_1, " [len %d]", VAR_3));
        break;
    case 0x16:
        FUNC_4(VAR_2[4], 4);
        FUNC_2((VAR_1, "igmp v2 report %s", FUNC_8(VAR_1, &VAR_2[4])));
        break;
    case 0x22:
        FUNC_2((VAR_1, "igmp v3 report"));
 FUNC_11(VAR_1, VAR_2, VAR_3);
        break;
    case 0x17:
        FUNC_4(VAR_2[4], 4);
        FUNC_2((VAR_1, "igmp leave %s", FUNC_8(VAR_1, &VAR_2[4])));
        break;
    case 0x13:
        FUNC_2((VAR_1, "igmp dvmrp"));
        if (VAR_3 < 8)
            FUNC_2((VAR_1, " [len %d]", VAR_3));
        else
            FUNC_6(VAR_1, VAR_2, VAR_3);
        break;
    case 0x14:
        FUNC_2((VAR_1, "igmp pimv1"));
        FUNC_9(VAR_1, VAR_2, VAR_3);
        break;
    case 0x1e:
        FUNC_12(VAR_1, VAR_2, VAR_3);
        break;
    case 0x1f:
        FUNC_13(VAR_1, VAR_2, VAR_3);
        break;
    default:
        FUNC_2((VAR_1, "igmp-%d", VAR_2[0]));
        break;
    }

    if (VAR_1->ndo_vflag && VAR_3 >= 4 && FUNC_5(VAR_2[0], VAR_3)) {

        VAR_4[0].ptr = VAR_2;
        VAR_4[0].len = VAR_3;
        if (FUNC_7(VAR_4, 1))
            FUNC_2((VAR_1, " bad igmp cksum %x!", FUNC_0(&VAR_2[2])));
    }
    return;
trunc:
    FUNC_2((VAR_1, "%s", VAR_0));
}

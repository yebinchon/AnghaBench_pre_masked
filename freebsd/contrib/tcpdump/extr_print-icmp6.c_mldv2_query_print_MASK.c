
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct in6_addr {int dummy; } ;
struct icmp6_hdr {int const* icmp6_data16; } ;
struct TYPE_5__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const,int) ;
 int FUNC_4 (TYPE_1__*,int const*) ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_0, const u_char *VAR_1, u_int VAR_2)
{
    const struct icmp6_hdr *VAR_3 = (const struct icmp6_hdr *) VAR_1;
    u_int VAR_4;
    int VAR_5, VAR_6;
    u_int VAR_7;
    register u_int VAR_8;


    if (VAR_2 < 28) {
            FUNC_1((VAR_0," [invalid len %d]", VAR_2));
 return;
    }
    FUNC_2(VAR_3->icmp6_data16[0]);
    VAR_4 = FUNC_0(&VAR_3->icmp6_data16[0]);
    if (VAR_4 < 32768) {
 VAR_5 = VAR_4;
    } else {
        VAR_5 = ((VAR_4 & 0x0fff) | 0x1000) << (((VAR_4 & 0x7000) >> 12) + 3);
    }
    if (VAR_0->ndo_vflag) {
            FUNC_1((VAR_0," [max resp delay=%d]", VAR_5));
    }
    FUNC_3(VAR_1[8], sizeof(struct in6_addr));
    FUNC_1((VAR_0," [gaddr %s", FUNC_4(VAR_0, &VAR_1[8])));

    if (VAR_0->ndo_vflag) {
        FUNC_2(VAR_1[25]);
 if (VAR_1[24] & 0x08) {
  FUNC_1((VAR_0," sflag"));
 }
 if (VAR_1[24] & 0x07) {
  FUNC_1((VAR_0," robustness=%d", VAR_1[24] & 0x07));
 }
 if (VAR_1[25] < 128) {
  VAR_6 = VAR_1[25];
 } else {
  VAR_6 = ((VAR_1[25] & 0x0f) | 0x10) << (((VAR_1[25] & 0x70) >> 4) + 3);
 }
 FUNC_1((VAR_0," qqi=%d", VAR_6));
    }

    FUNC_3(VAR_1[26], 2);
    VAR_7 = FUNC_0(&VAR_1[26]);
    if (VAR_7 > 0) {
 if (VAR_2 < 28 + VAR_7 * sizeof(struct in6_addr))
     FUNC_1((VAR_0," [invalid number of sources]"));
 else if (VAR_0->ndo_vflag > 1) {
     FUNC_1((VAR_0," {"));
     for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  FUNC_3(VAR_1[28 + VAR_8 * sizeof(struct in6_addr)],
                        sizeof(struct in6_addr));
  FUNC_1((VAR_0," %s", FUNC_4(VAR_0, &VAR_1[28 + VAR_8 * sizeof(struct in6_addr)])));
     }
     FUNC_1((VAR_0," }"));
 } else
                FUNC_1((VAR_0,", %d source(s)", VAR_7));
    }
    FUNC_1((VAR_0,"]"));
    return;
trunc:
    FUNC_1((VAR_0,"[|icmp6]"));
    return;
}

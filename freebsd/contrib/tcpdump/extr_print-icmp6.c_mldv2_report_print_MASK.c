
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct in6_addr {int dummy; } ;
struct icmp6_hdr {int * icmp6_data16; } ;
struct TYPE_5__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int const,int) ;
 int FUNC_4 (TYPE_1__*,int const*) ;
 int VAR_0 ;
 int FUNC_5 (int ,char*,int const) ;

__attribute__((used)) static void
FUNC_6(netdissect_options *VAR_1, const u_char *VAR_2, u_int VAR_3)
{
    const struct icmp6_hdr *VAR_4 = (const struct icmp6_hdr *) VAR_2;
    u_int VAR_5, VAR_6, VAR_7;
    u_int VAR_8, VAR_9;


    if (VAR_3 < 8) {
            FUNC_1((VAR_1," [invalid len %d]", VAR_3));
            return;
    }

    FUNC_2(VAR_4->icmp6_data16[1]);
    VAR_7 = FUNC_0(&VAR_4->icmp6_data16[1]);
    FUNC_1((VAR_1,", %d group record(s)", VAR_7));
    if (VAR_1->ndo_vflag > 0) {

 VAR_5 = 8;
        for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {

     if (VAR_3 < VAR_5 + 20) {
                    FUNC_1((VAR_1," [invalid number of groups]"));
                    return;
     }
            FUNC_3(VAR_2[VAR_5 + 4], sizeof(struct in6_addr));
            FUNC_1((VAR_1," [gaddr %s", FUNC_4(VAR_1, &VAR_2[VAR_5 + 4])));
     FUNC_1((VAR_1," %s", FUNC_5(VAR_0, " [v2-report-#%d]",
                                         VAR_2[VAR_5])));
            VAR_6 = (VAR_2[VAR_5 + 2] << 8) + VAR_2[VAR_5 + 3];

     if (VAR_3 < VAR_5 + 20 + (VAR_6 * sizeof(struct in6_addr))) {
                    FUNC_1((VAR_1," [invalid number of sources %d]", VAR_6));
                    return;
     }
            if (VAR_1->ndo_vflag == 1)
                    FUNC_1((VAR_1,", %d source(s)", VAR_6));
            else {

                    FUNC_1((VAR_1," {"));
                for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
                    FUNC_3(VAR_2[VAR_5 + 20 + VAR_9 * sizeof(struct in6_addr)],
                            sizeof(struct in6_addr));
      FUNC_1((VAR_1," %s", FUNC_4(VAR_1, &VAR_2[VAR_5 + 20 + VAR_9 * sizeof(struct in6_addr)])));
  }
                FUNC_1((VAR_1," }"));
            }

            VAR_5 += 20 + VAR_6 * sizeof(struct in6_addr);
     FUNC_1((VAR_1,"]"));
        }
    }
    return;
trunc:
    FUNC_1((VAR_1,"[|icmp6]"));
    return;
}

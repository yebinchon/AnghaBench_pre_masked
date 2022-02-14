
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int u_int ;
struct in6_addr {int dummy; } ;
typedef int netdissect_options ;
typedef int ident_buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int const,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int const*,int,int,char*) ;
 int FUNC_10 (int *,int const*,int) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (char*,int,char*,char const*) ;

__attribute__((used)) static int
FUNC_13(netdissect_options *VAR_2,
                         const uint8_t *VAR_3, const char *VAR_4, uint16_t VAR_5)
{
    char VAR_6[20];
    uint8_t VAR_7[sizeof(struct in6_addr)];
    u_int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

    if (!FUNC_6(*VAR_3, 4))
        return (0);
    VAR_8 = FUNC_0(VAR_3);
    VAR_13=4;
    VAR_3+=4;

    if (VAR_5 == VAR_0) {
        if (!FUNC_6(*VAR_3, 1))
            return (0);
        VAR_9=*(VAR_3++);
        VAR_10 = VAR_9&0x3f;
        if (VAR_10 > 32) {
            FUNC_5((VAR_2, "%sIPv4 prefix: bad bit length %u",
                   VAR_4,
                   VAR_10));
            return (0);
        }
        VAR_13++;
    } else if (VAR_5 == VAR_1) {
        if (!FUNC_6(*VAR_3, 2))
            return (0);
        VAR_9=*(VAR_3++);
        VAR_10=*(VAR_3++);
        if (VAR_10 > 128) {
            FUNC_5((VAR_2, "%sIPv6 prefix: bad bit length %u",
                   VAR_4,
                   VAR_10));
            return (0);
        }
        VAR_13+=2;
    } else
        return (0);

    VAR_11 = (VAR_10 + 7) / 8;

    if (!FUNC_6(*VAR_3, VAR_11))
        return (0);
    FUNC_11(VAR_7, 0, sizeof VAR_7);
    FUNC_10(VAR_7,VAR_3,VAR_11);
    VAR_3+=VAR_11;
    VAR_13+=VAR_11;

    if (VAR_5 == VAR_0)
        FUNC_5((VAR_2, "%sIPv4 prefix: %15s/%u",
               VAR_4,
               FUNC_8(VAR_2, VAR_7),
               VAR_10));
    else if (VAR_5 == VAR_1)
        FUNC_5((VAR_2, "%sIPv6 prefix: %s/%u",
               VAR_4,
               FUNC_7(VAR_2, VAR_7),
               VAR_10));

    FUNC_5((VAR_2, ", Distribution: %s, Metric: %u",
           FUNC_4(VAR_9) ? "down" : "up",
           VAR_8));

    if (VAR_5 == VAR_0 && FUNC_3(VAR_9))
        FUNC_5((VAR_2, ", sub-TLVs present"));
    else if (VAR_5 == VAR_1)
        FUNC_5((VAR_2, ", %s%s",
               FUNC_1(VAR_9) ? "External" : "Internal",
               FUNC_2(VAR_9) ? ", sub-TLVs present" : ""));

    if ((VAR_5 == VAR_0 && FUNC_3(VAR_9))
     || (VAR_5 == VAR_1 && FUNC_2(VAR_9))
 ) {




        if (!FUNC_6(*VAR_3, 1))
            return (0);
        VAR_12=*(VAR_3++);
        VAR_13+=VAR_12+1;
        FUNC_5((VAR_2, " (%u)", VAR_12));

        while (VAR_12>0) {
            if (!FUNC_6(*VAR_3,2))
                return (0);
            VAR_14=*(VAR_3++);
            VAR_15=*(VAR_3++);

            FUNC_12(VAR_6, sizeof(VAR_6), "%s  ",VAR_4);
            if (!FUNC_9(VAR_2, VAR_3, VAR_14, VAR_15, VAR_6))
                return(0);
            VAR_3+=VAR_15;
            VAR_12-=(VAR_15+2);
        }
    }
    return (VAR_13);
}

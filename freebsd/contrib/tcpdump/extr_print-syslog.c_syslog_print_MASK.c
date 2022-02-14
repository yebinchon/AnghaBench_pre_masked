
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int ;
typedef char u_char ;
struct TYPE_6__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,char const*,char*,int) ;
 int FUNC_3 (TYPE_1__*,char const) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_5 ;

void
FUNC_5(netdissect_options *VAR_6,
             register const u_char *VAR_7, register u_int VAR_8)
{
    uint16_t VAR_9 = 0;
    uint16_t VAR_10 = 0;
    uint16_t VAR_11,VAR_12;







    FUNC_1(*VAR_7, 1);
    if (*(VAR_7+VAR_9) == '<') {
        VAR_9++;
        FUNC_1(*(VAR_7 + VAR_9), 1);
        while ( *(VAR_7+VAR_9) >= '0' &&
                *(VAR_7+VAR_9) <= '9' &&
                VAR_9 <= VAR_1) {
            VAR_10 = VAR_10 * 10 + (*(VAR_7+VAR_9) - '0');
            VAR_9++;
            FUNC_1(*(VAR_7 + VAR_9), 1);
        }
        if (*(VAR_7+VAR_9) != '>') {
            FUNC_0((VAR_6, "%s", VAR_5));
            return;
        }
        VAR_9++;
    } else {
        FUNC_0((VAR_6, "%s", VAR_5));
        return;
    }

    VAR_11 = (VAR_10 & VAR_0) >> 3;
    VAR_12 = VAR_10 & VAR_2;

    if (VAR_6->ndo_vflag < 1 )
    {
        FUNC_0((VAR_6, "SYSLOG %s.%s, length: %u",
               FUNC_4(VAR_3, "unknown (%u)", VAR_11),
               FUNC_4(VAR_4, "unknown (%u)", VAR_12),
               VAR_8));
        return;
    }

    FUNC_0((VAR_6, "SYSLOG, length: %u\n\tFacility %s (%u), Severity %s (%u)\n\tMsg: ",
           VAR_8,
           FUNC_4(VAR_3, "unknown (%u)", VAR_11),
           VAR_11,
           FUNC_4(VAR_4, "unknown (%u)", VAR_12),
           VAR_12));


    for (; VAR_9 < VAR_8; VAR_9++) {
        FUNC_1(*(VAR_7 + VAR_9), 1);
        FUNC_3(VAR_6, *(VAR_7 + VAR_9));
    }

    if (VAR_6->ndo_vflag > 1)
        FUNC_2(VAR_6, VAR_7, "\n\t", VAR_8);

    return;

trunc:
    FUNC_0((VAR_6, "%s", VAR_5));
}

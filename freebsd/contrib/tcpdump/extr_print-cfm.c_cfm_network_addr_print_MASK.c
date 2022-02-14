
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;




 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_4(netdissect_options *VAR_3,
                       register const u_char *VAR_4, const u_int VAR_5)
{
    u_int VAR_6;
    u_int VAR_7 = VAR_0;






    if (VAR_5 < 1) {
        FUNC_0((VAR_3, "\n\t  Network Address Type (invalid, no data"));
        return VAR_7;
    }

    VAR_6 = *VAR_4;
    FUNC_0((VAR_3, "\n\t  Network Address Type %s (%u)",
           FUNC_3(VAR_2, "Unknown", VAR_6),
           VAR_6));




    switch(VAR_6) {
    case 129:
        if (VAR_5 != 1 + 4) {
            FUNC_0((VAR_3, "(invalid IPv4 address length %u)", VAR_5 - 1));
            VAR_7 = VAR_1;
            break;
        }
        FUNC_0((VAR_3, ", %s", FUNC_2(VAR_3, VAR_4 + 1)));
        break;

    case 128:
        if (VAR_5 != 1 + 16) {
            FUNC_0((VAR_3, "(invalid IPv6 address length %u)", VAR_5 - 1));
            VAR_7 = VAR_1;
            break;
        }
        FUNC_0((VAR_3, ", %s", FUNC_1(VAR_3, VAR_4 + 1)));
        break;

    default:
        VAR_7 = VAR_1;
        break;
    }

    return VAR_7;
}

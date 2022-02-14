
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 char* FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_5(netdissect_options *VAR_2,
                         const u_char *VAR_3, u_int VAR_4)
{
    uint8_t VAR_5, VAR_6, VAR_7;
    const u_char *VAR_8;
    u_int VAR_9;
    char *VAR_10;

    VAR_9 = VAR_4;
    VAR_8 = VAR_3;

    if (VAR_9 < 1) {
        return 0;
    }
    VAR_5 = *VAR_8++;
    VAR_9--;

    if (VAR_9 < VAR_5) {
        return 0;
    }

    VAR_10 = FUNC_2(VAR_2, VAR_8, VAR_5);
    if (VAR_10 == ((void*)0)) {
        return 0;
    }
    FUNC_1((VAR_2, "\n\t  Management Address length %u, %s",
           VAR_5, VAR_10));
    VAR_8 += VAR_5;
    VAR_9 -= VAR_5;

    if (VAR_9 < VAR_0) {
        return 0;
    }

    VAR_6 = *VAR_8;
    FUNC_1((VAR_2, "\n\t  %s Interface Numbering (%u): %u",
           FUNC_4(VAR_1, "Unknown", VAR_6),
           VAR_6,
           FUNC_0(VAR_8 + 1)));

    VAR_8 += VAR_0;
    VAR_9 -= VAR_0;




    if (VAR_9) {
        VAR_7 = *VAR_8;

        if (VAR_9 < 1U + VAR_7) {
            return 0;
        }
        if (VAR_7) {
            FUNC_1((VAR_2, "\n\t  OID length %u", VAR_7));
            FUNC_3(VAR_2, VAR_8 + 1, VAR_7);
        }
    }

    return 1;
}

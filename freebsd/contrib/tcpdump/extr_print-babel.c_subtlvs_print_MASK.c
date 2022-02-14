
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int const VAR_0 ;
 int const VAR_1 ;

 int VAR_2 ;


 int const VAR_3 ;
 int const VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_4(netdissect_options *VAR_7,
              const u_char *VAR_8, const u_char *VAR_9, const uint8_t VAR_10)
{
    uint8_t VAR_11, VAR_12;
    const char *VAR_13;
    uint32_t VAR_14, VAR_15;

    while (VAR_8 < VAR_9) {
        VAR_11 = *VAR_8++;
        if(VAR_11 == VAR_2) {
            FUNC_1((VAR_7, " sub-pad1"));
            continue;
        }
        if(VAR_8 == VAR_9)
            goto invalid;
        VAR_12 = *VAR_8++;
        if(VAR_8 + VAR_12 > VAR_9)
            goto invalid;

        switch(VAR_11) {
        case 129:
            FUNC_1((VAR_7, " sub-padn"));
            VAR_8 += VAR_12;
            break;
        case 130:
            FUNC_1((VAR_7, " sub-diversity"));
            if (VAR_12 == 0) {
                FUNC_1((VAR_7, " empty"));
                break;
            }
            VAR_13 = " ";
            while(VAR_12--) {
                FUNC_1((VAR_7, "%s%s", VAR_13, FUNC_3(VAR_5, "%u", *VAR_8++)));
                VAR_13 = "-";
            }
            if(VAR_10 != VAR_3 &&
               VAR_10 != VAR_4)
                FUNC_1((VAR_7, " (bogus)"));
            break;
        case 128:
            FUNC_1((VAR_7, " sub-timestamp"));
            if(VAR_10 == VAR_0) {
                if(VAR_12 < 4)
                    goto invalid;
                VAR_14 = FUNC_0(VAR_8);
                FUNC_1((VAR_7, " %s", FUNC_2(VAR_14)));
            } else if(VAR_10 == VAR_1) {
                if(VAR_12 < 8)
                    goto invalid;
                VAR_14 = FUNC_0(VAR_8);
                FUNC_1((VAR_7, " %s", FUNC_2(VAR_14)));
                VAR_15 = FUNC_0(VAR_8 + 4);
                FUNC_1((VAR_7, "|%s", FUNC_2(VAR_15)));
            } else
                FUNC_1((VAR_7, " (bogus)"));
            VAR_8 += VAR_12;
            break;
        default:
            FUNC_1((VAR_7, " sub-unknown-0x%02x", VAR_11));
            VAR_8 += VAR_12;
        }
    }
    return;

 invalid:
    FUNC_1((VAR_7, "%s", VAR_6));
}

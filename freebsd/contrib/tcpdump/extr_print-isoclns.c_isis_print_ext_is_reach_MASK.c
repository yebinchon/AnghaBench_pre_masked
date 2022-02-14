
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int netdissect_options ;
typedef int ident_buffer ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int) ;
 int VAR_1 ;
 int FUNC_3 (int const*,int) ;
 int FUNC_4 (int *,int const*,int,int,char*) ;
 int FUNC_5 (char*,int,char*,char const*) ;

__attribute__((used)) static int
FUNC_6(netdissect_options *VAR_2,
                        const uint8_t *VAR_3, const char *VAR_4, int VAR_5)
{
    char VAR_6[20];
    int VAR_7,VAR_8,VAR_9;
    int VAR_10 = 0;

    if (!FUNC_2(*VAR_3, VAR_1))
        return(0);

    FUNC_1((VAR_2, "%sIS Neighbor: %s", VAR_4, FUNC_3(VAR_3, VAR_1)));
    VAR_3+=(VAR_1);

    if (VAR_5 != VAR_0) {
        if (!FUNC_2(*VAR_3, 3))
     return(0);
 FUNC_1((VAR_2, ", Metric: %d", FUNC_0(VAR_3)));
 VAR_3+=3;
    }

    if (!FUNC_2(*VAR_3, 1))
        return(0);
    VAR_9=*(VAR_3++);
    VAR_10=VAR_1+3+1;
    FUNC_1((VAR_2, ", %ssub-TLVs present",VAR_9 ? "" : "no "));
    if (VAR_9) {
        FUNC_1((VAR_2, " (%u)", VAR_9));
        while (VAR_9>0) {
            if (!FUNC_2(*VAR_3,2))
                return(0);
            VAR_7=*(VAR_3++);
            VAR_8=*(VAR_3++);

            FUNC_5(VAR_6, sizeof(VAR_6), "%s  ",VAR_4);
            if (!FUNC_4(VAR_2, VAR_3, VAR_7, VAR_8, VAR_6))
                return(0);
            VAR_3+=VAR_8;
            VAR_9-=(VAR_8+2);
            VAR_10+=(VAR_8+2);
        }
    }
    return(VAR_10);
}

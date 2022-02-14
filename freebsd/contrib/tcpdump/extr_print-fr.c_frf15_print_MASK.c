
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(netdissect_options *VAR_3,
            const u_char *VAR_4, u_int VAR_5)
{
    uint16_t VAR_6, VAR_7;

    if (VAR_5 < 2)
        goto trunc;
    FUNC_1(*VAR_4, 2);

    VAR_7 = VAR_4[0]&VAR_1;
    VAR_6 = (VAR_4[0]&0x1e)<<7 | VAR_4[1];

    FUNC_0((VAR_3, "FRF.15, seq 0x%03x, Flags [%s],%s Fragmentation, length %u",
           VAR_6,
           FUNC_2(VAR_2,"none",VAR_7),
           VAR_4[0]&VAR_0 ? "Interface" : "End-to-End",
           VAR_5));
    return;

trunc:
    FUNC_0((VAR_3, "[|frf.15]"));
}

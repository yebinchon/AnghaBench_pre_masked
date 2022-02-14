
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int const,int) ;
 int FUNC_5 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_7(netdissect_options *VAR_2,
                const uint8_t *VAR_3, const char *VAR_4)
{
    if (!FUNC_4(*VAR_3, 2))
        return(0);

    FUNC_3((VAR_2, "%s%s",
           VAR_4,
           FUNC_6(VAR_1,
                   "Reserved for IETF Consensus",
                   FUNC_2(FUNC_0(VAR_3)))));

    FUNC_3((VAR_2, " Topology (0x%03x), Flags: [%s]",
           FUNC_2(FUNC_0(VAR_3)),
           FUNC_5(VAR_0, "none",FUNC_1(FUNC_0(VAR_3)))));

    return(2);
}

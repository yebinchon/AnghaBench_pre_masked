
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(netdissect_options *VAR_0,
                                    const u_char *VAR_1)
{
    FUNC_0((VAR_0, "\n\t    Priority Assignment Table"));
    FUNC_0((VAR_0, "\n\t     Priority : 0   1   2   3   4   5   6   7"));
    FUNC_0((VAR_0, "\n\t     Value    : %-3d %-3d %-3d %-3d %-3d %-3d %-3d %-3d",
            VAR_1[0]>>4,VAR_1[0]&0x0f,VAR_1[1]>>4,VAR_1[1]&0x0f,VAR_1[2]>>4,
            VAR_1[2] & 0x0f, VAR_1[3] >> 4, VAR_1[3] & 0x0f));
}

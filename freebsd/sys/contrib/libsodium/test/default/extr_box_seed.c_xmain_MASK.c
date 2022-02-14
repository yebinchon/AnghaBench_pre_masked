
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char*,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;

int
FUNC_2(void)
{
    int VAR_1;
    unsigned char VAR_2[32];
    unsigned char VAR_3[32];

    FUNC_0(VAR_3, VAR_2, VAR_0);
    for (VAR_1 = 0; VAR_1 < 32; ++VAR_1) {
        FUNC_1(",0x%02x", (unsigned int) VAR_3[VAR_1]);
        if (VAR_1 % 8 == 7)
            FUNC_1("\n");
    }
    for (VAR_1 = 0; VAR_1 < 32; ++VAR_1) {
        FUNC_1(",0x%02x", (unsigned int) VAR_2[VAR_1]);
        if (VAR_1 % 8 == 7)
            FUNC_1("\n");
    }
    return 0;
}

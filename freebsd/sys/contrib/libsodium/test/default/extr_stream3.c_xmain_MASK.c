
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__*,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 scalar_t__* VAR_2 ;

int
FUNC_2(void)
{
    int VAR_3;

    FUNC_0(VAR_2, 32, VAR_1, VAR_0);

    for (VAR_3 = 0; VAR_3 < 32; ++VAR_3) {
        FUNC_1(",0x%02x", (unsigned int) VAR_2[VAR_3]);
        if (VAR_3 % 8 == 7)
            FUNC_1("\n");
    }
    return 0;
}

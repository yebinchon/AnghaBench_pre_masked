
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int ) ;
 int FUNC_1 (char*,...) ;

int
FUNC_2(void)
{
    int VAR_2;

    FUNC_0(VAR_0, VAR_1);

    for (VAR_2 = 0; VAR_2 < 32; ++VAR_2) {
        if (VAR_2 > 0) {
            FUNC_1(",");
        } else {
            FUNC_1(" ");
        }
        FUNC_1("0x%02x", (unsigned int) VAR_0[VAR_2]);
        if (VAR_2 % 8 == 7) {
            FUNC_1("\n");
        }
    }
    return 0;
}

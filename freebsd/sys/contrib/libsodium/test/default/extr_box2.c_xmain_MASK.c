
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned char*,int ,int ) ;
 int FUNC_2 (scalar_t__*,int ,int,int ,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__*,int ,int,int ,unsigned char*) ;
 scalar_t__* VAR_4 ;
 int FUNC_4 (scalar_t__*,int ,int) ;
 int VAR_5 ;
 int FUNC_5 (char*,...) ;
 int VAR_6 ;

int
FUNC_6(void)
{
    unsigned char VAR_7[VAR_3];
    int VAR_8;
    int VAR_9;

    if (FUNC_2(VAR_4, VAR_2, 163, VAR_5, VAR_0, VAR_1) == 0) {
        for (VAR_8 = 32; VAR_8 < 163; ++VAR_8) {
            FUNC_5(",0x%02x", (unsigned int) VAR_4[VAR_8]);
            if (VAR_8 % 8 == 7)
                FUNC_5("\n");
        }
        FUNC_5("\n");
    }
    VAR_9 = FUNC_2(VAR_4, VAR_2, 163, VAR_5, VAR_6, VAR_1);
    FUNC_0(VAR_9 == -1);

    FUNC_4(VAR_4, 0, sizeof VAR_4);
    VAR_9 = FUNC_1(VAR_7, VAR_6, VAR_1);
    FUNC_0(VAR_9 == -1);
    VAR_9 = FUNC_1(VAR_7, VAR_0, VAR_1);
    FUNC_0(VAR_9 == 0);
    if (FUNC_3(VAR_4, VAR_2, 163, VAR_5, VAR_7) == 0) {
        for (VAR_8 = 32; VAR_8 < 163; ++VAR_8) {
            FUNC_5(",0x%02x", (unsigned int) VAR_4[VAR_8]);
            if (VAR_8 % 8 == 7)
                FUNC_5("\n");
        }
        FUNC_5("\n");
    }
    return 0;
}

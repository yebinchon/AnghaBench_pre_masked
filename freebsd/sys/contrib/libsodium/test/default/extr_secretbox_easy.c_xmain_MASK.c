
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char*,unsigned char*,unsigned char*,int,int ,int ) ;
 scalar_t__ FUNC_2 (unsigned char*,unsigned char*,int,int ,int ) ;
 int FUNC_3 (unsigned char*,unsigned char*,int,int ,int ) ;
 int VAR_1 ;
 unsigned char* VAR_2 ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;
 int FUNC_5 (unsigned char*,int ,int) ;
 int VAR_3 ;
 int FUNC_6 (char*,...) ;
 size_t FUNC_7 (int) ;
 int FUNC_8 (unsigned char*) ;
 scalar_t__ FUNC_9 (int) ;

int
FUNC_10(void)
{
    unsigned char *VAR_4;
    unsigned char *VAR_5;
    size_t VAR_6;

    VAR_4 = (unsigned char *) FUNC_9(131 + VAR_0 + 1);
    VAR_5 = (unsigned char *) FUNC_9(VAR_0);
    FUNC_0(VAR_4 != ((void*)0) && VAR_5 != ((void*)0));

    FUNC_2(VAR_4, VAR_2, 131, VAR_3, VAR_1);
    for (VAR_6 = 0; VAR_6 < 131 + VAR_0; ++VAR_6) {
        FUNC_6(",0x%02x", (unsigned int) VAR_4[VAR_6]);
    }
    FUNC_6("\n");

    FUNC_1(VAR_4, VAR_5, VAR_2, 131, VAR_3, VAR_1);
    for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
        FUNC_6(",0x%02x", (unsigned int) VAR_5[VAR_6]);
    }
    for (VAR_6 = 0; VAR_6 < 131; ++VAR_6) {
        FUNC_6(",0x%02x", (unsigned int) VAR_4[VAR_6]);
    }
    FUNC_6("\n");



    FUNC_4(VAR_4 + 1, VAR_2, 131);
    FUNC_2(VAR_4, VAR_4 + 1, 131, VAR_3, VAR_1);
    for (VAR_6 = 0; VAR_6 < 131 + VAR_0; ++VAR_6) {
        FUNC_6(",0x%02x", (unsigned int) VAR_4[VAR_6]);
    }
    FUNC_6("\n");

    FUNC_4(VAR_4, VAR_2, 131);
    FUNC_2(VAR_4 + 1, VAR_4, 131, VAR_3, VAR_1);
    for (VAR_6 = 0; VAR_6 < 131 + VAR_0; ++VAR_6) {
        FUNC_6(",0x%02x", (unsigned int) VAR_4[VAR_6 + 1]);
    }
    FUNC_6("\n");

    FUNC_4(VAR_4, VAR_2, 131);
    FUNC_2(VAR_4, VAR_4, 131, VAR_3, VAR_1);
    for (VAR_6 = 0; VAR_6 < 131 + VAR_0; ++VAR_6) {
        FUNC_6(",0x%02x", (unsigned int) VAR_4[VAR_6]);
    }
    FUNC_6("\n");

    FUNC_0(FUNC_2(VAR_4, VAR_2, 0, VAR_3, VAR_1) == 0);



    FUNC_2(VAR_4, VAR_4, 0, VAR_3, VAR_1);
    for (VAR_6 = 0; VAR_6 < VAR_0 + 1; ++VAR_6) {
        FUNC_6(",0x%02x", (unsigned int) VAR_4[VAR_6]);
    }
    FUNC_6("\n");
    if (FUNC_3(VAR_4, VAR_4, VAR_0, VAR_3,
                                   VAR_1) != 0) {
        FUNC_6("Null crypto_secretbox_open_easy() failed\n");
    }
    for (VAR_6 = 0; VAR_6 < VAR_0 + 1; ++VAR_6) {
        FUNC_6(",0x%02x", (unsigned int) VAR_4[VAR_6]);
    }
    FUNC_6("\n");
    VAR_4[FUNC_7(VAR_0)]++;
    if (FUNC_3(VAR_4, VAR_4, VAR_0, VAR_3,
                                   VAR_1) != -1) {
        FUNC_6("Null tampered crypto_secretbox_open_easy() failed\n");
    }



    FUNC_5(VAR_4, 0, 131 + VAR_0 + 1);
    FUNC_4(VAR_4, VAR_2, 20);
    FUNC_2(VAR_4, VAR_4 + 10, 10, VAR_3, VAR_1);
    for (VAR_6 = 0; VAR_6 < 10 + VAR_0; ++VAR_6) {
        FUNC_6(",0x%02x", (unsigned int) VAR_4[VAR_6]);
    }
    FUNC_6("\n");

    FUNC_5(VAR_4, 0, 131 + VAR_0 + 1);
    FUNC_4(VAR_4, VAR_2, 20);
    FUNC_2(VAR_4 + 10, VAR_4, 10, VAR_3, VAR_1);
    for (VAR_6 = 0; VAR_6 < 10 + VAR_0; ++VAR_6) {
        FUNC_6(",0x%02x", (unsigned int) VAR_4[VAR_6]);
    }
    FUNC_6("\n");

    FUNC_8(VAR_5);
    FUNC_8(VAR_4);

    return 0;
}

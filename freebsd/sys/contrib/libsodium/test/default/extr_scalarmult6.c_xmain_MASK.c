
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (unsigned char*,unsigned char*,unsigned char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (unsigned char*,int ,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (unsigned char*) ;
 scalar_t__ FUNC_5 (int ) ;

int
FUNC_6(void)
{
    unsigned char *VAR_4;
    unsigned char *VAR_5;
    unsigned char *VAR_6;
    int VAR_7;
    int VAR_8;

    VAR_4 = (unsigned char *) FUNC_5(VAR_2);
    VAR_5 = (unsigned char *) FUNC_5(VAR_3);
    VAR_6 = (unsigned char *) FUNC_5(VAR_3);
    FUNC_0(VAR_4 != ((void*)0) && VAR_5 != ((void*)0) && VAR_6 != ((void*)0));

    FUNC_2(VAR_5, VAR_1, VAR_3);
    FUNC_2(VAR_6, VAR_0, VAR_3);

    VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_6);
    FUNC_0(VAR_8 == 0);

    FUNC_4(VAR_6);
    FUNC_4(VAR_5);

    for (VAR_7 = 0; VAR_7 < 32; ++VAR_7) {
        if (VAR_7 > 0) {
            FUNC_3(",");
        } else {
            FUNC_3(" ");
        }
        FUNC_3("0x%02x", (unsigned int) VAR_4[VAR_7]);
        if (VAR_7 % 8 == 7) {
            FUNC_3("\n");
        }
    }
    FUNC_4(VAR_4);

    return 0;
}

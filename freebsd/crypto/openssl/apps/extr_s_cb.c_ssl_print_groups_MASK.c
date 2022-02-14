
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;
typedef int BIO ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *,int) ;
 int VAR_0 ;
 int* FUNC_7 (int,char*) ;

int FUNC_8(BIO *VAR_1, SSL *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, *VAR_6, VAR_7;
    const char *VAR_8;

    VAR_5 = FUNC_5(VAR_2, ((void*)0));
    if (VAR_5 <= 0)
        return 1;
    VAR_6 = FUNC_7(VAR_5 * sizeof(int), "groups to print");
    FUNC_5(VAR_2, VAR_6);

    FUNC_1(VAR_1, "Supported Elliptic Groups: ");
    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
        if (VAR_4)
            FUNC_1(VAR_1, ":");
        VAR_7 = VAR_6[VAR_4];

        if (VAR_7 & VAR_0) {
            FUNC_0(VAR_1, "0x%04X", VAR_7 & 0xFFFF);
        } else {


            VAR_8 = FUNC_2(VAR_7);
            if (VAR_8 == ((void*)0))
                VAR_8 = FUNC_3(VAR_7);
            FUNC_0(VAR_1, "%s", VAR_8);
        }
    }
    FUNC_4(VAR_6);
    if (VAR_3) {
        FUNC_1(VAR_1, "\n");
        return 1;
    }
    FUNC_1(VAR_1, "\nShared Elliptic groups: ");
    VAR_5 = FUNC_6(VAR_2, -1);
    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
        if (VAR_4)
            FUNC_1(VAR_1, ":");
        VAR_7 = FUNC_6(VAR_2, VAR_4);

        VAR_8 = FUNC_2(VAR_7);
        if (VAR_8 == ((void*)0))
            VAR_8 = FUNC_3(VAR_7);
        FUNC_0(VAR_1, "%s", VAR_8);
    }
    if (VAR_5 == 0)
        FUNC_1(VAR_1, "NONE");
    FUNC_1(VAR_1, "\n");
    return 1;
}

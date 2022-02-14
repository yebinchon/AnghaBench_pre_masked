
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;
typedef int BIO ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int,int*,int*,int *,unsigned char*,unsigned char*) ;
 int FUNC_4 (int *,int,int*,int*,int *,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_5 (int *) ;
 char* FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(BIO *VAR_1, SSL *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    VAR_6 = FUNC_5(VAR_2) ? 0 : 1;
    if (VAR_3)
        VAR_5 = FUNC_3(VAR_2, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    else
        VAR_5 = FUNC_4(VAR_2, -1, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    if (VAR_5 == 0)
        return 1;

    if (VAR_3)
        FUNC_1(VAR_1, "Shared ");

    if (VAR_6)
        FUNC_1(VAR_1, "Requested ");
    FUNC_1(VAR_1, "Signature Algorithms: ");
    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
        int VAR_7, VAR_8;
        unsigned char VAR_9, VAR_10;
        const char *VAR_11 = ((void*)0);
        if (VAR_3)
            FUNC_3(VAR_2, VAR_4, &VAR_8, &VAR_7, ((void*)0),
                                   &VAR_10, &VAR_9);
        else
            FUNC_4(VAR_2, VAR_4, &VAR_8, &VAR_7, ((void*)0), &VAR_10, &VAR_9);
        if (VAR_4)
            FUNC_1(VAR_1, ":");
        VAR_11 = FUNC_6(VAR_8);
        if (VAR_11)
            FUNC_0(VAR_1, "%s", VAR_11);
        else
            FUNC_0(VAR_1, "0x%02X", (int)VAR_10);
        if (VAR_7 != VAR_0)
            FUNC_0(VAR_1, "+%s", FUNC_2(VAR_7));
        else if (VAR_11 == ((void*)0))
            FUNC_0(VAR_1, "+0x%02X", (int)VAR_9);
    }
    FUNC_1(VAR_1, "\n");
    return 1;
}

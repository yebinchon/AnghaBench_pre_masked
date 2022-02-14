
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int oidstr ;
typedef int X509 ;
typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (char*,int,int ,int ) ;
 int FUNC_4 (int ) ;
 unsigned char* FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 unsigned char* FUNC_8 (int *,int*) ;
 scalar_t__ FUNC_9 (int *) ;
 int * VAR_1 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int) ;
 int VAR_2 ;

int FUNC_12(BIO *VAR_3, X509 *VAR_4, int VAR_5)
{
    char VAR_6[80], VAR_7;
    FUNC_4(VAR_0) *VAR_2, *VAR_1;
    const unsigned char *VAR_8, *VAR_9;
    int VAR_10;
    int VAR_11;
    if (FUNC_9(VAR_4) == 0)
        return 1;
    VAR_2 = FUNC_7(VAR_4);
    VAR_1 = FUNC_6(VAR_4);
    if (VAR_2) {
        VAR_7 = 1;
        FUNC_0(VAR_3, "%*sTrusted Uses:\n%*s", VAR_5, "", VAR_5 + 2, "");
        for (VAR_11 = 0; VAR_11 < FUNC_10(VAR_2); VAR_11++) {
            if (!VAR_7)
                FUNC_1(VAR_3, ", ");
            else
                VAR_7 = 0;
            FUNC_3(VAR_6, sizeof(VAR_6),
                        FUNC_11(VAR_2, VAR_11), 0);
            FUNC_1(VAR_3, VAR_6);
        }
        FUNC_1(VAR_3, "\n");
    } else
        FUNC_0(VAR_3, "%*sNo Trusted Uses.\n", VAR_5, "");
    if (VAR_1) {
        VAR_7 = 1;
        FUNC_0(VAR_3, "%*sRejected Uses:\n%*s", VAR_5, "", VAR_5 + 2, "");
        for (VAR_11 = 0; VAR_11 < FUNC_10(*VAR_1); VAR_11++) {
            if (!VAR_7)
                FUNC_1(VAR_3, ", ");
            else
                VAR_7 = 0;
            FUNC_3(VAR_6, sizeof(VAR_6),
                        FUNC_11(*VAR_1, VAR_11), 0);
            FUNC_1(VAR_3, VAR_6);
        }
        FUNC_1(VAR_3, "\n");
    } else
        FUNC_0(VAR_3, "%*sNo Rejected Uses.\n", VAR_5, "");
    VAR_8 = FUNC_5(VAR_4, ((void*)0));
    if (VAR_8)
        FUNC_0(VAR_3, "%*sAlias: %s\n", VAR_5, "", VAR_8);
    VAR_9 = FUNC_8(VAR_4, &VAR_10);
    if (VAR_9) {
        FUNC_0(VAR_3, "%*sKey Id: ", VAR_5, "");
        for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
            FUNC_0(VAR_3, "%s%02X", VAR_11 ? ":" : "", VAR_9[VAR_11]);
        FUNC_2(VAR_3, "\n", 1);
    }
    return 1;
}

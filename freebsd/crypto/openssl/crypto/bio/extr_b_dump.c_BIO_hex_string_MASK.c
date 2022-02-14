
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int FUNC_0 (int *,char*,...) ;

int FUNC_1(BIO *VAR_0, int VAR_1, int VAR_2, unsigned char *VAR_3,
                   int VAR_4)
{
    int VAR_5, VAR_6 = 0;

    if (VAR_4 < 1)
        return 1;

    for (VAR_5 = 0; VAR_5 < VAR_4 - 1; VAR_5++) {
        if (VAR_5 && !VAR_6)
            FUNC_0(VAR_0, "%*s", VAR_1, "");

        FUNC_0(VAR_0, "%02X:", VAR_3[VAR_5]);

        VAR_6 = (VAR_6 + 1) % VAR_2;
        if (!VAR_6)
            FUNC_0(VAR_0, "\n");
    }

    if (VAR_5 && !VAR_6)
        FUNC_0(VAR_0, "%*s", VAR_1, "");
    FUNC_0(VAR_0, "%02X", VAR_3[VAR_4 - 1]);
    return 1;
}

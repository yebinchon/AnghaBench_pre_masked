
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int FUNC_0 (int *,char*,...) ;

void FUNC_1(BIO *VAR_0, const char* VAR_1, int VAR_2, const unsigned char* VAR_3)
{
    int VAR_4;

    FUNC_0(VAR_0, "unsigned char %s[%d] = {", VAR_1, VAR_2);
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        if ((VAR_4 % 10) == 0)
            FUNC_0(VAR_0, "\n    ");
        if (VAR_4 < VAR_2 - 1)
            FUNC_0(VAR_0, "0x%02X, ", VAR_3[VAR_4]);
        else
            FUNC_0(VAR_0, "0x%02X", VAR_3[VAR_4]);
    }
    FUNC_0(VAR_0, "\n};\n");
}

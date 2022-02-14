
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;

int FUNC_5(BIO *VAR_0)
{
    char VAR_1[512];
    int VAR_2, VAR_3 = 0;
    char *VAR_4, *VAR_5, *VAR_6 = ((void*)0);

    for (;;) {
        VAR_5 = VAR_4 = ((void*)0);
        VAR_2 = FUNC_0(VAR_0, VAR_1, 512);
        if (VAR_2 <= 0)
            return VAR_3;
        VAR_1[VAR_2 - 1] = '\0';
        if (!FUNC_2(VAR_1[0]))
            return VAR_3;
        VAR_4 = VAR_5 = VAR_1;
        while (FUNC_3(*VAR_5) || *VAR_5 == '.')
            VAR_5++;
        if (*VAR_5 != '\0') {
            *(VAR_5++) = '\0';
            while (FUNC_4(*VAR_5))
                VAR_5++;
            if (*VAR_5 == '\0') {
                VAR_5 = ((void*)0);
            } else {
                VAR_6 = VAR_5;
                while (*VAR_6 != '\0' && !FUNC_4(*VAR_6))
                    VAR_6++;
                if (*VAR_6 != '\0') {
                    *(VAR_6++) = '\0';
                    while (FUNC_4(*VAR_6))
                        VAR_6++;
                    if (*VAR_6 == '\0') {
                        VAR_6 = ((void*)0);
                    }
                } else {
                    VAR_6 = ((void*)0);
                }
            }
        } else {
            VAR_5 = ((void*)0);
        }
        if (*VAR_4 == '\0')
            return VAR_3;
        if (!FUNC_1(VAR_4, VAR_5, VAR_6))
            return VAR_3;
        VAR_3++;
    }
}

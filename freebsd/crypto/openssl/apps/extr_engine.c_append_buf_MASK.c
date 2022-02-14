
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int) ;
 char* FUNC_2 (int,char*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(char **VAR_0, int *VAR_1, const char *VAR_2)
{
    const int VAR_3 = 256;
    int VAR_4 = FUNC_4(VAR_2) + 1;
    char *VAR_5 = *VAR_0;

    if (VAR_5 == ((void*)0)) {
        *VAR_1 = ((VAR_4 + VAR_3 - 1) / VAR_3) * VAR_3;
        VAR_5 = *VAR_0 = FUNC_2(*VAR_1, "engine buffer");
    } else {
        const int VAR_6 = FUNC_4(VAR_5);

        if (VAR_6 > 0)
            VAR_4 += 2 + VAR_6;

        if (VAR_4 > *VAR_1) {
            *VAR_1 = ((VAR_4 + VAR_3 - 1) / VAR_3) * VAR_3;
            VAR_5 = FUNC_1(VAR_5, *VAR_1);
            if (VAR_5 == ((void*)0)) {
                FUNC_0(*VAR_0);
                *VAR_0 = ((void*)0);
                return 0;
            }
            *VAR_0 = VAR_5;
        }

        if (VAR_6 > 0) {
            VAR_5 += VAR_6;
            *VAR_5++ = ',';
            *VAR_5++ = ' ';
        }
    }

    FUNC_3(VAR_5, VAR_2);
    return 1;
}

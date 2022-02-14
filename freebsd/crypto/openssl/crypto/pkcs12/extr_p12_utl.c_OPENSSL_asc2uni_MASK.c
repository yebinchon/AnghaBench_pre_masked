
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned char* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char const*) ;

unsigned char *FUNC_3(const char *VAR_2, int VAR_3,
                               unsigned char **VAR_4, int *VAR_5)
{
    int VAR_6, VAR_7;
    unsigned char *VAR_8;

    if (VAR_3 == -1)
        VAR_3 = FUNC_2(VAR_2);
    VAR_6 = VAR_3 * 2 + 2;
    if ((VAR_8 = FUNC_0(VAR_6)) == ((void*)0)) {
        FUNC_1(VAR_1, VAR_0);
        return ((void*)0);
    }
    for (VAR_7 = 0; VAR_7 < VAR_6 - 2; VAR_7 += 2) {
        VAR_8[VAR_7] = 0;
        VAR_8[VAR_7 + 1] = VAR_2[VAR_7 >> 1];
    }

    VAR_8[VAR_6 - 2] = 0;
    VAR_8[VAR_6 - 1] = 0;
    if (VAR_5)
        *VAR_5 = VAR_6;
    if (VAR_4)
        *VAR_4 = VAR_8;
    return VAR_8;
}

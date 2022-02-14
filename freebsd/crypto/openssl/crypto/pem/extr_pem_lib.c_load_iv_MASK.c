
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(char **VAR_2, unsigned char *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;
    char *VAR_7;

    VAR_7 = *VAR_2;
    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
        VAR_3[VAR_6] = 0;
    VAR_4 *= 2;
    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        VAR_5 = FUNC_0(*VAR_7);
        if (VAR_5 < 0) {
            FUNC_1(VAR_0, VAR_1);
            return 0;
        }
        VAR_7++;
        VAR_3[VAR_6 / 2] |= VAR_5 << (long)((!(VAR_6 & 1)) * 4);
    }

    *VAR_2 = VAR_7;
    return 1;
}

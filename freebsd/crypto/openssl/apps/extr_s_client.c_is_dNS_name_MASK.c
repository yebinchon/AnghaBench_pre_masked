
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0)
{
    const size_t VAR_1 = 63;
    size_t VAR_2;
    int VAR_3 = 0;
    size_t VAR_4 = FUNC_0(VAR_0);
    size_t VAR_5 = 0;
    int VAR_6 = 1;
    for (VAR_2 = 0; VAR_2 < VAR_4 && VAR_5 < VAR_1; ++VAR_2) {
        char VAR_7 = VAR_0[VAR_2];

        if ((VAR_7 >= 'a' && VAR_7 <= 'z')
            || (VAR_7 >= 'A' && VAR_7 <= 'Z')
            || VAR_7 == '_') {
            VAR_5 += 1;
            VAR_6 = 0;
            continue;
        }

        if (VAR_7 >= '0' && VAR_7 <= '9') {
            VAR_5 += 1;
            continue;
        }


        if (VAR_2 > 0 && VAR_2 < VAR_4 - 1) {
            if (VAR_7 == '-') {
                VAR_5 += 1;
                continue;
            }





            if (VAR_7 == '.'
                && VAR_0[VAR_2 + 1] != '.'
                && VAR_0[VAR_2 - 1] != '-'
                && VAR_0[VAR_2 + 1] != '-') {
                VAR_5 = 0;
                VAR_3 = 1;
                continue;
            }
        }
        VAR_3 = 0;
        break;
    }


    VAR_3 &= !VAR_6 && !(VAR_5 == VAR_1);

    return VAR_3;
}

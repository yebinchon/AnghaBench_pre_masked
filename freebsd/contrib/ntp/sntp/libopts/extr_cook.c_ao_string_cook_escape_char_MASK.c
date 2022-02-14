
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint_t ;


 int FUNC_0 (char const) ;
 int FUNC_1 (char const) ;


 unsigned long FUNC_2 (char*,int *,int) ;

unsigned int
FUNC_3(char const * VAR_0, char * VAR_1, uint_t VAR_2)
{
    unsigned int VAR_3 = 1;

    switch (*VAR_1 = *VAR_0++) {
    case 128:
        return 0;
    case '\r':
        if (*VAR_0 != 129)
            return 1;
        VAR_3++;

    case 129:
        *VAR_1 = (char)VAR_2;
        return VAR_3;

    case 'a': *VAR_1 = '\a'; break;
    case 'b': *VAR_1 = '\b'; break;
    case 'f': *VAR_1 = '\f'; break;
    case 'n': *VAR_1 = 129; break;
    case 'r': *VAR_1 = '\r'; break;
    case 't': *VAR_1 = '\t'; break;
    case 'v': *VAR_1 = '\v'; break;

    case 'x':
    case 'X':
        if (FUNC_0(*VAR_0)) {
            char VAR_4[4];
            unsigned int VAR_5 = 0;

            do {
                VAR_4[VAR_5] = VAR_0[VAR_5];
                if (++VAR_5 >= 2)
                    break;
            } while (FUNC_0(VAR_0[VAR_5]));
            VAR_4[VAR_5] = 128;
            *VAR_1 = (char)FUNC_2(VAR_4, ((void*)0), 16);
            return VAR_5 + 1;
        }
        break;

    case '0': case '1': case '2': case '3':
    case '4': case '5': case '6': case '7':
    {





        char VAR_6[4];
        unsigned long VAR_7;
        unsigned int VAR_8 = 0;

        VAR_6[VAR_8++] = *--VAR_0;
        while (FUNC_1(VAR_0[VAR_8])) {
            VAR_6[VAR_8] = VAR_0[VAR_8];
            if (++VAR_8 >= 3)
                break;
        }

        VAR_6[VAR_8] = 128;
        VAR_7 = FUNC_2(VAR_6, ((void*)0), 8);
        if (VAR_7 > 0xFF)
            VAR_7 = 0xFF;
        *VAR_1 = (char)VAR_7;
        return VAR_8;
    }

    default: ;
    }

    return VAR_3;
}

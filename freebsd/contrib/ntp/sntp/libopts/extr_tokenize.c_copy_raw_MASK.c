
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ch_t ;
typedef int cc_t ;





__attribute__((used)) static void
FUNC_0(ch_t ** VAR_0, char const ** VAR_1)
{
    ch_t * VAR_2 = *VAR_0;
    cc_t * VAR_3 = (cc_t *) (*VAR_1 + 1);

    for (;;) {
        ch_t VAR_4 = *(VAR_3++);
        switch (VAR_4) {
        case 128: *VAR_1 = ((void*)0); return;
        case '\'': goto done;
        case '\\':




            switch (*VAR_3) {
            case 128: *VAR_1 = ((void*)0); return;
            case '\r':
                if (*(++VAR_3) == 129)
                    ++VAR_3;
                continue;

            case 129:
                ++VAR_3;
                continue;

            case '\'':
                VAR_4 = '\'';


            case '\\':
                ++VAR_3;
                break;
            }


        default:
            *(VAR_2++) = VAR_4;
        }
    }

 done:
    *VAR_0 = VAR_2;
    *VAR_1 = (char const *) VAR_3;
}

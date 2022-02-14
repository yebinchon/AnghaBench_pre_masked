
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;

 unsigned int FUNC_0 (char const*) ;

__attribute__((used)) static char *
FUNC_1(char * VAR_1, char const * VAR_2, int * VAR_3)
{
    char * VAR_4 = VAR_1;
    int VAR_5 = *VAR_3;

    if (VAR_2 == ((void*)0))
        return ((void*)0);

    if ((unsigned)VAR_5 >= FUNC_0( VAR_2 ))
        return ((void*)0);

    {
        char const * VAR_6 = VAR_2 + VAR_5;

        while (*VAR_6 == ':') VAR_6++;

        for (;;) {
            char VAR_7 = (*(VAR_4++) = *(VAR_6++));
            switch (VAR_7) {
            case ':':
                VAR_4[-1] = 128;

            case 128:
                goto copy_done;
            }

            if ((unsigned long)(VAR_4 - VAR_1) >= VAR_0)
                break;
        } copy_done:;

        VAR_5 = (int)(VAR_6 - VAR_2);
    }

    if (*VAR_1 == 128)
        return ((void*)0);

    *VAR_3 = VAR_5;
    return VAR_1;
}

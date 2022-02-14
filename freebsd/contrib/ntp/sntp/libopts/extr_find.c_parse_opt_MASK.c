
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_2(char const ** VAR_0, char ** VAR_1, char * VAR_2, size_t VAR_3)
{
    int VAR_4 = 0;
    char const * VAR_5 = *VAR_0;
    *VAR_1 = ((void*)0);

    for (;;) {
        switch (*(VAR_5++)) {
        case 128: return VAR_4;

        case '=':
            FUNC_1(VAR_2, *VAR_0, (size_t)VAR_4);

            VAR_2[VAR_4] = 128;
            *VAR_0 = VAR_2;
            *VAR_1 = FUNC_0(VAR_5);
            return VAR_4;

        default:
            if (++VAR_4 >= (int)VAR_3)
                return -1;
        }
    }
}

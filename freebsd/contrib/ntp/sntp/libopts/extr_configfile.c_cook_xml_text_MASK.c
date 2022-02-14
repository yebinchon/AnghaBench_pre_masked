
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (char*,int *,int) ;

__attribute__((used)) static void
FUNC_2(char * VAR_0)
{
    char * VAR_1 = VAR_0;
    char * VAR_2 = VAR_0;
    char VAR_3[4];
    VAR_3[2] = 128;

    for (;;) {
        int VAR_4 = ((int)*(VAR_1++)) & 0xFF;
        switch (VAR_4) {
        case 128:
            *VAR_2 = 128;
            return;

        case '&':
            VAR_4 = FUNC_0(&VAR_1);
            *(VAR_2++) = (char)VAR_4;
            if (VAR_4 == 128)
                return;
            break;

        case '%':
            VAR_3[0] = *(VAR_1++);
            VAR_3[1] = *(VAR_1++);
            if ((VAR_3[0] == 128) || (VAR_3[1] == 128)) {
                *VAR_2 = 128;
                return;
            }

            VAR_4 = (int)FUNC_1(VAR_3, ((void*)0), 16);


        default:
            *(VAR_2++) = (char)VAR_4;
        }
    }
}

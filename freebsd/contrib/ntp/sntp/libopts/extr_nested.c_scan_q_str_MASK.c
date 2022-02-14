
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;

__attribute__((used)) static char const *
FUNC_0(char const * VAR_1)
{
    char VAR_2 = *(VAR_1++);

    for (;;) {
        char VAR_3 = *(VAR_1++);
        if (VAR_3 == VAR_0)
            return VAR_1-1;

        if (VAR_3 == VAR_2)
            return VAR_1;

        if (VAR_3 == '\\') {
            VAR_3 = *(VAR_1++);



            if (VAR_3 == VAR_0)
                return VAR_1 - 2;





            if ((VAR_3 == VAR_2) || (VAR_3 == '\\')) {
                if (*(VAR_1++) == VAR_0)
                    return VAR_1-1;
            }
        }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;




 unsigned int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char**,char*,int*) ;

char *
FUNC_2(char * VAR_0, int * VAR_1)
{
    int VAR_2 = 0;
    char VAR_3 = *VAR_0;





    char * VAR_4 = VAR_0++;
    char * VAR_5 = VAR_0;

    if (VAR_1 == ((void*)0))
        VAR_1 = &VAR_2;

    for (;;) {







        while (*VAR_5 == VAR_3) {
            *VAR_4 = 128;
            if (! FUNC_1(&VAR_5, &VAR_3, VAR_1))
                return VAR_5;
        }




        switch (*(VAR_4++) = *(VAR_5++)) {
        case 128:
            return ((void*)0);

        case 129:
            (*VAR_1)++;
            break;

        case '\\':





            if (*VAR_5 == 129) {
                VAR_5++;
                VAR_4--;
                (*VAR_1)++;
            }





            else if (VAR_3 != '\'') {
                unsigned int VAR_6;
                VAR_6 = FUNC_0(VAR_5, VAR_4-1, (uint_t)129);
                if (VAR_6 == 0)
                    return ((void*)0);

                VAR_5 += VAR_6;
            }





            else switch (*VAR_5) {
            case '\\':
            case '\'':
            case '#':
                VAR_4[-1] = *VAR_5++;
            }
        }
    }
}

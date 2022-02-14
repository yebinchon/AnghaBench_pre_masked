
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,char const*,char*) ;
 int FUNC_1 (char const*) ;
 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,int,int *) ;
 char* FUNC_4 (char*,char) ;
 size_t FUNC_5 (char const*) ;

void
FUNC_6(char const * VAR_3, bool VAR_4, FILE * VAR_5)
{
    size_t VAR_6 = FUNC_5(VAR_3);
    char * VAR_7;

    if (VAR_4 || (VAR_6 < 256))



    {
        FUNC_3(VAR_3, VAR_4, VAR_5);
        return;
    }

    FUNC_0(VAR_7, VAR_3, "ppara");
    VAR_3 = VAR_7;

    for (;;) {
        char * VAR_8;

        if (VAR_6 < 256) {
        done:
            FUNC_3(VAR_7, VAR_4, VAR_5);
            break;
        }
        VAR_8 = VAR_7;

    try_longer:
        VAR_8 = FUNC_4(VAR_8, VAR_1);
        if (VAR_8 == ((void*)0))
            goto done;

        if ((VAR_8 - VAR_7) < 40) {
            VAR_8++;
            goto try_longer;
        }

        VAR_8++;
        if ((! FUNC_2((int)*VAR_8)) || (*VAR_8 == VAR_0))



            goto try_longer;

        if (*VAR_8 == VAR_1) {




            while (*++VAR_8 == VAR_1) ;

        } else {
            char * VAR_9 = VAR_8;
            int VAR_10 = 0;

            while (*VAR_9 == ' ') {
                if (++VAR_10 >= 8) {



                    VAR_8 = VAR_9;
                    goto try_longer;
                }
                VAR_9++;
            }
        }





        {
            char VAR_11 = *VAR_8;
            *VAR_8 = VAR_2;
            FUNC_3(VAR_7, VAR_4, VAR_5);
            VAR_6 -= VAR_8 - VAR_7;
            if (VAR_6 <= 0)
                break;
            *VAR_8 = VAR_11;
            VAR_7 = VAR_8;
        }
    }
    FUNC_1(VAR_3);
}

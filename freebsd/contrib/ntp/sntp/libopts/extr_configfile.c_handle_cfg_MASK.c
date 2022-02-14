
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tOptions ;
typedef int tOptState ;


 int FUNC_0 (char) ;


 int VAR_0 ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,char*,int,int ) ;
 char* FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static char *
FUNC_6(tOptions * VAR_1, tOptState * VAR_2, char * VAR_3, int VAR_4)
{
    char * VAR_5 = VAR_3++;
    char * VAR_6 = FUNC_4(VAR_3, 129);

    if (VAR_6 == ((void*)0))
        return VAR_3 + FUNC_5(VAR_3);

    VAR_3 = FUNC_1(VAR_3);
    VAR_3 = FUNC_2(VAR_3);
    if (VAR_3 > VAR_6) {
    name_only:
        *VAR_6++ = 128;
        FUNC_3(VAR_1, VAR_2, VAR_5, VAR_4, VAR_0);
        return VAR_6;
    }






    if ((*VAR_3 == '=') || (*VAR_3 == ':')) {
        VAR_3 = FUNC_2(VAR_3+1);
        if (VAR_3 > VAR_6)
            goto name_only;
    } else if (! FUNC_0(VAR_3[-1]))
        return ((void*)0);





    if (VAR_6[-1] == '\\') {
        char * VAR_7 = VAR_6-1;
        char * VAR_8 = VAR_6;

        for (;;) {
            char VAR_9 = *(VAR_8++);
            switch (VAR_9) {
            case 128:
                VAR_8 = ((void*)0);


            case 129:
                *VAR_7 = 128;
                VAR_6 = VAR_8;
                goto copy_done;

            case '\\':
                if (*VAR_8 == 129)
                    VAR_9 = *(VAR_8++);

            default:
                *(VAR_7++) = VAR_9;
            }
        } copy_done:;

    } else {



        *(VAR_6++) = 128;
    }





    FUNC_3(VAR_1, VAR_2, VAR_5, VAR_4, VAR_0);

    return VAR_6;
}

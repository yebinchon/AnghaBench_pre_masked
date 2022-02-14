
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ optEquivIndex; char* pz_Name; char* pz_DisableName; int fOptState; } ;
typedef TYPE_1__ tOptDesc ;
typedef int FILE ;


 int FUNC_0 (TYPE_1__*) ;
 char VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (char,int *) ;
 int FUNC_4 (char const*,int *) ;
 int FUNC_5 (char const*,size_t,size_t,int *) ;
 char* FUNC_6 (char const*,char) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void
FUNC_8(FILE * VAR_3, tOptDesc * VAR_4, char const * VAR_5)
{
    int VAR_6;







    {
        char const * VAR_7 =
            (! FUNC_0(VAR_4) || (VAR_4->optEquivIndex != VAR_1))
            ? VAR_4->pz_Name
            : VAR_4->pz_DisableName;
        VAR_6 = 17 - FUNC_7(VAR_7);
        FUNC_4(VAR_7, VAR_3);
    }

    if ( (VAR_5 == ((void*)0))
       && (FUNC_1(VAR_4->fOptState) != VAR_2))
        goto end_entry;

    FUNC_4(" = ", VAR_3);
    while (VAR_6-- > 0) FUNC_3(' ', VAR_3);





    if (FUNC_1(VAR_4->fOptState) == VAR_2)
        FUNC_2(VAR_3, "%d", (int)(intptr_t)VAR_5);

    else {
        for (;;) {
            char const * VAR_8 = FUNC_6(VAR_5, VAR_0);





            if (VAR_8 == ((void*)0))
                break;




            (void)FUNC_5(VAR_5, (size_t)(VAR_8 - VAR_5), (size_t)1, VAR_3);
            VAR_5 = VAR_8+1;
            FUNC_4("\\\n", VAR_3);
        }




        FUNC_4(VAR_5, VAR_3);
    }

end_entry:
    FUNC_3(VAR_0, VAR_3);
}

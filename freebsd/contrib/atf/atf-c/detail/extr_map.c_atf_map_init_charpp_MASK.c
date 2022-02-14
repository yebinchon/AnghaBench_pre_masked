
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_map_t ;
typedef int atf_error_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*,int ,int) ;
 int FUNC_6 (char const*) ;

atf_error_t
FUNC_7(atf_map_t *VAR_1, const char *const *VAR_2)
{
    atf_error_t VAR_3;
    const char *const *VAR_4 = VAR_2;

    VAR_3 = FUNC_4(VAR_1);
    if (VAR_2 != ((void*)0)) {
        while (!FUNC_1(VAR_3) && *VAR_4 != ((void*)0)) {
            const char *VAR_5, *VAR_6;

            VAR_5 = *VAR_4;
            FUNC_0(VAR_5 != ((void*)0));
            VAR_4++;

            if ((VAR_6 = *VAR_4) == ((void*)0)) {
                VAR_3 = FUNC_2(VAR_0, "List too short; no value for "
                    "key '%s' provided", VAR_5);
                break;
            }
            VAR_4++;

            VAR_3 = FUNC_5(VAR_1, VAR_5, FUNC_6(VAR_6), 1);
        }
    }

    if (FUNC_1(VAR_3))
        FUNC_3(VAR_1);

    return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_tp_t ;
typedef int atf_tc_t ;


 int FUNC_0 (int ) ;
 char** FUNC_1 (int const*) ;
 int ** FUNC_2 (int const*) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static
void
FUNC_6(const atf_tp_t *VAR_0)
{
    const atf_tc_t *const *VAR_1;
    const atf_tc_t *const *VAR_2;

    FUNC_4("Content-Type: application/X-atf-tp; version=\"1\"\n\n");

    VAR_1 = FUNC_2(VAR_0);
    FUNC_0(VAR_1 != ((void*)0));
    for (VAR_2 = VAR_1; *VAR_2 != ((void*)0); VAR_2++) {
        const atf_tc_t *VAR_3 = *VAR_2;
        char **VAR_4 = FUNC_1(VAR_3);
        char **VAR_5;

        FUNC_0(VAR_4 != ((void*)0));

        if (VAR_2 != VAR_1)
            FUNC_4("\n");

        for (VAR_5 = VAR_4; *VAR_5 != ((void*)0); VAR_5 += 2) {
            if (FUNC_5(*VAR_5, "ident") == 0) {
                FUNC_4("ident: %s\n", *(VAR_5 + 1));
                break;
            }
        }

        for (VAR_5 = VAR_4; *VAR_5 != ((void*)0); VAR_5 += 2) {
            if (FUNC_5(*VAR_5, "ident") != 0) {
                FUNC_4("%s: %s\n", *VAR_5, *(VAR_5 + 1));
            }
        }

        FUNC_3(VAR_4);
    }
}

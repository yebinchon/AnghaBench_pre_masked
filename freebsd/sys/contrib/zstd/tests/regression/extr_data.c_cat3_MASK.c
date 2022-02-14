
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (size_t const) ;
 int FUNC_2 (char* const,char const*) ;
 size_t const FUNC_3 (char* const) ;

__attribute__((used)) static char* FUNC_4(char const* VAR_0, char const* VAR_1, char const* VAR_2) {
    size_t const VAR_3 = FUNC_3(VAR_0);
    size_t const VAR_4 = FUNC_3(VAR_1);
    size_t const VAR_5 = VAR_2 == ((void*)0) ? 0 : FUNC_3(VAR_2);
    size_t const VAR_6 = VAR_3 + VAR_4 + VAR_5 + 1;
    char* const VAR_7 = (char*)FUNC_1(VAR_6);
    if (VAR_7 == ((void*)0))
        return ((void*)0);
    FUNC_2(VAR_7, VAR_0);
    FUNC_2(VAR_7 + VAR_3, VAR_1);
    if (VAR_2 != ((void*)0))
        FUNC_2(VAR_7 + VAR_3 + VAR_4, VAR_2);
    FUNC_0(FUNC_3(VAR_7) == VAR_3 + VAR_4 + VAR_5);
    return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const* const*,char**) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static
void
FUNC_3(const char *const *VAR_0, char **VAR_1)
{
    {
        const char *const *VAR_2;
        FUNC_2("Expected arguments:");
        for (VAR_2 = VAR_0; *VAR_2 != ((void*)0); VAR_2++)
            FUNC_2(" '%s'", *VAR_2);
        FUNC_2("\n");
    }

    {
        char **VAR_3;
        FUNC_2("Returned arguments:");
        for (VAR_3 = VAR_1; *VAR_3 != ((void*)0); VAR_3++)
            FUNC_2(" '%s'", *VAR_3);
        FUNC_2("\n");
    }

    if (!FUNC_1(VAR_0, VAR_1))
        FUNC_0("The constructed argv differs from the "
                             "expected values");
}

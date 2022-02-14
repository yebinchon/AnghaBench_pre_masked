
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_CIPHER ;


 int FUNC_0 (void*,char*,char const*,...) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static void FUNC_2(const EVP_CIPHER *VAR_0,
                           const char *VAR_1, const char *VAR_2, void *VAR_3)
{
    if (VAR_0 != ((void*)0)) {
        FUNC_0(VAR_3, "%s\n", FUNC_1(VAR_0));
    } else {
        if (VAR_1 == ((void*)0))
            VAR_1 = "<undefined>";
        if (VAR_2 == ((void*)0))
            VAR_2 = "<undefined>";
        FUNC_0(VAR_3, "%s => %s\n", VAR_1, VAR_2);
    }
}

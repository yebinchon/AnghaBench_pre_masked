
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int buf2 ;
typedef int buf1 ;
struct TYPE_4__ {unsigned char const* string; size_t stringlength; int const* digest; int search_type; } ;
typedef TYPE_1__ OSSL_STORE_SEARCH ;
typedef int EVP_MD ;


 int FUNC_0 (char*,int,char*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (int,int ,char*,char*,char*,char*) ;
 int FUNC_2 (int const*) ;
 size_t FUNC_3 (int const*) ;
 TYPE_1__* FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;

OSSL_STORE_SEARCH *FUNC_6(const EVP_MD *VAR_4,
                                                        const unsigned char
                                                        *VAR_5, size_t VAR_6)
{
    OSSL_STORE_SEARCH *VAR_7 = FUNC_4(sizeof(*VAR_7));

    if (VAR_7 == ((void*)0)) {
        FUNC_5(VAR_1,
                      VAR_0);
        return ((void*)0);
    }

    if (VAR_4 != ((void*)0) && VAR_6 != (size_t)FUNC_3(VAR_4)) {
        char VAR_8[20], VAR_9[20];

        FUNC_0(VAR_8, sizeof(VAR_8), "%d", FUNC_3(VAR_4));
        FUNC_0(VAR_9, sizeof(VAR_9), "%zu", VAR_6);
        FUNC_5(VAR_1,
                      VAR_2);
        FUNC_1(5, FUNC_2(VAR_4), " size is ", VAR_8,
                           ", fingerprint size is ", VAR_9);
    }

    VAR_7->search_type = VAR_3;
    VAR_7->digest = VAR_4;
    VAR_7->string = VAR_5;
    VAR_7->stringlength = VAR_6;
    return VAR_7;
}

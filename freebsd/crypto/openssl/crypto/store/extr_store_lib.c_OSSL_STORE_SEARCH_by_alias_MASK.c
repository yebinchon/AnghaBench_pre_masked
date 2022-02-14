
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char const* string; int stringlength; int search_type; } ;
typedef TYPE_1__ OSSL_STORE_SEARCH ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char const*) ;

OSSL_STORE_SEARCH *FUNC_3(const char *VAR_3)
{
    OSSL_STORE_SEARCH *VAR_4 = FUNC_0(sizeof(*VAR_4));

    if (VAR_4 == ((void*)0)) {
        FUNC_1(VAR_1,
                      VAR_0);
        return ((void*)0);
    }

    VAR_4->search_type = VAR_2;
    VAR_4->string = (const unsigned char *)VAR_3;
    VAR_4->stringlength = FUNC_2(VAR_3);
    return VAR_4;
}

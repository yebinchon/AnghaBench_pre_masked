
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* scheme; int * engine; } ;
typedef TYPE_1__ OSSL_STORE_LOADER ;
typedef int ENGINE ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;

OSSL_STORE_LOADER *FUNC_2(ENGINE *VAR_3, const char *VAR_4)
{
    OSSL_STORE_LOADER *VAR_5 = ((void*)0);







    if (VAR_4 == ((void*)0)) {
        FUNC_1(VAR_1,
                      VAR_2);
        return ((void*)0);
    }

    if ((VAR_5 = FUNC_0(sizeof(*VAR_5))) == ((void*)0)) {
        FUNC_1(VAR_1, VAR_0);
        return ((void*)0);
    }

    VAR_5->engine = VAR_3;
    VAR_5->scheme = VAR_4;
    return VAR_5;
}

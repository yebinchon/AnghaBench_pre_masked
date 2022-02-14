
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int * name; } ;
typedef TYPE_1__ RSA_METHOD ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (char const*) ;
 TYPE_1__* FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;

RSA_METHOD *FUNC_4(const char *VAR_2, int VAR_3)
{
    RSA_METHOD *VAR_4 = FUNC_2(sizeof(*VAR_4));

    if (VAR_4 != ((void*)0)) {
        VAR_4->flags = VAR_3;

        VAR_4->name = FUNC_1(VAR_2);
        if (VAR_4->name != ((void*)0))
            return VAR_4;

        FUNC_0(VAR_4);
    }

    FUNC_3(VAR_1, VAR_0);
    return ((void*)0);
}

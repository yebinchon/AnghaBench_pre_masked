
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; scalar_t__ pkey_type; } ;
typedef TYPE_1__ EVP_MD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int,char const*) ;
 char const* FUNC_1 (scalar_t__) ;
 char const* FUNC_2 (scalar_t__) ;

int FUNC_3(const EVP_MD *VAR_2)
{
    int VAR_3;
    const char *VAR_4;

    VAR_4 = FUNC_2(VAR_2->type);
    VAR_3 = FUNC_0(VAR_4, VAR_1, (const char *)VAR_2);
    if (VAR_3 == 0)
        return 0;
    VAR_3 = FUNC_0(FUNC_1(VAR_2->type), VAR_1,
                     (const char *)VAR_2);
    if (VAR_3 == 0)
        return 0;

    if (VAR_2->pkey_type && VAR_2->type != VAR_2->pkey_type) {
        VAR_3 = FUNC_0(FUNC_2(VAR_2->pkey_type),
                         VAR_1 | VAR_0, VAR_4);
        if (VAR_3 == 0)
            return 0;
        VAR_3 = FUNC_0(FUNC_1(VAR_2->pkey_type),
                         VAR_1 | VAR_0, VAR_4);
    }
    return VAR_3;
}

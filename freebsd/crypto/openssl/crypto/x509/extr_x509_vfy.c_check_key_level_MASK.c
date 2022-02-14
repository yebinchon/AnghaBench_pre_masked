
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* param; } ;
typedef TYPE_2__ X509_STORE_CTX ;
typedef int X509 ;
struct TYPE_4__ {int auth_level; } ;
typedef int EVP_PKEY ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int *) ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static int FUNC_2(X509_STORE_CTX *VAR_2, X509 *VAR_3)
{
    EVP_PKEY *VAR_4 = FUNC_1(VAR_3);
    int VAR_5 = VAR_2->param->auth_level;







    if (VAR_5 <= 0)
        return 1;


    if (VAR_4 == ((void*)0))
        return 0;

    if (VAR_5 > VAR_0)
        VAR_5 = VAR_0;

    return FUNC_0(VAR_4) >= VAR_1[VAR_5 - 1];
}

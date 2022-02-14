
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_ATTRIBUTE ;
struct TYPE_3__ {int attributes; } ;
typedef TYPE_1__ EVP_PKEY ;


 scalar_t__ FUNC_0 (int *,int *) ;

int FUNC_1(EVP_PKEY *VAR_0, X509_ATTRIBUTE *VAR_1)
{
    if (FUNC_0(&VAR_0->attributes, VAR_1))
        return 1;
    return 0;
}

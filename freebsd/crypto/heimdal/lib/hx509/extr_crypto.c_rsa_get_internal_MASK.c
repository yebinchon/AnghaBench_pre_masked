
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* hx509_private_key ;
typedef int hx509_context ;
struct TYPE_4__ {int rsa; } ;
struct TYPE_5__ {TYPE_1__ private_key; } ;
typedef int BIGNUM ;


 int * FUNC_0 (int const*) ;
 int FUNC_1 (int ,int const**,int const**,int *) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static BIGNUM *
FUNC_3(hx509_context VAR_0,
   hx509_private_key VAR_1,
   const char *VAR_2)
{
    const BIGNUM *VAR_3;

    if (FUNC_2(VAR_2, "rsa-modulus") == 0) {
 FUNC_1(VAR_1->private_key.rsa, &VAR_3, ((void*)0), ((void*)0));
    } else if (FUNC_2(VAR_2, "rsa-exponent") == 0) {
 FUNC_1(VAR_1->private_key.rsa, ((void*)0), &VAR_3, ((void*)0));
    } else
 return ((void*)0);
    return FUNC_0(VAR_3);
}

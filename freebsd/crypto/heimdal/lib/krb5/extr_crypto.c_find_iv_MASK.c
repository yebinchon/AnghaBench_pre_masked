
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int flags; } ;
typedef TYPE_1__ krb5_crypto_iov ;



__attribute__((used)) static krb5_crypto_iov *
FUNC_0(krb5_crypto_iov *VAR_0, size_t VAR_1, unsigned VAR_2)
{
    size_t VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
 if (VAR_0[VAR_3].flags == VAR_2)
     return &VAR_0[VAR_3];
    return ((void*)0);
}

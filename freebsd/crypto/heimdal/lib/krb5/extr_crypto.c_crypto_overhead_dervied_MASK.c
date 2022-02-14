
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _krb5_encryption_type {int padsize; scalar_t__ confoundersize; scalar_t__ checksum; scalar_t__ keyed_checksum; } ;
typedef TYPE_1__* krb5_crypto ;
typedef int krb5_context ;
struct TYPE_3__ {struct _krb5_encryption_type* et; } ;


 size_t FUNC_0 (scalar_t__) ;

__attribute__((used)) static size_t
FUNC_1 (krb5_context VAR_0,
    krb5_crypto VAR_1)
{
    struct _krb5_encryption_type *VAR_2 = VAR_1->et;
    size_t VAR_3;

    if (VAR_2->keyed_checksum)
 VAR_3 = FUNC_0(VAR_2->keyed_checksum);
    else
 VAR_3 = FUNC_0(VAR_2->checksum);
    VAR_3 += VAR_2->confoundersize;
    if (VAR_2->padsize > 1)
 VAR_3 += VAR_2->padsize;
    return VAR_3;
}

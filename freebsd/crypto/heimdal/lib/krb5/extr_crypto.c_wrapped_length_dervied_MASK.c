
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct _krb5_encryption_type {size_t padsize; size_t confoundersize; TYPE_1__* checksum; TYPE_2__* keyed_checksum; } ;
typedef TYPE_3__* krb5_crypto ;
typedef int krb5_context ;
struct TYPE_7__ {struct _krb5_encryption_type* et; } ;
struct TYPE_6__ {scalar_t__ checksumsize; } ;
struct TYPE_5__ {scalar_t__ checksumsize; } ;



__attribute__((used)) static size_t
FUNC_0 (krb5_context VAR_0,
   krb5_crypto VAR_1,
   size_t VAR_2)
{
    struct _krb5_encryption_type *VAR_3 = VAR_1->et;
    size_t VAR_4 = VAR_3->padsize;
    size_t VAR_5;

    VAR_5 = VAR_3->confoundersize + VAR_2;
    VAR_5 = (VAR_5 + VAR_4 - 1) / VAR_4 * VAR_4;
    if (VAR_3->keyed_checksum)
 VAR_5 += VAR_3->keyed_checksum->checksumsize;
    else
 VAR_5 += VAR_3->checksum->checksumsize;
    return VAR_5;
}

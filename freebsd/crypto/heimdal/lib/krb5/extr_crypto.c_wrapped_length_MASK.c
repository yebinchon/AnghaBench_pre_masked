
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _krb5_encryption_type {size_t padsize; size_t confoundersize; int checksum; } ;
typedef TYPE_1__* krb5_crypto ;
typedef int krb5_context ;
struct TYPE_3__ {struct _krb5_encryption_type* et; } ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static size_t
FUNC_1 (krb5_context VAR_0,
  krb5_crypto VAR_1,
  size_t VAR_2)
{
    struct _krb5_encryption_type *VAR_3 = VAR_1->et;
    size_t VAR_4 = VAR_3->padsize;
    size_t VAR_5 = FUNC_0(VAR_3->checksum);
    size_t VAR_6;

    VAR_6 = VAR_3->confoundersize + VAR_5 + VAR_2;
    VAR_6 = (VAR_6 + VAR_4 - 1) / VAR_4 * VAR_4;
    return VAR_6;
}

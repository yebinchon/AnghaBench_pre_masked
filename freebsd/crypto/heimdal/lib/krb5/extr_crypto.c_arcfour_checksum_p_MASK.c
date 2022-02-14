
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct _krb5_checksum_type {scalar_t__ type; } ;
typedef TYPE_3__* krb5_crypto ;
struct TYPE_6__ {TYPE_1__* key; } ;
struct TYPE_7__ {TYPE_2__ key; } ;
struct TYPE_5__ {scalar_t__ keytype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct _krb5_checksum_type *VAR_2, krb5_crypto VAR_3)
{
    return (VAR_2->type == VAR_0) &&
 (VAR_3->key.key->keytype == VAR_1);
}

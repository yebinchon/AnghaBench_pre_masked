
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* other; int * data; } ;
struct TYPE_11__ {TYPE_3__ d; } ;
struct TYPE_8__ {int * octet_string; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__ value; } ;
typedef TYPE_4__ PKCS7 ;
typedef int ASN1_OCTET_STRING ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static ASN1_OCTET_STRING *FUNC_2(PKCS7 *VAR_1)
{
    if (FUNC_0(VAR_1))
        return VAR_1->d.data;
    if (FUNC_1(VAR_1) && VAR_1->d.other
        && (VAR_1->d.other->type == VAR_0))
        return VAR_1->d.other->value.octet_string;
    return ((void*)0);
}

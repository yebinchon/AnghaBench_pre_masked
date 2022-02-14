
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* parameter; int * algorithm; } ;
typedef TYPE_3__ X509_ALGOR ;
struct TYPE_6__ {void* ptr; } ;
struct TYPE_5__ {int type; TYPE_2__ value; } ;
typedef int ASN1_OBJECT ;


 int VAR_0 ;

void FUNC_0(const ASN1_OBJECT **VAR_1, int *VAR_2,
                     const void **VAR_3, const X509_ALGOR *VAR_4)
{
    if (VAR_1)
        *VAR_1 = VAR_4->algorithm;
    if (VAR_2) {
        if (VAR_4->parameter == ((void*)0)) {
            *VAR_2 = VAR_0;
            return;
        } else
            *VAR_2 = VAR_4->parameter->type;
        if (VAR_3)
            *VAR_3 = VAR_4->parameter->value.ptr;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t length; unsigned char const* data; } ;
struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_1__ EVP_PKEY ;
typedef TYPE_2__ ASN1_OCTET_STRING ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_1__ const*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;

const unsigned char *FUNC_2(const EVP_PKEY *VAR_3, size_t *VAR_4)
{
    ASN1_OCTET_STRING *VAR_5 = ((void*)0);

    if (VAR_3->type != VAR_1) {
        FUNC_1(VAR_0, VAR_2);
        return ((void*)0);
    }
    VAR_5 = FUNC_0(VAR_3);
    *VAR_4 = VAR_5->length;
    return VAR_5->data;
}

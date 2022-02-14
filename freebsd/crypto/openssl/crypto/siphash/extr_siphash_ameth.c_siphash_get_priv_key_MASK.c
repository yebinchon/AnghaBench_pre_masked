
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ptr; } ;
struct TYPE_5__ {TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef int ASN1_OCTET_STRING ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t VAR_0 ;
 int FUNC_2 (unsigned char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(const EVP_PKEY *VAR_1, unsigned char *VAR_2,
                                size_t *VAR_3)
{
    ASN1_OCTET_STRING *VAR_4 = (ASN1_OCTET_STRING *)VAR_1->pkey.ptr;

    if (VAR_2 == ((void*)0)) {
        *VAR_3 = VAR_0;
        return 1;
    }

    if (VAR_4 == ((void*)0) || *VAR_3 < VAR_0)
        return 0;

    FUNC_2(VAR_2, FUNC_0(VAR_4), FUNC_1(VAR_4));
    *VAR_3 = VAR_0;

    return 1;
}

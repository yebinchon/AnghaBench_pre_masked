
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data; } ;
typedef TYPE_1__ BUF_MEM ;
typedef int BIO ;
typedef int ASN1_ITEM ;


 void* FUNC_0 (void*,unsigned char const**,int,int const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__**) ;

void *FUNC_3(const ASN1_ITEM *VAR_0, BIO *VAR_1, void *VAR_2)
{
    BUF_MEM *VAR_3 = ((void*)0);
    const unsigned char *VAR_4;
    void *VAR_5 = ((void*)0);
    int VAR_6;

    VAR_6 = FUNC_2(VAR_1, &VAR_3);
    if (VAR_6 < 0)
        goto err;

    VAR_4 = (const unsigned char *)VAR_3->data;
    VAR_5 = FUNC_0(VAR_2, &VAR_4, VAR_6, VAR_0);
 err:
    FUNC_1(VAR_3);
    return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_3__ {int length; int data; } ;
typedef int EVP_MD ;
typedef TYPE_1__ ASN1_BIT_STRING ;


 int FUNC_0 (int ,int ,unsigned char*,unsigned int*,int const*,int *) ;
 TYPE_1__* FUNC_1 (int const*) ;

int FUNC_2(const X509 *VAR_0, const EVP_MD *VAR_1,
                       unsigned char *VAR_2, unsigned int *VAR_3)
{
    ASN1_BIT_STRING *VAR_4;
    VAR_4 = FUNC_1(VAR_0);
    if (!VAR_4)
        return 0;
    return FUNC_0(VAR_4->data, VAR_4->length, VAR_2, VAR_3, VAR_1, ((void*)0));
}

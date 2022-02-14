
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* data; int length; } ;
typedef TYPE_1__ ASN1_STRING ;
typedef int ASN1_ITEM ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,unsigned char const**,int ,int const*) ;
 int FUNC_1 (int ,int ) ;

void *FUNC_2(const ASN1_STRING *VAR_2, const ASN1_ITEM *VAR_3)
{
    const unsigned char *VAR_4;
    void *VAR_5;

    VAR_4 = VAR_2->data;
    if ((VAR_5 = FUNC_0(((void*)0), &VAR_4, VAR_2->length, VAR_3)) == ((void*)0))
        FUNC_1(VAR_0, VAR_1);
    return VAR_5;
}

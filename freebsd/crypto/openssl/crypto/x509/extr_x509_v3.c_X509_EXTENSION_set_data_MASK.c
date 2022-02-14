
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int value; } ;
typedef TYPE_1__ X509_EXTENSION ;
struct TYPE_6__ {int length; int data; } ;
typedef TYPE_2__ ASN1_OCTET_STRING ;


 int FUNC_0 (int *,int ,int ) ;

int FUNC_1(X509_EXTENSION *VAR_0, ASN1_OCTET_STRING *VAR_1)
{
    int VAR_2;

    if (VAR_0 == ((void*)0))
        return 0;
    VAR_2 = FUNC_0(&VAR_0->value, VAR_1->data, VAR_1->length);
    if (!VAR_2)
        return 0;
    return 1;
}

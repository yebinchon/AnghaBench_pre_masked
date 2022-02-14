
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509_OBJECT ;
typedef int X509_NAME ;
typedef int X509_LOOKUP_TYPE ;
struct TYPE_6__ {TYPE_1__* method; } ;
typedef TYPE_2__ X509_LOOKUP ;
struct TYPE_5__ {int (* get_by_issuer_serial ) (TYPE_2__*,int ,int *,int *,int *) ;} ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (TYPE_2__*,int ,int *,int *,int *) ;

int FUNC_1(X509_LOOKUP *VAR_0, X509_LOOKUP_TYPE VAR_1,
                                 X509_NAME *VAR_2, ASN1_INTEGER *VAR_3,
                                 X509_OBJECT *VAR_4)
{
    if ((VAR_0->method == ((void*)0)) || (VAR_0->method->get_by_issuer_serial == ((void*)0)))
        return 0;
    return VAR_0->method->get_by_issuer_serial(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}

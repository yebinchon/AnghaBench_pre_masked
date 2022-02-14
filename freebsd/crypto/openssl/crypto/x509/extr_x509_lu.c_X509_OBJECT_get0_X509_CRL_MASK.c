
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * crl; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ data; } ;
typedef TYPE_2__ X509_OBJECT ;
typedef int X509_CRL ;


 scalar_t__ VAR_0 ;

X509_CRL *FUNC_0(X509_OBJECT *VAR_1)
{
    if (VAR_1 == ((void*)0) || VAR_1->type != VAR_0)
        return ((void*)0);
    return VAR_1->data.crl;
}

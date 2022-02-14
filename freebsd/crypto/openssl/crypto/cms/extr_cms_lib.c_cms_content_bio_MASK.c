
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ flags; int length; int data; } ;
typedef int CMS_ContentInfo ;
typedef int BIO ;
typedef TYPE_1__ ASN1_OCTET_STRING ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__** FUNC_4 (int *) ;

BIO *FUNC_5(CMS_ContentInfo *VAR_1)
{
    ASN1_OCTET_STRING **VAR_2 = FUNC_4(VAR_1);
    if (!VAR_2)
        return ((void*)0);

    if (!*VAR_2)
        return FUNC_0(FUNC_3());



    if (!*VAR_2 || ((*VAR_2)->flags == VAR_0))
        return FUNC_0(FUNC_2());

    return FUNC_1((*VAR_2)->data, (*VAR_2)->length);
}

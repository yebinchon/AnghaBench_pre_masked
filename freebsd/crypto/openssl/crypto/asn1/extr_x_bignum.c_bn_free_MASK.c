
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; } ;
typedef int BIGNUM ;
typedef int ASN1_VALUE ;
typedef TYPE_1__ ASN1_ITEM ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(ASN1_VALUE **VAR_1, const ASN1_ITEM *VAR_2)
{
    if (!*VAR_1)
        return;
    if (VAR_2->size & VAR_0)
        FUNC_0((BIGNUM *)*VAR_1);
    else
        FUNC_1((BIGNUM *)*VAR_1);
    *VAR_1 = ((void*)0);
}

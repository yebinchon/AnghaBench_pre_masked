
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ ASN1_STRING ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

void FUNC_1(ASN1_STRING *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return;
    FUNC_0(VAR_1, VAR_1->flags & VAR_0);
}

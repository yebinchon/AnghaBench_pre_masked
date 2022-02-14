
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
typedef TYPE_1__ ASN1_STRING ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;

ASN1_STRING *FUNC_2(int VAR_2)
{
    ASN1_STRING *VAR_3;

    VAR_3 = FUNC_1(sizeof(*VAR_3));
    if (VAR_3 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }
    VAR_3->type = VAR_2;
    return VAR_3;
}

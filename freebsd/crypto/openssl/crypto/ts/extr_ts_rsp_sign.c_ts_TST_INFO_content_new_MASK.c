
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * other; } ;
struct TYPE_9__ {TYPE_1__ d; int type; } ;
typedef TYPE_2__ PKCS7 ;
typedef int ASN1_OCTET_STRING ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 () ;
 int FUNC_7 (TYPE_2__*,TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_8(PKCS7 *VAR_2)
{
    PKCS7 *VAR_3 = ((void*)0);
    ASN1_OCTET_STRING *VAR_4 = ((void*)0);


    if ((VAR_3 = FUNC_6()) == ((void*)0))
        goto err;
    if ((VAR_3->d.other = FUNC_2()) == ((void*)0))
        goto err;
    VAR_3->type = FUNC_4(VAR_0);
    if ((VAR_4 = FUNC_1()) == ((void*)0))
        goto err;
    FUNC_3(VAR_3->d.other, VAR_1, VAR_4);
    VAR_4 = ((void*)0);


    if (!FUNC_7(VAR_2, VAR_3))
        goto err;

    return 1;
 err:
    FUNC_0(VAR_4);
    FUNC_5(VAR_3);
    return 0;
}

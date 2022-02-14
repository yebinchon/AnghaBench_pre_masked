
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* authsafes; int version; } ;
struct TYPE_7__ {int * data; } ;
struct TYPE_8__ {TYPE_1__ d; int type; } ;
typedef TYPE_3__ PKCS12 ;


 int FUNC_0 (int ,int) ;
 int * FUNC_1 () ;
 int VAR_0 ;

 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 () ;
 int FUNC_5 (int ,int ) ;

PKCS12 *FUNC_6(int VAR_3)
{
    PKCS12 *VAR_4;

    if ((VAR_4 = FUNC_4()) == ((void*)0)) {
        FUNC_5(VAR_1, VAR_0);
        return ((void*)0);
    }
    if (!FUNC_0(VAR_4->version, 3))
        goto err;
    VAR_4->authsafes->type = FUNC_2(VAR_3);
    switch (VAR_3) {
    case 128:
        if ((VAR_4->authsafes->d.data = FUNC_1()) == ((void*)0)) {
            FUNC_5(VAR_1, VAR_0);
            goto err;
        }
        break;
    default:
        FUNC_5(VAR_1, VAR_2);
        goto err;
    }
    return VAR_4;

 err:
    FUNC_3(VAR_4);
    return ((void*)0);
}

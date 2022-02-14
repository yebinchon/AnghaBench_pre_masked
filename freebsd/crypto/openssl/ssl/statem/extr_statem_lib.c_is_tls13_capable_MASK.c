
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* cert; int * psk_find_session_cb; int * psk_server_callback; } ;
struct TYPE_8__ {TYPE_1__* pkeys; int * cert_cb; } ;
struct TYPE_7__ {int privatekey; } ;
typedef TYPE_3__ SSL ;
typedef int EC_KEY ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;

 int VAR_0 ;



 int VAR_1 ;
 int FUNC_3 (TYPE_3__ const*,int) ;
 scalar_t__ FUNC_4 (TYPE_3__ const*,int) ;

__attribute__((used)) static int FUNC_5(const SSL *VAR_2)
{
    int VAR_3;

    int VAR_4;
    EC_KEY *VAR_5;



    if (VAR_2->psk_server_callback != ((void*)0))
        return 1;


    if (VAR_2->psk_find_session_cb != ((void*)0) || VAR_2->cert->cert_cb != ((void*)0))
        return 1;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {

        switch (VAR_3) {
        case 131:
        case 130:
        case 129:
        case 128:
            continue;
        default:
            break;
        }
        if (!FUNC_3(VAR_2, VAR_3))
            continue;

        if (VAR_3 != VAR_0)
            return 1;





        VAR_5 = FUNC_2(VAR_2->cert->pkeys[VAR_0].privatekey);
        if (VAR_5 == ((void*)0))
            continue;
        VAR_4 = FUNC_0(FUNC_1(VAR_5));
        if (FUNC_4(VAR_2, VAR_4))
            return 1;



    }

    return 0;
}

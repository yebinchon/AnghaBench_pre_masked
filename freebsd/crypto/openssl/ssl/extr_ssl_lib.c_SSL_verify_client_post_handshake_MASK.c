
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int post_handshake_auth; int server; } ;
typedef TYPE_1__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(SSL *VAR_9)
{
    if (!FUNC_0(VAR_9)) {
        FUNC_2(VAR_1, VAR_8);
        return 0;
    }
    if (!VAR_9->server) {
        FUNC_2(VAR_1, VAR_4);
        return 0;
    }

    if (!FUNC_1(VAR_9)) {
        FUNC_2(VAR_1, VAR_7);
        return 0;
    }

    switch (VAR_9->post_handshake_auth) {
    case 130:
        FUNC_2(VAR_1, VAR_2);
        return 0;
    default:
    case 131:
        FUNC_2(VAR_1, VAR_0);
        return 0;
    case 132:
        break;
    case 128:
        FUNC_2(VAR_1, VAR_5);
        return 0;
    case 129:
        FUNC_2(VAR_1, VAR_6);
        return 0;
    }

    VAR_9->post_handshake_auth = 128;


    if (!FUNC_4(VAR_9)) {
        VAR_9->post_handshake_auth = 132;
        FUNC_2(VAR_1, VAR_3);
        return 0;
    }

    FUNC_3(VAR_9, 1);
    return 1;
}

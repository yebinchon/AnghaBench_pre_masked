
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ ticket_expected; } ;
struct TYPE_14__ {int version; int lock; TYPE_2__* session_ctx; int (* generate_session_id ) (TYPE_4__*,int ,unsigned int*) ;TYPE_1__ ext; } ;
struct TYPE_13__ {unsigned int session_id_length; int session_id; } ;
struct TYPE_12__ {int lock; int (* generate_session_id ) (TYPE_4__*,int ,unsigned int*) ;} ;
typedef TYPE_3__ SSL_SESSION ;
typedef TYPE_4__ SSL ;
typedef int (* GEN_SESSION_CB ) (TYPE_4__*,int ,unsigned int*) ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;



 unsigned int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ,unsigned int) ;
 int FUNC_3 (TYPE_4__*,int ,int ,int ) ;




 int FUNC_4 (TYPE_4__*,int ,unsigned int*) ;
 int FUNC_5 (int ,int ,unsigned int) ;

int FUNC_6(SSL *VAR_7, SSL_SESSION *VAR_8)
{
    unsigned int VAR_9;
    GEN_SESSION_CB VAR_10 = FUNC_4;

    switch (VAR_7->version) {
    case 132:
    case 128:
    case 131:
    case 130:
    case 129:
    case 134:
    case 133:
    case 135:
        VAR_8->session_id_length = VAR_0;
        break;
    default:
        FUNC_3(VAR_7, VAR_1, VAR_2,
                 VAR_6);
        return 0;
    }
    if (VAR_7->ext.ticket_expected) {
        VAR_8->session_id_length = 0;
        return 1;
    }


    FUNC_0(VAR_7->lock);
    FUNC_0(VAR_7->session_ctx->lock);
    if (VAR_7->generate_session_id)
        VAR_10 = VAR_7->generate_session_id;
    else if (VAR_7->session_ctx->generate_session_id)
        VAR_10 = VAR_7->session_ctx->generate_session_id;
    FUNC_1(VAR_7->session_ctx->lock);
    FUNC_1(VAR_7->lock);

    FUNC_5(VAR_8->session_id, 0, VAR_8->session_id_length);
    VAR_9 = (int)VAR_8->session_id_length;
    if (!VAR_10(VAR_7, VAR_8->session_id, &VAR_9)) {

        FUNC_3(VAR_7, VAR_1, VAR_2,
                 VAR_3);
        return 0;
    }




    if (VAR_9 == 0 || VAR_9 > VAR_8->session_id_length) {

        FUNC_3(VAR_7, VAR_1, VAR_2,
                 VAR_5);
        return 0;
    }
    VAR_8->session_id_length = VAR_9;

    if (FUNC_2(VAR_7, VAR_8->session_id,
                                    (unsigned int)VAR_8->session_id_length)) {
        FUNC_3(VAR_7, VAR_1, VAR_2,
                 VAR_4);
        return 0;
    }

    return 1;
}

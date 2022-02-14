
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int sid_ctx_length; TYPE_2__* s3; int version; TYPE_3__* session; int sid_ctx; TYPE_1__* session_ctx; } ;
struct TYPE_15__ {scalar_t__ timeout; int sid_ctx_length; int flags; int verify_result; int ssl_version; int sid_ctx; scalar_t__ session_id_length; } ;
struct TYPE_14__ {int flags; } ;
struct TYPE_13__ {scalar_t__ session_timeout; } ;
typedef TYPE_3__ SSL_SESSION ;
typedef TYPE_4__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 () ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;

int FUNC_7(SSL *VAR_7, int VAR_8)
{


    SSL_SESSION *VAR_9 = ((void*)0);

    if ((VAR_9 = FUNC_2()) == ((void*)0)) {
        FUNC_4(VAR_7, VAR_2, VAR_3,
                 VAR_1);
        return 0;
    }


    if (VAR_7->session_ctx->session_timeout == 0)
        VAR_9->timeout = FUNC_3(VAR_7);
    else
        VAR_9->timeout = VAR_7->session_ctx->session_timeout;

    FUNC_1(VAR_7->session);
    VAR_7->session = ((void*)0);

    if (VAR_8) {
        if (FUNC_0(VAR_7)) {




            VAR_9->session_id_length = 0;
        } else if (!FUNC_6(VAR_7, VAR_9)) {

            FUNC_1(VAR_9);
            return 0;
        }

    } else {
        VAR_9->session_id_length = 0;
    }

    if (VAR_7->sid_ctx_length > sizeof(VAR_9->sid_ctx)) {
        FUNC_4(VAR_7, VAR_2, VAR_3,
                 VAR_0);
        FUNC_1(VAR_9);
        return 0;
    }
    FUNC_5(VAR_9->sid_ctx, VAR_7->sid_ctx, VAR_7->sid_ctx_length);
    VAR_9->sid_ctx_length = VAR_7->sid_ctx_length;
    VAR_7->session = VAR_9;
    VAR_9->ssl_version = VAR_7->version;
    VAR_9->verify_result = VAR_6;


    if (VAR_7->s3->flags & VAR_5)
        VAR_9->flags |= VAR_4;

    return 1;
}

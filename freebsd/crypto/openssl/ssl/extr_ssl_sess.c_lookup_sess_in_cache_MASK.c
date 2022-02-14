
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_16__ {TYPE_11__* session_ctx; int version; } ;
struct TYPE_15__ {size_t session_id_length; int session_id; int ssl_version; } ;
struct TYPE_14__ {int sess_cb_hit; int sess_miss; } ;
struct TYPE_13__ {int session_cache_mode; TYPE_1__ stats; TYPE_2__* (* get_session_cb ) (TYPE_3__*,unsigned char const*,size_t,int*) ;int lock; int sessions; } ;
typedef TYPE_2__ SSL_SESSION ;
typedef TYPE_3__ SSL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_11__*,TYPE_2__*) ;
 size_t VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,unsigned char const*,size_t) ;
 int FUNC_6 (int) ;
 TYPE_2__* FUNC_7 (TYPE_3__*,unsigned char const*,size_t,int*) ;
 int FUNC_8 (int *) ;

SSL_SESSION *FUNC_9(SSL *VAR_3, const unsigned char *VAR_4,
                                  size_t VAR_5)
{
    SSL_SESSION *VAR_6 = ((void*)0);

    if ((VAR_3->session_ctx->session_cache_mode
         & VAR_1) == 0) {
        SSL_SESSION VAR_7;

        VAR_7.ssl_version = VAR_3->version;
        if (!FUNC_6(VAR_5 <= VAR_0))
            return ((void*)0);

        FUNC_5(VAR_7.session_id, VAR_4, VAR_5);
        VAR_7.session_id_length = VAR_5;

        FUNC_0(VAR_3->session_ctx->lock);
        VAR_6 = FUNC_4(VAR_3->session_ctx->sessions, &VAR_7);
        if (VAR_6 != ((void*)0)) {

            FUNC_3(VAR_6);
        }
        FUNC_1(VAR_3->session_ctx->lock);
        if (VAR_6 == ((void*)0))
            FUNC_8(&VAR_3->session_ctx->stats.sess_miss);
    }

    if (VAR_6 == ((void*)0) && VAR_3->session_ctx->get_session_cb != ((void*)0)) {
        int VAR_8 = 1;

        VAR_6 = VAR_3->session_ctx->get_session_cb(VAR_3, VAR_4, VAR_5, &VAR_8);

        if (VAR_6 != ((void*)0)) {
            FUNC_8(&VAR_3->session_ctx->stats.sess_cb_hit);
            if (VAR_8)
                FUNC_3(VAR_6);





            if ((VAR_3->session_ctx->session_cache_mode &
                 VAR_2) == 0) {





                (void)FUNC_2(VAR_3->session_ctx, VAR_6);
            }
        }
    }

    return VAR_6;
}

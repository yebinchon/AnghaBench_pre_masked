
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ early_data_ok; } ;
struct TYPE_17__ {TYPE_6__ ext; TYPE_5__* session; int hit; TYPE_3__* s3; TYPE_2__* ctx; } ;
struct TYPE_14__ {unsigned char alpn_selected_len; int * alpn_selected; } ;
struct TYPE_15__ {TYPE_4__ ext; } ;
struct TYPE_13__ {unsigned char alpn_selected_len; scalar_t__ npn_seen; int * alpn_selected; scalar_t__ alpn_proposed_len; int * alpn_proposed; } ;
struct TYPE_11__ {int (* alpn_select_cb ) (TYPE_7__*,unsigned char const**,unsigned char*,int *,unsigned int,int ) ;int alpn_select_cb_arg; } ;
struct TYPE_12__ {TYPE_1__ ext; } ;
typedef TYPE_7__ SSL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (unsigned char const*,unsigned char) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_7__*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (unsigned char const*,int *,unsigned char) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_7__*,unsigned char const**,unsigned char*,int *,unsigned int,int ) ;

int FUNC_6(SSL *VAR_7)
{
    const unsigned char *VAR_8 = ((void*)0);
    unsigned char VAR_9 = 0;

    if (VAR_7->ctx->ext.alpn_select_cb != ((void*)0) && VAR_7->s3->alpn_proposed != ((void*)0)) {
        int VAR_10 = VAR_7->ctx->ext.alpn_select_cb(VAR_7, &VAR_8, &VAR_9,
                                           VAR_7->s3->alpn_proposed,
                                           (unsigned int)VAR_7->s3->alpn_proposed_len,
                                           VAR_7->ctx->ext.alpn_select_cb_arg);

        if (VAR_10 == VAR_6) {
            FUNC_0(VAR_7->s3->alpn_selected);
            VAR_7->s3->alpn_selected = FUNC_1(VAR_8, VAR_9);
            if (VAR_7->s3->alpn_selected == ((void*)0)) {
                FUNC_2(VAR_7, VAR_1, VAR_3,
                         VAR_0);
                return 0;
            }
            VAR_7->s3->alpn_selected_len = VAR_9;


            VAR_7->s3->npn_seen = 0;



            if (VAR_7->session->ext.alpn_selected == ((void*)0)
                        || VAR_9 != VAR_7->session->ext.alpn_selected_len
                        || FUNC_3(VAR_8, VAR_7->session->ext.alpn_selected,
                                  VAR_9) != 0) {

                VAR_7->ext.early_data_ok = 0;

                if (!VAR_7->hit) {





                    if (!FUNC_4(VAR_7->session->ext.alpn_selected == ((void*)0))) {
                        FUNC_2(VAR_7, VAR_1,
                                 VAR_3,
                                 VAR_0);
                        return 0;
                    }
                    VAR_7->session->ext.alpn_selected = FUNC_1(VAR_8,
                                                                   VAR_9);
                    if (VAR_7->session->ext.alpn_selected == ((void*)0)) {
                        FUNC_2(VAR_7, VAR_1,
                                 VAR_3,
                                 VAR_0);
                        return 0;
                    }
                    VAR_7->session->ext.alpn_selected_len = VAR_9;
                }
            }

            return 1;
        } else if (VAR_10 != VAR_5) {
            FUNC_2(VAR_7, VAR_2, VAR_3,
                     VAR_4);
            return 0;
        }




    }


    if (VAR_7->session->ext.alpn_selected != ((void*)0)) {

        VAR_7->ext.early_data_ok = 0;
    }

    return 1;
}

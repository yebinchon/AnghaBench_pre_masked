
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_8__ {scalar_t__ early_data_ok; } ;
struct TYPE_12__ {TYPE_4__* s3; TYPE_3__* session; int hit; TYPE_1__ ext; } ;
struct TYPE_11__ {size_t alpn_selected_len; int * alpn_selected; int alpn_sent; } ;
struct TYPE_9__ {size_t alpn_selected_len; int * alpn_selected; } ;
struct TYPE_10__ {TYPE_2__ ext; } ;
typedef TYPE_5__ SSL ;
typedef int PACKET ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t) ;
 int * FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,int *,size_t) ;
 int FUNC_4 (int *,size_t*) ;
 int FUNC_5 (int *,size_t*) ;
 size_t FUNC_6 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (TYPE_5__*,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int *,int *,size_t) ;
 int FUNC_9 (int ) ;

int FUNC_10(SSL *VAR_6, PACKET *VAR_7, unsigned int VAR_8, X509 *VAR_9,
                        size_t VAR_10)
{
    size_t VAR_11;


    if (!VAR_6->s3->alpn_sent) {
        FUNC_7(VAR_6, VAR_3, VAR_4,
                 VAR_5);
        return 0;
    }






    if (!FUNC_5(VAR_7, &VAR_11)
        || FUNC_6(VAR_7) != VAR_11 || !FUNC_4(VAR_7, &VAR_11)
        || FUNC_6(VAR_7) != VAR_11) {
        FUNC_7(VAR_6, VAR_1, VAR_4,
                 VAR_5);
        return 0;
    }
    FUNC_0(VAR_6->s3->alpn_selected);
    VAR_6->s3->alpn_selected = FUNC_1(VAR_11);
    if (VAR_6->s3->alpn_selected == ((void*)0)) {
        FUNC_7(VAR_6, VAR_2, VAR_4,
                 VAR_0);
        return 0;
    }
    if (!FUNC_3(VAR_7, VAR_6->s3->alpn_selected, VAR_11)) {
        FUNC_7(VAR_6, VAR_1, VAR_4,
                 VAR_5);
        return 0;
    }
    VAR_6->s3->alpn_selected_len = VAR_11;

    if (VAR_6->session->ext.alpn_selected == ((void*)0)
            || VAR_6->session->ext.alpn_selected_len != VAR_11
            || FUNC_8(VAR_6->session->ext.alpn_selected, VAR_6->s3->alpn_selected, VAR_11)
               != 0) {

        VAR_6->ext.early_data_ok = 0;
    }
    if (!VAR_6->hit) {




        if (!FUNC_9(VAR_6->session->ext.alpn_selected == ((void*)0))) {
            FUNC_7(VAR_6, VAR_2, VAR_4,
                     VAR_0);
            return 0;
        }
        VAR_6->session->ext.alpn_selected =
            FUNC_2(VAR_6->s3->alpn_selected, VAR_6->s3->alpn_selected_len);
        if (VAR_6->session->ext.alpn_selected == ((void*)0)) {
            FUNC_7(VAR_6, VAR_2, VAR_4,
                     VAR_0);
            return 0;
        }
        VAR_6->session->ext.alpn_selected_len = VAR_6->s3->alpn_selected_len;
    }

    return 1;
}

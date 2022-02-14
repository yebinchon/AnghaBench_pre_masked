
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ tls13_cookie_len; } ;
struct TYPE_16__ {scalar_t__ init_num; TYPE_4__* init_buf; TYPE_3__* s3; TYPE_1__ ext; int * enc_write_ctx; } ;
struct TYPE_15__ {scalar_t__ data; } ;
struct TYPE_13__ {int * pkey; } ;
struct TYPE_14__ {TYPE_2__ tmp; } ;
typedef TYPE_5__ SSL ;
typedef int RAW_EXTENSION ;
typedef int PACKET ;
typedef int MSG_PROCESS_RETURN ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_5__*,int *,int ,int *,int ) ;
 int FUNC_4 (TYPE_5__*,unsigned char*,scalar_t__) ;
 int FUNC_5 (TYPE_5__*,int *,int ,int **,int *,int) ;
 int FUNC_6 (TYPE_5__*,int ,int *,int *,int ,int) ;

__attribute__((used)) static MSG_PROCESS_RETURN FUNC_7(SSL *VAR_7,
                                                             PACKET *VAR_8)
{
    RAW_EXTENSION *VAR_9 = ((void*)0);





    FUNC_0(VAR_7->enc_write_ctx);
    VAR_7->enc_write_ctx = ((void*)0);

    if (!FUNC_5(VAR_7, VAR_8, VAR_4,
                                &VAR_9, ((void*)0), 1)
            || !FUNC_6(VAR_7, VAR_4,
                                         VAR_9, ((void*)0), 0, 1)) {

        goto err;
    }

    FUNC_1(VAR_9);
    VAR_9 = ((void*)0);

    if (VAR_7->ext.tls13_cookie_len == 0

        && VAR_7->s3->tmp.pkey != ((void*)0)

        ) {




        FUNC_2(VAR_7, VAR_3,
                 VAR_5,
                 VAR_6);
        goto err;
    }





    if (!FUNC_3(VAR_7, ((void*)0), 0, ((void*)0), 0)) {

        goto err;
    }







    if (!FUNC_4(VAR_7, (unsigned char *)VAR_7->init_buf->data,
                                VAR_7->init_num + VAR_2)) {

        goto err;
    }

    return VAR_1;
 err:
    FUNC_1(VAR_9);
    return VAR_0;
}

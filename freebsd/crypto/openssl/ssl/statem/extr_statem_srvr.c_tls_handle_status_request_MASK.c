
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {int resp; } ;
struct TYPE_18__ {int status_expected; scalar_t__ status_type; TYPE_6__ ocsp; } ;
struct TYPE_19__ {TYPE_7__ ext; TYPE_5__* ctx; TYPE_3__* s3; TYPE_1__* cert; } ;
struct TYPE_15__ {int (* status_cb ) (TYPE_8__*,int ) ;int status_arg; } ;
struct TYPE_16__ {TYPE_4__ ext; } ;
struct TYPE_13__ {int * cert; } ;
struct TYPE_14__ {TYPE_2__ tmp; } ;
struct TYPE_12__ {int * key; } ;
typedef TYPE_8__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (TYPE_8__*,int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_8__*,int ) ;

__attribute__((used)) static int FUNC_2(SSL *VAR_4)
{
    VAR_4->ext.status_expected = 0;







    if (VAR_4->ext.status_type != VAR_3 && VAR_4->ctx != ((void*)0)
            && VAR_4->ctx->ext.status_cb != ((void*)0)) {
        int VAR_5;


        if (VAR_4->s3->tmp.cert != ((void*)0)) {




            VAR_4->cert->key = VAR_4->s3->tmp.cert;
            VAR_5 = VAR_4->ctx->ext.status_cb(VAR_4, VAR_4->ctx->ext.status_arg);
            switch (VAR_5) {

            case 129:
                VAR_4->ext.status_expected = 0;
                break;

            case 128:
                if (VAR_4->ext.ocsp.resp)
                    VAR_4->ext.status_expected = 1;
                break;

            case 130:
            default:
                FUNC_0(VAR_4, VAR_0,
                         VAR_1,
                         VAR_2);
                return 0;
            }
        }
    }

    return 1;
}

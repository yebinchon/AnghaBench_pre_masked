
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {void (* info_callback ) (TYPE_3__ const*,int,int) ;TYPE_2__* s3; TYPE_1__* ctx; int msg_callback_arg; int version; int (* msg_callback ) (int,int ,int ,int*,int,TYPE_3__ const*,int ) ;int wbio; } ;
struct TYPE_9__ {int alert_dispatch; int* send_alert; } ;
struct TYPE_8__ {void (* info_callback ) (TYPE_3__ const*,int,int) ;} ;
typedef TYPE_3__ const SSL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__ const*,int ,int*,size_t*,int,int ,size_t*) ;
 int FUNC_2 (int,int ,int ,int*,int,TYPE_3__ const*,int ) ;

int FUNC_3(SSL *VAR_2)
{
    int VAR_3, VAR_4;
    size_t VAR_5;
    void (*VAR_6) (const SSL *VAR_7, int VAR_8, int VAR_9) = ((void*)0);
    size_t VAR_10;

    VAR_2->s3->alert_dispatch = 0;
    VAR_5 = 2;
    VAR_3 = FUNC_1(VAR_2, VAR_0, &VAR_2->s3->send_alert[0], &VAR_5, 1, 0,
                      &VAR_10);
    if (VAR_3 <= 0) {
        VAR_2->s3->alert_dispatch = 1;
    } else {




        (void)FUNC_0(VAR_2->wbio);

        if (VAR_2->msg_callback)
            VAR_2->msg_callback(1, VAR_2->version, VAR_0, VAR_2->s3->send_alert,
                            2, VAR_2, VAR_2->msg_callback_arg);

        if (VAR_2->info_callback != ((void*)0))
            VAR_6 = VAR_2->info_callback;
        else if (VAR_2->ctx->info_callback != ((void*)0))
            VAR_6 = VAR_2->ctx->info_callback;

        if (VAR_6 != ((void*)0)) {
            VAR_4 = (VAR_2->s3->send_alert[0] << 8) | VAR_2->s3->send_alert[1];
            VAR_6(VAR_2, VAR_1, VAR_4);
        }
    }
    return VAR_3;
}

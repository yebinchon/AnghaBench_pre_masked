
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ state; scalar_t__ hand_state; } ;
struct TYPE_6__ {scalar_t__ server; TYPE_1__* s3; TYPE_3__ statem; } ;
struct TYPE_5__ {scalar_t__ total_renegotiations; int in_read_app_data; } ;
typedef TYPE_2__ SSL ;
typedef TYPE_3__ OSSL_STATEM ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_0(SSL *VAR_4)
{
    OSSL_STATEM *VAR_5 = &VAR_4->statem;

    if (VAR_5->state == VAR_0)
        return 0;

    if (!VAR_4->s3->in_read_app_data || (VAR_4->s3->total_renegotiations == 0))
        return 0;

    if (VAR_4->server) {




        if (VAR_5->hand_state == VAR_1
            || VAR_5->hand_state == VAR_3)
            return 1;
    } else {




        if (VAR_5->hand_state == VAR_2)
            return 1;
    }

    return 0;
}

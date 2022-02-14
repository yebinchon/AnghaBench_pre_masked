
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ hand_state; } ;
struct TYPE_5__ {scalar_t__ early_data; } ;
struct TYPE_7__ {scalar_t__ hello_retry_request; TYPE_2__ statem; int server; TYPE_1__ ext; } ;
typedef TYPE_3__ SSL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_0(SSL *VAR_3)
{
    if (VAR_3->ext.early_data != VAR_0)
        return 0;

    if (!VAR_3->server
            || VAR_3->statem.hand_state != VAR_2
            || VAR_3->hello_retry_request == VAR_1)
        return 0;

    return 1;
}

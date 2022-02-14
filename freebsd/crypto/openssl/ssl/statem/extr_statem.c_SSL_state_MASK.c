
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hand_state; scalar_t__ state; } ;
struct TYPE_5__ {TYPE_1__ statem; } ;
typedef TYPE_2__ SSL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(const SSL *VAR_2)
{







    return (VAR_2->statem.hand_state == VAR_1)
        && (VAR_2->statem.state == VAR_0);
}

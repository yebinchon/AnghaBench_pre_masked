
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int unsolicited; } ;
struct TYPE_6__ {int (* unsolicited ) (int ,TYPE_4__*) ;} ;
struct TYPE_8__ {TYPE_2__ args; TYPE_1__ callback; } ;
typedef TYPE_3__ ocs_hw_t ;
struct TYPE_9__ {TYPE_3__* hw; } ;
typedef TYPE_4__ ocs_hw_sequence_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_4__*) ;

void
FUNC_2(void *VAR_0)
{
 ocs_hw_sequence_t *VAR_1 = VAR_0;
 ocs_hw_t *VAR_2 = VAR_1->hw;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_2->callback.unsolicited != ((void*)0));

 VAR_2->callback.unsolicited(VAR_2->args.unsolicited, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ccppp_queue_base; scalar_t__ ccppp_num_queues; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int) ;

int FUNC_1(void)
{
    int VAR_3;

    VAR_3 = VAR_1 - 1;

    while (VAR_3 >= 0)
    {
        if (VAR_2[VAR_3].ccppp_queue_base !=
     VAR_0)
 {
     FUNC_0(VAR_2[VAR_3].ccppp_num_queues > 0);
     return (VAR_2[VAR_3].ccppp_queue_base +
         VAR_2[VAR_3].ccppp_num_queues);
 }
 VAR_3 --;
    }

    FUNC_0(0);

    return 0;
}

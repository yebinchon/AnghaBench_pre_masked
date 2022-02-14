
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* delays; } ;
struct TYPE_3__ {int freepages_count; int freepages_delay; int freepages_end; int freepages_start; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *,int *,int *,int *) ;

void FUNC_1(void)
{
 FUNC_0(&VAR_0->delays->freepages_start,
   &VAR_0->delays->freepages_end,
   &VAR_0->delays->freepages_delay,
   &VAR_0->delays->freepages_count);
}

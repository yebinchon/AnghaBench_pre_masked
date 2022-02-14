
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int (* timer_func ) (int ,int ) ;
struct TYPE_3__ {scalar_t__ sival_int; } ;
struct TYPE_4__ {int si_overrun; TYPE_1__ si_value; } ;
struct sigev_node {scalar_t__ sn_gen; TYPE_2__ sn_info; int sn_value; int (* sn_func ) (int ,int ) ;} ;



__attribute__((used)) static void
FUNC_0(struct sigev_node *VAR_0)
{
 timer_func VAR_1 = VAR_0->sn_func;


 if (VAR_0->sn_info.si_value.sival_int == VAR_0->sn_gen)
  VAR_1(VAR_0->sn_value, VAR_0->sn_info.si_overrun);
}

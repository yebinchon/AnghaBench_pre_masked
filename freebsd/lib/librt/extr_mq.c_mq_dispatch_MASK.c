
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sival_int; } ;
struct TYPE_4__ {TYPE_1__ si_value; } ;
struct sigev_node {scalar_t__ sn_gen; int sn_value; TYPE_2__ sn_info; int (* sn_func ) (int ) ;} ;
typedef int (* mq_func ) (int ) ;



__attribute__((used)) static void
FUNC_0(struct sigev_node *VAR_0)
{
 mq_func VAR_1 = VAR_0->sn_func;





 if (VAR_0->sn_gen == VAR_0->sn_info.si_value.sival_int)
  VAR_1(VAR_0->sn_value);
}

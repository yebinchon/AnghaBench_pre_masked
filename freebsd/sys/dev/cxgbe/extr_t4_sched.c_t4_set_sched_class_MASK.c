
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int minmax; } ;
struct TYPE_4__ {int params; TYPE_1__ config; } ;
struct t4_sched_params {scalar_t__ type; scalar_t__ subcmd; TYPE_2__ u; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct adapter*,int ) ;
 int FUNC_1 (struct adapter*,int *,int) ;

int
FUNC_2(struct adapter *VAR_4, struct t4_sched_params *VAR_5)
{

 if (VAR_5->type != VAR_3)
  return (VAR_0);

 if (VAR_5->subcmd == VAR_1)
  return (FUNC_0(VAR_4, VAR_5->u.config.minmax));

 if (VAR_5->subcmd == VAR_2)
  return (FUNC_1(VAR_4, &VAR_5->u.params, 1));

 return (VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* now; } ;
struct worker {scalar_t__ err_limit_time; int err_limit_count; TYPE_1__ env; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct worker* VAR_1, int VAR_2)
{
 if(VAR_1->err_limit_time == *VAR_1->env.now) {

  if(VAR_1->err_limit_count++ > VAR_0)
   return -1;
 } else {

  VAR_1->err_limit_time = *VAR_1->env.now;
  VAR_1->err_limit_count = 1;
 }
 return VAR_2;
}

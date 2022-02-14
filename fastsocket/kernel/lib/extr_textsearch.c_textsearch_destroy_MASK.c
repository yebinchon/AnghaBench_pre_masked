
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ts_config {TYPE_1__* ops; } ;
struct TYPE_2__ {int owner; int (* destroy ) (struct ts_config*) ;} ;


 int FUNC_0 (struct ts_config*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ts_config*) ;

void FUNC_3(struct ts_config *VAR_0)
{
 if (VAR_0->ops) {
  if (VAR_0->ops->destroy)
   VAR_0->ops->destroy(VAR_0);
  FUNC_1(VAR_0->ops->owner);
 }

 FUNC_0(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct flow_cache_entry {scalar_t__ genid; TYPE_2__* object; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* check ) (TYPE_2__*) ;} ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct flow_cache_entry *VAR_1)
{
 if (FUNC_0(&VAR_0) != VAR_1->genid)
  return 0;
 if (VAR_1->object && !VAR_1->object->ops->check(VAR_1->object))
  return 0;
 return 1;
}

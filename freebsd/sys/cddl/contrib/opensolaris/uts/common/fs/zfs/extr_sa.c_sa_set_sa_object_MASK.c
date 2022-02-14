
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ sa_master_obj; } ;
typedef TYPE_1__ sa_os_t ;
struct TYPE_5__ {TYPE_1__* os_sa; } ;
typedef TYPE_2__ objset_t ;



int
FUNC_0(objset_t *VAR_0, uint64_t VAR_1)
{
 sa_os_t *VAR_2 = VAR_0->os_sa;

 if (VAR_2->sa_master_obj)
  return (1);

 VAR_2->sa_master_obj = VAR_1;

 return (0);
}

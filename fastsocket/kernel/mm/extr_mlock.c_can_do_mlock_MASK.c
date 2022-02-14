
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* signal; } ;
struct TYPE_5__ {TYPE_1__* rlim; } ;
struct TYPE_4__ {scalar_t__ rlim_cur; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_3__* VAR_2 ;

int FUNC_1(void)
{
 if (FUNC_0(VAR_0))
  return 1;
 if (VAR_2->signal->rlim[VAR_1].rlim_cur != 0)
  return 1;
 return 0;
}

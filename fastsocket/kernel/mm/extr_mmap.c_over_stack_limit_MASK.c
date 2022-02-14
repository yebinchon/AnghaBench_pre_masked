
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* signal; } ;
struct TYPE_5__ {TYPE_1__* rlim; } ;
struct TYPE_4__ {unsigned long rlim_cur; } ;


 unsigned long VAR_0 ;
 size_t VAR_1 ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static int FUNC_0(unsigned long VAR_3)
{
 if (VAR_3 < VAR_0)
  return 0;
 return (VAR_3 - VAR_0) >
   VAR_2->signal->rlim[VAR_1].rlim_cur;
}

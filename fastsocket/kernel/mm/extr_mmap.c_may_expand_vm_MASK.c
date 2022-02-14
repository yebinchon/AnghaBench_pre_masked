
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mm_struct {unsigned long total_vm; } ;
struct TYPE_6__ {TYPE_2__* signal; } ;
struct TYPE_5__ {TYPE_1__* rlim; } ;
struct TYPE_4__ {unsigned long rlim_cur; } ;


 unsigned long VAR_0 ;
 size_t VAR_1 ;
 TYPE_3__* VAR_2 ;

int FUNC_0(struct mm_struct *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5 = VAR_3->total_vm;
 unsigned long VAR_6;

 VAR_6 = VAR_2->signal->rlim[VAR_1].rlim_cur >> VAR_0;

 if (VAR_5 + VAR_4 > VAR_6)
  return 0;
 return 1;
}

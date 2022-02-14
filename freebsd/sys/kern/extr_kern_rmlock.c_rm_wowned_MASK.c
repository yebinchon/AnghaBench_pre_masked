
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lo_flags; } ;
struct rmlock {int rm_lock_mtx; int rm_lock_sx; TYPE_1__ lock_object; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(const struct rmlock *VAR_1)
{

 if (VAR_1->lock_object.lo_flags & VAR_0)
  return (FUNC_1(&VAR_1->rm_lock_sx));
 else
  return (FUNC_0(&VAR_1->rm_lock_mtx));
}

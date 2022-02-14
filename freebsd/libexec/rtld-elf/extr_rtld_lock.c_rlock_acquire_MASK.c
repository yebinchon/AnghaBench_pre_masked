
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* rtld_lock_t ;
struct TYPE_8__ {int (* rlock_acquire ) (int ) ;} ;
struct TYPE_7__ {int lockstate; } ;
struct TYPE_6__ {int mask; int handle; } ;
typedef TYPE_2__ RtldLockState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_5__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

void
FUNC_3(rtld_lock_t VAR_3, RtldLockState *VAR_4)
{

 if (VAR_4 == ((void*)0))
  return;

 if (FUNC_2(VAR_3->mask) & VAR_3->mask) {
  FUNC_0("rlock_acquire: recursed");
  VAR_4->lockstate = VAR_1;
  return;
 }
 VAR_2.rlock_acquire(VAR_3->handle);
 VAR_4->lockstate = VAR_0;
}

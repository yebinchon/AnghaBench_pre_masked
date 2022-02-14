
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* rtld_lock_t ;
struct TYPE_8__ {int (* lock_release ) (int ) ;} ;
struct TYPE_7__ {int lockstate; } ;
struct TYPE_6__ {int handle; int mask; } ;
typedef TYPE_2__ RtldLockState ;





 int FUNC_0 (int ) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(rtld_lock_t VAR_1, RtldLockState *VAR_2)
{

 if (VAR_2 == ((void*)0))
  return;

 switch (VAR_2->lockstate) {
 case 129:
  break;
 case 130:
 case 128:
  FUNC_2(VAR_1->mask);
  VAR_0.lock_release(VAR_1->handle);
  break;
 default:
  FUNC_0(0);
 }
}

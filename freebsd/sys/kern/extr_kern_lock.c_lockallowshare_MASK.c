
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lo_flags; } ;
struct lock {TYPE_1__ lock_object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lock*,int ) ;

void
FUNC_1(struct lock *VAR_2)
{

 FUNC_0(VAR_2, VAR_0);
 VAR_2->lock_object.lo_flags &= ~VAR_1;
}

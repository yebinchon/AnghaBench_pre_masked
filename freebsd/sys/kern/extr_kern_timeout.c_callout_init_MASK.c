
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct callout {int c_cpu; scalar_t__ c_iflags; int * c_lock; } ;
struct TYPE_2__ {int lock_object; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct callout*,int) ;
 int VAR_2 ;

void
FUNC_1(struct callout *VAR_3, int VAR_4)
{
 FUNC_0(VAR_3, sizeof *VAR_3);
 if (VAR_4) {
  VAR_3->c_lock = ((void*)0);
  VAR_3->c_iflags = VAR_0;
 } else {
  VAR_3->c_lock = &VAR_1.lock_object;
  VAR_3->c_iflags = 0;
 }
 VAR_3->c_cpu = VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_lock_data {int user_waiters; int kernel_waiters; int spinlock; TYPE_1__* hw_lock; } ;
struct TYPE_2__ {unsigned int lock; } ;


 int FUNC_0 (char*,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_2 (unsigned int volatile*,unsigned int,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static
int FUNC_5(struct drm_lock_data *VAR_3,
    unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;
 volatile unsigned int *VAR_8 = &VAR_3->hw_lock->lock;

 FUNC_3(&VAR_3->spinlock);
 do {
  VAR_5 = *VAR_8;
  if (VAR_5 & VAR_2)
   VAR_6 = VAR_5 | VAR_1;
  else {
   VAR_6 = VAR_4 | VAR_2 |
    ((VAR_3->user_waiters + VAR_3->kernel_waiters > 1) ?
     VAR_1 : 0);
  }
  VAR_7 = FUNC_2(VAR_8, VAR_5, VAR_6);
 } while (VAR_7 != VAR_5);
 FUNC_4(&VAR_3->spinlock);

 if (FUNC_1(VAR_5) == VAR_4) {
  if (VAR_5 & VAR_2) {
   if (VAR_4 != VAR_0) {
    FUNC_0("%d holds heavyweight lock\n",
       VAR_4);
   }
   return 0;
  }
 }

 if ((FUNC_1(VAR_6)) == VAR_4 && (VAR_6 & VAR_2)) {

  return 1;
 }
 return 0;
}

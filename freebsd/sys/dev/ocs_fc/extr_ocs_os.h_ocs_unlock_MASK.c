
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
typedef TYPE_1__ ocs_lock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static inline void
FUNC_4(ocs_lock_t *VAR_2)
{

 if (FUNC_1(&(VAR_2)->lock)) {
  FUNC_0(&(VAR_2)->lock, VAR_1 | VAR_0);
  FUNC_2(&(VAR_2)->lock);
 } else {
  FUNC_3("XXX trying to unlock with un-initialized mtx!?!?\n");
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dlm_lock_resource {int owner; int spinlock; } ;
struct dlm_ctxt {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct dlm_ctxt *VAR_0,
      struct dlm_lock_resource *VAR_1,
      u8 VAR_2)
{
 FUNC_0(&VAR_1->spinlock);

 VAR_1->owner = VAR_2;
}

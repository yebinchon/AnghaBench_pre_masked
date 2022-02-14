
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct held_lock {int dummy; } ;
typedef enum lock_usage_bit { ____Placeholder_lock_usage_bit } lock_usage_bit ;
struct TYPE_2__ {int usage_mask; } ;


 TYPE_1__* FUNC_0 (struct held_lock*) ;
 int FUNC_1 (struct task_struct*,struct held_lock*,int,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline int
FUNC_3(struct task_struct *VAR_0, struct held_lock *VAR_1,
     enum lock_usage_bit VAR_2, enum lock_usage_bit VAR_3)
{
 if (FUNC_2(FUNC_0(VAR_1)->usage_mask & (1 << VAR_3)))
  return FUNC_1(VAR_0, VAR_1, VAR_3, VAR_2);
 return 1;
}

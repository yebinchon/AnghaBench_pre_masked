
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
typedef enum freezer_state { ____Placeholder_freezer_state } freezer_state ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct task_struct*) ;

__attribute__((used)) static inline int FUNC_1(struct task_struct *VAR_2)
{
 enum freezer_state VAR_3 = FUNC_0(VAR_2)->state;
 return (VAR_3 == VAR_0) || (VAR_3 == VAR_1);
}

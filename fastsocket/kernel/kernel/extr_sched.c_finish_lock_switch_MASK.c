
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int dep_map; int owner; } ;
struct rq {TYPE_1__ lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_2(struct rq *VAR_2, struct task_struct *VAR_3)
{
 FUNC_0(&VAR_2->lock.dep_map, 0, 0, VAR_0);

 FUNC_1(&VAR_2->lock);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dquot {int dq_free; } ;
struct TYPE_2__ {int free_dquots; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct dquot *VAR_1)
{
 if (FUNC_1(&VAR_1->dq_free))
  return;
 FUNC_0(&VAR_1->dq_free);
 VAR_0.free_dquots--;
}

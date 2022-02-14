
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dquot {int dq_inuse; } ;
struct TYPE_2__ {int allocated_dquots; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct dquot *VAR_1)
{
 VAR_0.allocated_dquots--;
 FUNC_0(&VAR_1->dq_inuse);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_rr_queue {scalar_t__ q_service; scalar_t__ q_budget; int q_flags; scalar_t__ q_slice_end; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int
FUNC_0(struct g_rr_queue *VAR_2)
{

 if (VAR_2->q_service >= VAR_2->q_budget)
  return (1);

 if ((VAR_2->q_flags & VAR_0) &&
     VAR_1 - VAR_2->q_slice_end >= 0)
  return (1);

 return (0);
}

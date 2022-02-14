
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct held_lock {int dummy; } ;
struct TYPE_2__ {int held_locks; scalar_t__ lockdep_recursion; scalar_t__ lockdep_depth; scalar_t__ curr_chain_key; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

void FUNC_4(void)
{
 unsigned long VAR_8;
 int VAR_9;

 FUNC_3(VAR_8);
 VAR_3->curr_chain_key = 0;
 VAR_3->lockdep_depth = 0;
 VAR_3->lockdep_recursion = 0;
 FUNC_1(VAR_3->held_locks, 0, VAR_1*sizeof(struct held_lock));
 VAR_5 = 0;
 VAR_7 = 0;
 VAR_6 = 0;
 VAR_4 = 1;
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  FUNC_0(VAR_2 + VAR_9);
 FUNC_2(VAR_8);
}

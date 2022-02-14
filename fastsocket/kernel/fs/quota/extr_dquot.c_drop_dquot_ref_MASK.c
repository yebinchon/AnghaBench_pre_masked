
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {scalar_t__ dq_op; } ;
struct TYPE_2__ {int dqptr_sem; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct super_block*,int,int *) ;
 TYPE_1__* FUNC_4 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct super_block *VAR_1, int VAR_2)
{
 FUNC_0(VAR_0);

 if (VAR_1->dq_op) {
  FUNC_1(&FUNC_4(VAR_1)->dqptr_sem);
  FUNC_3(VAR_1, VAR_2, &VAR_0);
  FUNC_5(&FUNC_4(VAR_1)->dqptr_sem);
  FUNC_2(&VAR_0);
 }
}

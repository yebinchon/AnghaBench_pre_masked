
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxygen {int reg_lock; scalar_t__ pcm_running; scalar_t__ interrupt_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct oxygen*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct oxygen *VAR_2)
{
 FUNC_1(&VAR_2->reg_lock);
 VAR_2->interrupt_mask = 0;
 VAR_2->pcm_running = 0;
 FUNC_0(VAR_2, VAR_0, 0);
 FUNC_0(VAR_2, VAR_1, 0);
 FUNC_2(&VAR_2->reg_lock);
}

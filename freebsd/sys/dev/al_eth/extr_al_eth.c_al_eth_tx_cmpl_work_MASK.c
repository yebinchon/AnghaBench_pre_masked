
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_eth_ring {int cmpl_is_running; int unmask_val; int unmask_reg_offset; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct al_eth_ring*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_3(void *VAR_1, int VAR_2)
{
 struct al_eth_ring *VAR_3 = VAR_1;

 if (VAR_0 != 0) {
  VAR_3->cmpl_is_running = 1;
  FUNC_0();
 }

 FUNC_2(VAR_3);

 if (VAR_0 != 0) {
  VAR_3->cmpl_is_running = 0;
  FUNC_0();
 }

 FUNC_1(VAR_3->unmask_reg_offset, VAR_3->unmask_val);
}

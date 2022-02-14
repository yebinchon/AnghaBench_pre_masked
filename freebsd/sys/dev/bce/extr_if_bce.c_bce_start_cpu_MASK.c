
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpu_reg {int mode; int state_value_clear; int state; int mode_value_halt; } ;
struct bce_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bce_softc*,int ) ;
 int FUNC_3 (struct bce_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct bce_softc *VAR_1, struct cpu_reg *VAR_2)
{
 u32 VAR_3;

 FUNC_0(VAR_0);


 VAR_3 = FUNC_2(VAR_1, VAR_2->mode);
 VAR_3 &= ~VAR_2->mode_value_halt;
 FUNC_3(VAR_1, VAR_2->state, VAR_2->state_value_clear);
 FUNC_3(VAR_1, VAR_2->mode, VAR_3);

 FUNC_1(VAR_0);
}

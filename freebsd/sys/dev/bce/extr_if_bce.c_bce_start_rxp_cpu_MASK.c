
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_reg {int state_value_clear; int mips_view_base; int spad_base; int bp; int inst; int pc; int evmask; int gpr0; int state; int mode_value_sstep; int mode_value_halt; int mode; } ;
struct bce_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bce_softc*,int ,char*) ;
 int FUNC_3 (struct bce_softc*,struct cpu_reg*) ;

__attribute__((used)) static void
FUNC_4(struct bce_softc *VAR_12)
{
 struct cpu_reg VAR_13;

 FUNC_0(VAR_11);

 VAR_13.mode = VAR_4;
 VAR_13.mode_value_halt = VAR_5;
 VAR_13.mode_value_sstep = VAR_6;
 VAR_13.state = VAR_9;
 VAR_13.state_value_clear = 0xffffff;
 VAR_13.gpr0 = VAR_8;
 VAR_13.evmask = VAR_1;
 VAR_13.pc = VAR_7;
 VAR_13.inst = VAR_3;
 VAR_13.bp = VAR_2;
 VAR_13.spad_base = VAR_10;
 VAR_13.mips_view_base = 0x8000000;

 FUNC_2(VAR_12, VAR_0, "Starting RX firmware.\n");
 FUNC_3(VAR_12, &VAR_13);

 FUNC_1(VAR_11);
}

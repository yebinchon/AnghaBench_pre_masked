
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_info {int rodata; scalar_t__ rodata_index; int rodata_len; int rodata_addr; int bss; scalar_t__ bss_index; int bss_len; int bss_addr; int sbss; scalar_t__ sbss_index; int sbss_len; int sbss_addr; int data; scalar_t__ data_index; int data_len; int data_addr; int text; scalar_t__ text_index; int text_len; int text_addr; int start_addr; int ver_fix; int ver_minor; int ver_major; } ;
struct cpu_reg {int state_value_clear; int mips_view_base; int spad_base; int bp; int inst; int pc; int evmask; int gpr0; int state; int mode_value_sstep; int mode_value_halt; int mode; } ;
struct bce_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct bce_softc*) ;
 scalar_t__ VAR_0 ;
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
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bce_softc*,int ,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int FUNC_4 (struct bce_softc*,struct cpu_reg*,struct fw_info*) ;
 int FUNC_5 (struct bce_softc*,struct cpu_reg*) ;

__attribute__((used)) static void
FUNC_6(struct bce_softc *VAR_51)
{
 struct cpu_reg VAR_52;
 struct fw_info VAR_53;

 FUNC_1(VAR_12);

 VAR_52.mode = VAR_4;
 VAR_52.mode_value_halt = VAR_5;
 VAR_52.mode_value_sstep = VAR_6;
 VAR_52.state = VAR_9;
 VAR_52.state_value_clear = 0xffffff;
 VAR_52.gpr0 = VAR_8;
 VAR_52.evmask = VAR_1;
 VAR_52.pc = VAR_7;
 VAR_52.inst = VAR_3;
 VAR_52.bp = VAR_2;
 VAR_52.spad_base = VAR_10;
 VAR_52.mips_view_base = 0x8000000;

 if (FUNC_0(VAR_51) == VAR_0) {
  VAR_53.ver_major = VAR_39;
  VAR_53.ver_minor = VAR_40;
  VAR_53.ver_fix = VAR_38;
  VAR_53.start_addr = VAR_47;

  VAR_53.text_addr = VAR_49;
  VAR_53.text_len = VAR_50;
  VAR_53.text_index = 0;
  VAR_53.text = VAR_48;

  VAR_53.data_addr = VAR_36;
  VAR_53.data_len = VAR_37;
  VAR_53.data_index = 0;
  VAR_53.data = VAR_35;

  VAR_53.sbss_addr = VAR_45;
  VAR_53.sbss_len = VAR_46;
  VAR_53.sbss_index = 0;
  VAR_53.sbss = VAR_44;

  VAR_53.bss_addr = VAR_33;
  VAR_53.bss_len = VAR_34;
  VAR_53.bss_index = 0;
  VAR_53.bss = VAR_32;

  VAR_53.rodata_addr = VAR_42;
  VAR_53.rodata_len = VAR_43;
  VAR_53.rodata_index = 0;
  VAR_53.rodata = VAR_41;
 } else {
  VAR_53.ver_major = VAR_20;
  VAR_53.ver_minor = VAR_21;
  VAR_53.ver_fix = VAR_19;
  VAR_53.start_addr = VAR_28;

  VAR_53.text_addr = VAR_30;
  VAR_53.text_len = VAR_31;
  VAR_53.text_index = 0;
  VAR_53.text = VAR_29;

  VAR_53.data_addr = VAR_17;
  VAR_53.data_len = VAR_18;
  VAR_53.data_index = 0;
  VAR_53.data = VAR_16;

  VAR_53.sbss_addr = VAR_26;
  VAR_53.sbss_len = VAR_27;
  VAR_53.sbss_index = 0;
  VAR_53.sbss = VAR_25;

  VAR_53.bss_addr = VAR_14;
  VAR_53.bss_len = VAR_15;
  VAR_53.bss_index = 0;
  VAR_53.bss = VAR_13;

  VAR_53.rodata_addr = VAR_23;
  VAR_53.rodata_len = VAR_24;
  VAR_53.rodata_index = 0;
  VAR_53.rodata = VAR_22;
 }

 FUNC_3(VAR_51, VAR_11, "Loading CP firmware.\n");
 FUNC_4(VAR_51, &VAR_52, &VAR_53);
 FUNC_5(VAR_51, &VAR_52);

 FUNC_2(VAR_12);
}

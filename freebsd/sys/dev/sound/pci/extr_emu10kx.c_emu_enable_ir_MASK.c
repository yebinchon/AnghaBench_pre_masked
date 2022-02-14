
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct emu_sc_info {int enable_ir; int dev; scalar_t__ is_emu10k1; scalar_t__ is_ca0102; scalar_t__ is_emu10k2; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct emu_sc_info*,int ,int) ;
 int FUNC_3 (struct emu_sc_info*,int ,int,int) ;

void
FUNC_4(struct emu_sc_info *VAR_6)
{
 uint32_t VAR_7;

 if (VAR_6->is_emu10k2 || VAR_6->is_ca0102) {
  VAR_7 = FUNC_2(VAR_6, VAR_0, 2);
  FUNC_3(VAR_6, VAR_0, VAR_7 | VAR_2, 2);
  FUNC_0(500);
  FUNC_3(VAR_6, VAR_0, VAR_7 | VAR_1 | VAR_2, 2);
  FUNC_0(500);
  FUNC_3(VAR_6, VAR_0, VAR_7 | VAR_1, 2);
  FUNC_0(100);
  FUNC_3(VAR_6, VAR_0, VAR_7, 2);
  FUNC_1(VAR_6->dev, "Audigy IR MIDI events enabled.\n");
  VAR_6->enable_ir = 1;
 }
 if (VAR_6->is_emu10k1) {
  VAR_7 = FUNC_2(VAR_6, VAR_3, 4);
  FUNC_3(VAR_6, VAR_3, VAR_7 | VAR_5, 4);
  FUNC_0(500);
  FUNC_3(VAR_6, VAR_3, VAR_7 | VAR_4 | VAR_5, 4);
  FUNC_0(100);
  FUNC_3(VAR_6, VAR_3, VAR_7, 4);
  FUNC_1(VAR_6->dev, "SB Live! IR MIDI events enabled.\n");
  VAR_6->enable_ir = 1;
 }
}

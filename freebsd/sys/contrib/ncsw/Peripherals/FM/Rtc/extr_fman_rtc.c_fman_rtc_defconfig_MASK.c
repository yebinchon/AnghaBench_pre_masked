
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_cfg {int * trigger_polarity; int * alarm_polarity; int pulse_realign; int invert_output_clk_phase; int invert_input_clk_phase; int src_clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_0(struct rtc_cfg *VAR_8)
{
 int VAR_9;
 VAR_8->src_clk = VAR_4;
 VAR_8->invert_input_clk_phase = VAR_1;
 VAR_8->invert_output_clk_phase = VAR_2;
 VAR_8->pulse_realign = VAR_3;
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  VAR_8->alarm_polarity[VAR_9] = VAR_0;
 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  VAR_8->trigger_polarity[VAR_9] = VAR_5;
}

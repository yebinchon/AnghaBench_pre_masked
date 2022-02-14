
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtc_regs {int tmr_prsc; } ;
struct rtc_cfg {int src_clk; scalar_t__* alarm_polarity; scalar_t__* trigger_polarity; scalar_t__ bypass; int timer_slave_mode; scalar_t__ invert_output_clk_phase; scalar_t__ invert_input_clk_phase; } ;


 scalar_t__ VAR_0 ;


 scalar_t__ VAR_1 ;
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
 int FUNC_0 (struct rtc_regs*,int ) ;
 int FUNC_1 (struct rtc_regs*,int) ;
 int FUNC_2 (struct rtc_regs*,int ) ;
 int FUNC_3 (struct rtc_regs*,int,int) ;
 int FUNC_4 (struct rtc_regs*,int) ;
 int FUNC_5 (struct rtc_regs*,int,int) ;
 int FUNC_6 (struct rtc_regs*,int ) ;
 int FUNC_7 (struct rtc_regs*) ;
 int FUNC_8 (int,int *) ;

void FUNC_9(struct rtc_cfg *VAR_13, struct rtc_regs *VAR_14, int VAR_15,
  int VAR_16, int VAR_17, bool VAR_18,
  uint32_t VAR_19, uint32_t VAR_20)
{
 uint32_t VAR_21;
 int VAR_22;

 FUNC_7(VAR_14);


 switch (VAR_13->src_clk) {
 case 128:
  VAR_21 = VAR_6;
  break;
 case 129:
  VAR_21 = VAR_7;
  break;
 default:

  VAR_21 = VAR_5;
  break;
 }



 VAR_21 |= ((1 << VAR_11) &
    VAR_10);

 if (VAR_13->invert_input_clk_phase)
  VAR_21 |= VAR_4;
 if (VAR_13->invert_output_clk_phase)
  VAR_21 |= VAR_8;

 for (VAR_22 = 0; VAR_22 < VAR_15; VAR_22++) {
  if (VAR_13->alarm_polarity[VAR_22] ==
   VAR_0)
   VAR_21 |= (VAR_2 >> VAR_22);
 }

 for (VAR_22 = 0; VAR_22 < VAR_17; VAR_22++)
  if (VAR_13->trigger_polarity[VAR_22] ==
   VAR_1)
   VAR_21 |= (VAR_9 << VAR_22);

 if (!VAR_13->timer_slave_mode && VAR_13->bypass)
  VAR_21 |= VAR_3;

 FUNC_4(VAR_14, VAR_21);
 if (VAR_18)
  FUNC_1(VAR_14, VAR_19);


 for (VAR_22 = 0; VAR_22 < VAR_15; VAR_22++)
  FUNC_3(VAR_14, VAR_22, 0xFFFFFFFFFFFFFFFFLL);


 FUNC_0(VAR_14, VAR_12);


 FUNC_2(VAR_14, 0);


 for (VAR_22 = 0; VAR_22 < VAR_16; VAR_22++)
  FUNC_5(VAR_14, VAR_22, 0xFFFFFFFF);


 FUNC_8(VAR_20, &VAR_14->tmr_prsc);


 FUNC_6(VAR_14, 0);
}

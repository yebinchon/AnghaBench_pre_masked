
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct al_hal_eth_adapter {TYPE_3__* ec_regs_base; int name; } ;
struct TYPE_4__ {int seconds; int femto; } ;
struct al_eth_pth_pulse_out_params {size_t index; scalar_t__ enable; scalar_t__ periodic; int pulse_width; TYPE_1__ start_time; int period_sec; int period_us; } ;
struct TYPE_6__ {TYPE_2__* pth_egress; } ;
struct TYPE_5__ {int pulse_width_subseconds_msb; int pulse_width_subseconds_lsb; int trigger_subseconds_msb; int trigger_subseconds_lsb; int trigger_seconds; int trigger_ctrl; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

int FUNC_5(struct al_hal_eth_adapter *VAR_11,
    struct al_eth_pth_pulse_out_params *VAR_12)
{
 uint32_t VAR_13;

 if (VAR_12->index >= VAR_0) {
  FUNC_2("eth [%s] PTH out pulse index out of range\n",
     VAR_11->name);
  return -VAR_10;
 }
 VAR_13 = FUNC_3(&VAR_11->ec_regs_base->pth_egress[VAR_12->index].trigger_ctrl);
 if (VAR_12->enable == VAR_1) {
  VAR_13 &= ~VAR_3;
 } else {
  VAR_13 |= VAR_3;
  if (VAR_12->periodic == VAR_1)
   VAR_13 &= ~VAR_4;
  else
   VAR_13 |= VAR_4;

  FUNC_1(VAR_13, VAR_7,
     VAR_8,
     VAR_12->period_us);
  FUNC_1(VAR_13, VAR_5,
     VAR_6,
     VAR_12->period_sec);
 }
 FUNC_4(&VAR_11->ec_regs_base->pth_egress[VAR_12->index].trigger_ctrl, VAR_13);


 FUNC_4(&VAR_11->ec_regs_base->pth_egress[VAR_12->index].trigger_seconds,
         VAR_12->start_time.seconds);
 VAR_13 = VAR_12->start_time.femto & FUNC_0(18);
 VAR_13 = VAR_13 << VAR_9;
 FUNC_4(&VAR_11->ec_regs_base->pth_egress[VAR_12->index].trigger_subseconds_lsb,
         VAR_13);
 VAR_13 = VAR_12->start_time.femto >> 18;
 FUNC_4(&VAR_11->ec_regs_base->pth_egress[VAR_12->index].trigger_subseconds_msb,
         VAR_13);


 VAR_13 = VAR_12->pulse_width & FUNC_0(18);
 VAR_13 = VAR_13 << VAR_2;
 FUNC_4(&VAR_11->ec_regs_base->pth_egress[VAR_12->index].pulse_width_subseconds_lsb, VAR_13);

 VAR_13 = VAR_12->pulse_width >> 18;
 FUNC_4(&VAR_11->ec_regs_base->pth_egress[VAR_12->index].pulse_width_subseconds_msb, VAR_13);

 return 0;
}

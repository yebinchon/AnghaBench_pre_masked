
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct al_hal_eth_adapter {TYPE_3__* ec_regs_base; int rev_id; int name; } ;
struct al_eth_filter_params {int filters; scalar_t__ enable; scalar_t__* filter_proto; } ;
struct TYPE_4__ {int filter; int out_cfg; } ;
struct TYPE_6__ {TYPE_2__* epe_a; TYPE_1__ rfw; } ;
struct TYPE_5__ {int prot_act; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct al_eth_filter_params*) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int,int) ;

int FUNC_8(struct al_hal_eth_adapter *VAR_6, struct al_eth_filter_params *VAR_7)
{
 uint32_t VAR_8;

 FUNC_3(VAR_7);

 if (VAR_7->filters & ~(FUNC_0(VAR_6->rev_id))) {
  FUNC_4("[%s]: unsupported filter options (0x%08x)\n", VAR_6->name, VAR_7->filters);
  return -VAR_5;
 }

 VAR_8 = FUNC_5(&VAR_6->ec_regs_base->rfw.out_cfg);
 if (VAR_7->enable == VAR_2)
  FUNC_2(VAR_8, VAR_4);
 else
  FUNC_1(VAR_8, VAR_4);
 FUNC_6(&VAR_6->ec_regs_base->rfw.out_cfg, VAR_8);

 FUNC_7(
  &VAR_6->ec_regs_base->rfw.filter,
  FUNC_0(VAR_6->rev_id),
  VAR_7->filters);
 if (VAR_7->filters & VAR_1) {
  int VAR_9;
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   VAR_8 = FUNC_5(&VAR_6->ec_regs_base->epe_a[VAR_9].prot_act);
   if (VAR_7->filter_proto[VAR_9] == VAR_2)
    FUNC_2(VAR_8, VAR_3);
   else
    FUNC_1(VAR_8, VAR_3);
   FUNC_6(&VAR_6->ec_regs_base->epe_a[VAR_9].prot_act, VAR_8);
  }
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; int rev_id; int name; } ;
struct al_eth_filter_override_params {int filters; int qid; int udma; } ;
struct TYPE_3__ {int default_or; int filter; } ;
struct TYPE_4__ {TYPE_1__ rfw; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct al_eth_filter_override_params*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int,int) ;

int FUNC_7(struct al_hal_eth_adapter *VAR_5,
      struct al_eth_filter_override_params *VAR_6)
{
 uint32_t VAR_7;

 FUNC_2(VAR_6);

 if (VAR_6->filters & ~(FUNC_0(VAR_5->rev_id))) {
  FUNC_3("[%s]: unsupported override filter options (0x%08x)\n", VAR_5->name, VAR_6->filters);
  return -VAR_4;
 }

 FUNC_6(
  &VAR_5->ec_regs_base->rfw.filter,
  FUNC_0(VAR_5->rev_id) << 16,
  VAR_6->filters << 16);

 VAR_7 = FUNC_4(&VAR_5->ec_regs_base->rfw.default_or);
 FUNC_1(VAR_7, VAR_2, VAR_3, VAR_6->udma);
 FUNC_1(VAR_7, VAR_0, VAR_1, VAR_6->qid);
 FUNC_5(&VAR_5->ec_regs_base->rfw.default_or, VAR_7);
 return 0;
}

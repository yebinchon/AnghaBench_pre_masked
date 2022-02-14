
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ixl_pf {int dev; } ;
struct TYPE_4__ {int param0; int param1; } ;
struct TYPE_5__ {TYPE_1__ external; } ;
struct TYPE_6__ {TYPE_2__ params; } ;
struct i40e_arq_event_info {TYPE_3__ desc; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_1(struct ixl_pf *VAR_2, struct i40e_arq_event_info *VAR_3)
{
 device_t VAR_4 = VAR_2->dev;
 u32 VAR_5, VAR_6;

 VAR_5 = (VAR_3->desc.params.external.param0 & VAR_0) >>
     VAR_1;
 VAR_6 = VAR_3->desc.params.external.param1;

 FUNC_0(VAR_4, "LAN overflow event: global rxq_idx %d\n", VAR_5);
 FUNC_0(VAR_4, "LAN overflow event: QTX_CTL 0x%08x\n", VAR_6);
}

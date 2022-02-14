
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct ixl_vsi {int tx_itr_setting; int rx_itr_setting; TYPE_2__* rx_queues; } ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {int tx_itr; int rx_itr; struct ixl_vsi vsi; struct i40e_hw hw; } ;
struct TYPE_8__ {int itr; } ;
struct TYPE_7__ {int itr; } ;
struct TYPE_5__ {int itr; } ;
struct TYPE_6__ {TYPE_1__ rxr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 TYPE_4__* VAR_23 ;
 TYPE_3__* VAR_24 ;
 int FUNC_3 (struct i40e_hw*,int ,int) ;

void
FUNC_4(struct ixl_pf *VAR_25)
{
 struct i40e_hw *VAR_26 = &VAR_25->hw;
 struct ixl_vsi *VAR_27 = &VAR_25->vsi;
 u32 VAR_28;
 VAR_27->rx_queues[0].rxr.itr = VAR_27->rx_itr_setting;


 VAR_28 = VAR_2
     | VAR_5
     | VAR_3
     | VAR_6
     | VAR_4
     | VAR_7
     | VAR_8
     | VAR_1
     ;
 FUNC_3(VAR_26, VAR_0, VAR_28);


 FUNC_3(VAR_26, VAR_10,
     VAR_19 << VAR_11);


 FUNC_3(VAR_26, VAR_9, 0);


 VAR_28 = VAR_12
     | (VAR_21 << VAR_13)
     | (VAR_18 << VAR_14);
 FUNC_3(VAR_26, FUNC_1(0), VAR_28);

 VAR_28 = VAR_15
     | (VAR_22 << VAR_16)
     | (VAR_20 << VAR_17);
 FUNC_3(VAR_26, FUNC_2(0), VAR_28);
}

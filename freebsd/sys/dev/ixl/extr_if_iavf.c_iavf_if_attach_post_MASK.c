
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixl_vsi {int eth_stats; TYPE_1__* shared; int num_tx_queues; int num_rx_queues; int ifp; } ;
struct i40e_hw {int dummy; } ;
struct iavf_sc {int queues_enabled; int init_state; struct ixl_vsi vsi; struct i40e_hw hw; } ;
struct i40e_eth_stats {int dummy; } ;
typedef int if_ctx_t ;
typedef int device_t ;
struct TYPE_2__ {int isc_ntxqsets; int isc_nrxqsets; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct iavf_sc*) ;
 int FUNC_4 (struct i40e_hw*) ;
 int FUNC_5 (int ,struct iavf_sc*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct iavf_sc* FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(if_ctx_t VAR_1)
{
 device_t VAR_2;
 struct iavf_sc *VAR_3;
 struct i40e_hw *VAR_4;
 struct ixl_vsi *VAR_5;
 int VAR_6 = 0;

 FUNC_0(VAR_2, "begin");

 VAR_2 = FUNC_6(VAR_1);
 VAR_3 = FUNC_8(VAR_1);
 VAR_5 = &VAR_3->vsi;
 VAR_5->ifp = FUNC_7(VAR_1);
 VAR_4 = &VAR_3->hw;


 VAR_5->num_rx_queues = VAR_5->shared->isc_nrxqsets;
 VAR_5->num_tx_queues = VAR_5->shared->isc_ntxqsets;


 FUNC_5(VAR_2, VAR_3);

 FUNC_0(VAR_2, "Interface setup complete");


 FUNC_2(&VAR_3->vsi.eth_stats, sizeof(struct i40e_eth_stats));
 FUNC_3(VAR_3);

 VAR_3->init_state = VAR_0;
 FUNC_1(&VAR_3->queues_enabled, 0);


 FUNC_4(VAR_4);

 FUNC_0(VAR_2, "end");

 return (VAR_6);
}

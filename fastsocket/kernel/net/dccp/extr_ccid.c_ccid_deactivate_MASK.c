
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccid_operations {int ccid_name; int ccid_id; int * ccid_hc_rx_slab; int * ccid_hc_tx_slab; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ccid_operations *VAR_0)
{
 FUNC_0(VAR_0->ccid_hc_tx_slab);
 VAR_0->ccid_hc_tx_slab = ((void*)0);
 FUNC_0(VAR_0->ccid_hc_rx_slab);
 VAR_0->ccid_hc_rx_slab = ((void*)0);

 FUNC_1("CCID: Deactivated CCID %d (%s)\n",
  VAR_0->ccid_id, VAR_0->ccid_name);
}

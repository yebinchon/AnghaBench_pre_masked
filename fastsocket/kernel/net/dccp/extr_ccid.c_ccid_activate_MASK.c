
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccid_operations {int * ccid_hc_rx_slab; int ccid_name; int ccid_id; int * ccid_hc_tx_slab; int ccid_hc_tx_slab_name; int ccid_hc_tx_obj_size; int ccid_hc_rx_slab_name; int ccid_hc_rx_obj_size; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ccid_operations *VAR_1)
{
 int VAR_2 = -VAR_0;

 VAR_1->ccid_hc_rx_slab =
   FUNC_0(VAR_1->ccid_hc_rx_obj_size,
            VAR_1->ccid_hc_rx_slab_name,
            "ccid%u_hc_rx_sock",
            VAR_1->ccid_id);
 if (VAR_1->ccid_hc_rx_slab == ((void*)0))
  goto out;

 VAR_1->ccid_hc_tx_slab =
   FUNC_0(VAR_1->ccid_hc_tx_obj_size,
            VAR_1->ccid_hc_tx_slab_name,
            "ccid%u_hc_tx_sock",
            VAR_1->ccid_id);
 if (VAR_1->ccid_hc_tx_slab == ((void*)0))
  goto out_free_rx_slab;

 FUNC_2("CCID: Activated CCID %d (%s)\n",
  VAR_1->ccid_id, VAR_1->ccid_name);
 VAR_2 = 0;
out:
 return VAR_2;
out_free_rx_slab:
 FUNC_1(VAR_1->ccid_hc_rx_slab);
 VAR_1->ccid_hc_rx_slab = ((void*)0);
 goto out;
}

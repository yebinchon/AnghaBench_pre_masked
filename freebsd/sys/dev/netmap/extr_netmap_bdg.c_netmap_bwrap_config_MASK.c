
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nm_config_info {int rx_buf_maxsize; int num_rx_descs; int num_rx_rings; int num_tx_descs; int num_tx_rings; } ;
struct netmap_bwrap_adapter {struct netmap_adapter* hwna; } ;
struct netmap_adapter {int rx_buf_maxsize; int num_tx_desc; int num_tx_rings; int num_rx_desc; int num_rx_rings; int na_lut; int nm_mem; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct netmap_adapter*) ;

__attribute__((used)) static int
FUNC_2(struct netmap_adapter *VAR_0, struct nm_config_info *VAR_1)
{
 struct netmap_bwrap_adapter *VAR_2 =
  (struct netmap_bwrap_adapter *)VAR_0;
 struct netmap_adapter *VAR_3 = VAR_2->hwna;
 int VAR_4;




 VAR_4 = FUNC_0(VAR_3->nm_mem, &VAR_3->na_lut);
 if (VAR_4)
  return VAR_4;
 FUNC_1(VAR_3);

 VAR_1->num_tx_rings = VAR_3->num_rx_rings;
 VAR_1->num_tx_descs = VAR_3->num_rx_desc;
 VAR_1->num_rx_rings = VAR_3->num_tx_rings;
 VAR_1->num_rx_descs = VAR_3->num_tx_desc;
 VAR_1->rx_buf_maxsize = VAR_3->rx_buf_maxsize;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptnet_softc {int dev; int iomem; } ;
struct nm_config_info {int rx_buf_maxsize; void* num_rx_descs; void* num_tx_descs; void* num_rx_rings; void* num_tx_rings; } ;
struct netmap_adapter {int ifp; } ;


 int FUNC_0 (struct netmap_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,void*,void*,void*,void*,int ) ;
 struct ptnet_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct netmap_adapter *VAR_4, struct nm_config_info *VAR_5)
{
 struct ptnet_softc *VAR_6 = FUNC_3(VAR_4->ifp);

 VAR_5->num_tx_rings = FUNC_1(VAR_6->iomem, VAR_2);
 VAR_5->num_rx_rings = FUNC_1(VAR_6->iomem, VAR_0);
 VAR_5->num_tx_descs = FUNC_1(VAR_6->iomem, VAR_3);
 VAR_5->num_rx_descs = FUNC_1(VAR_6->iomem, VAR_1);
 VAR_5->rx_buf_maxsize = FUNC_0(VAR_4);

 FUNC_2(VAR_6->dev, "txr %u, rxr %u, txd %u, rxd %u, rxbufsz %u\n",
   VAR_5->num_tx_rings, VAR_5->num_rx_rings,
   VAR_5->num_tx_descs, VAR_5->num_rx_descs,
   VAR_5->rx_buf_maxsize);

 return 0;
}

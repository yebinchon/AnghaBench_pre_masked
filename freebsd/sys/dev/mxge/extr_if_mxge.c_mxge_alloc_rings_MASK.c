
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int rx_ring_size; int num_slices; int * ss; TYPE_1__* ifp; int dev; } ;
typedef TYPE_2__ mxge_softc_t ;
struct TYPE_12__ {int data0; } ;
typedef TYPE_3__ mxge_cmd_t ;
typedef int mcp_kreq_ether_send_t ;
typedef int mcp_dma_addr_t ;
struct TYPE_13__ {int ifq_maxlen; int ifq_drv_maxlen; } ;
struct TYPE_10__ {TYPE_8__ if_snd; } ;


 int FUNC_0 (TYPE_8__*,int) ;
 int FUNC_1 (TYPE_8__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_6(mxge_softc_t *VAR_1)
{
 mxge_cmd_t VAR_2;
 int VAR_3;
 int VAR_4, VAR_5;
 int VAR_6, VAR_7;


 VAR_6 = FUNC_5(VAR_1, VAR_0, &VAR_2);
 VAR_3 = VAR_2.data0;
 if (VAR_6 != 0) {
  FUNC_2(VAR_1->dev, "Cannot determine tx ring sizes\n");
  goto abort;
 }

 VAR_4 = VAR_3 / sizeof (mcp_kreq_ether_send_t);
 VAR_5 = VAR_1->rx_ring_size / sizeof (mcp_dma_addr_t);
 FUNC_0(&VAR_1->ifp->if_snd, VAR_4 - 1);
 VAR_1->ifp->if_snd.ifq_drv_maxlen = VAR_1->ifp->if_snd.ifq_maxlen;
 FUNC_1(&VAR_1->ifp->if_snd);

 for (VAR_7 = 0; VAR_7 < VAR_1->num_slices; VAR_7++) {
  VAR_6 = FUNC_3(&VAR_1->ss[VAR_7],
          VAR_5,
          VAR_4);
  if (VAR_6 != 0)
   goto abort;
 }
 return 0;

abort:
 FUNC_4(VAR_1);
 return VAR_6;

}

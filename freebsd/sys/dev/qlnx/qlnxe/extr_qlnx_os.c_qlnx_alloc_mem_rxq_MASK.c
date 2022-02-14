
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef union eth_rx_cqe {int dummy; } eth_rx_cqe ;
struct sw_rx_data {int dummy; } ;
struct lro_ctrl {struct ifnet* ifp; } ;
struct qlnx_rx_queue {int num_rx_buffers; int rxq_id; struct lro_ctrl lro; int * tpa_info; int rx_buf_size; int rx_comp_ring; int rx_bd_ring; int * sw_rx_ring; } ;
struct ifnet {int dummy; } ;
struct eth_rx_bd {int dummy; } ;
struct ecore_dev {int dummy; } ;
struct TYPE_7__ {struct ifnet* ifp; int rx_buf_size; struct ecore_dev cdev; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int VAR_7 ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (struct ecore_dev*,int ,int ,int ,int,int,int *,int *) ;
 int FUNC_3 (TYPE_1__*,struct qlnx_rx_queue*) ;
 int FUNC_4 (TYPE_1__*,int ,int *) ;
 int FUNC_5 (TYPE_1__*,struct qlnx_rx_queue*) ;
 scalar_t__ FUNC_6 (struct lro_ctrl*) ;
 scalar_t__ FUNC_7 (struct lro_ctrl*,struct ifnet*,int ,int) ;

__attribute__((used)) static int
FUNC_8(qlnx_host_t *VAR_8, struct qlnx_rx_queue *VAR_9)
{
        int VAR_10, VAR_11, VAR_12;
 struct ifnet *VAR_13;
 struct ecore_dev *VAR_14;

 VAR_14 = &VAR_8->cdev;
 VAR_13 = VAR_8->ifp;

        VAR_9->num_rx_buffers = VAR_7;

 VAR_9->rx_buf_size = VAR_8->rx_buf_size;


 FUNC_1((void *)&VAR_9->sw_rx_ring[0],
  (sizeof (struct sw_rx_data) * VAR_7));



        VAR_11 = FUNC_2(VAR_14,
   VAR_4,
   VAR_1,
   VAR_0,
   VAR_7,
   sizeof(struct eth_rx_bd),
   &VAR_9->rx_bd_ring, ((void*)0));

        if (VAR_11)
                goto err;


        VAR_11 = FUNC_2(VAR_14,
                        VAR_3,
                        VAR_2,
   VAR_0,
                        VAR_7,
                        sizeof(union eth_rx_cqe),
                        &VAR_9->rx_comp_ring, ((void*)0));

        if (VAR_11)
                goto err;



 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_11 = FUNC_4(VAR_8, VAR_9->rx_buf_size,
   &VAR_9->tpa_info[VAR_10]);
                if (VAR_11)
                        break;

 }

        for (VAR_10 = 0; VAR_10 < VAR_9->num_rx_buffers; VAR_10++) {
                VAR_11 = FUNC_3(VAR_8, VAR_9);
                if (VAR_11)
                        break;
        }
        VAR_12 = VAR_10;
        if (!VAR_12) {
  FUNC_0(VAR_8, "Rx buffers allocation failed\n");
                goto err;
        } else if (VAR_12 < VAR_9->num_rx_buffers) {
  FUNC_0(VAR_8, "Allocated less buffers than"
   " desired (%d allocated)\n", VAR_12);
        }
        return 0;

err:
        FUNC_5(VAR_8, VAR_9);
        return -VAR_5;
}

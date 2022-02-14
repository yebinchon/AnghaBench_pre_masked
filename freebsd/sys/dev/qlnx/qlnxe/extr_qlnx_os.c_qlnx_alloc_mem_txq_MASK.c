
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef union eth_tx_bd_types {int dummy; } eth_tx_bd_types ;
struct sw_tx_bd {int dummy; } ;
struct qlnx_tx_queue {int num_tx_buffers; int tx_pbl; int * sw_tx_ring; } ;
struct qlnx_fastpath {int dummy; } ;
struct ecore_dev {int dummy; } ;
struct TYPE_4__ {struct ecore_dev cdev; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (struct ecore_dev*,int ,int ,int ,int,int,int *,int *) ;
 int FUNC_2 (TYPE_1__*,struct qlnx_fastpath*,struct qlnx_tx_queue*) ;

__attribute__((used)) static int
FUNC_3(qlnx_host_t *VAR_6, struct qlnx_fastpath *VAR_7,
 struct qlnx_tx_queue *VAR_8)
{
        int VAR_9 = VAR_3;
        union eth_tx_bd_types *VAR_10;
 struct ecore_dev *VAR_11;

 VAR_11 = &VAR_6->cdev;

 FUNC_0((void *)&VAR_8->sw_tx_ring[0],
  (sizeof (struct sw_tx_bd) * VAR_5));


        VAR_9 = FUNC_1(VAR_11,
                        VAR_2,
                        VAR_1,
   VAR_0,
                        VAR_5,
                        sizeof(*VAR_10),
                        &VAR_8->tx_pbl, ((void*)0));

        if (VAR_9 != VAR_3) {
                goto err;
        }

 VAR_8->num_tx_buffers = VAR_5;

        return 0;

err:
        FUNC_2(VAR_6, VAR_7, VAR_8);
        return -VAR_4;
}

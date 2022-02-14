
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qlnx_tx_queue {int dummy; } ;
struct qlnx_rx_queue {int dummy; } ;
struct ecore_sb_info {int dummy; } ;
struct ecore_dev {int dummy; } ;
struct TYPE_3__ {int * sb_array; int * rxq_array; int * txq_array; struct ecore_dev cdev; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static int
FUNC_1(qlnx_host_t *VAR_1)
{
 struct ecore_dev *VAR_2;

 VAR_2 = &VAR_1->cdev;

 FUNC_0(&VAR_1->txq_array[0], (sizeof(struct qlnx_tx_queue) * VAR_0));
 FUNC_0(&VAR_1->rxq_array[0], (sizeof(struct qlnx_rx_queue) * VAR_0));
 FUNC_0(&VAR_1->sb_array[0], (sizeof(struct ecore_sb_info) * VAR_0));

        return 0;
}

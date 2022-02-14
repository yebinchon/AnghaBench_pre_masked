
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sw_tx_bd {int dummy; } ;
struct TYPE_5__ {int * p_virt_addr; } ;
struct qlnx_tx_queue {TYPE_3__ tx_pbl; int * sw_tx_ring; } ;
struct qlnx_fastpath {int dummy; } ;
struct ecore_dev {int dummy; } ;
struct TYPE_4__ {struct ecore_dev cdev; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (struct ecore_dev*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2(qlnx_host_t *VAR_1, struct qlnx_fastpath *VAR_2,
 struct qlnx_tx_queue *VAR_3)
{
 struct ecore_dev *VAR_4;

 VAR_4 = &VAR_1->cdev;

 FUNC_0((void *)&VAR_3->sw_tx_ring[0],
  (sizeof (struct sw_tx_bd) * VAR_0));


        if (VAR_3->tx_pbl.p_virt_addr) {
                FUNC_1(VAR_4, &VAR_3->tx_pbl);
                VAR_3->tx_pbl.p_virt_addr = ((void*)0);
        }
 return;
}

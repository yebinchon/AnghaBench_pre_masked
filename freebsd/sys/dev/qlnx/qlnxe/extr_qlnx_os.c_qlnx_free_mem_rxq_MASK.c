
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sw_rx_data {int dummy; } ;
struct lro_ctrl {int dummy; } ;
struct TYPE_8__ {int * p_virt_table; } ;
struct TYPE_11__ {TYPE_1__ pbl_sp; int * p_virt_addr; } ;
struct qlnx_rx_queue {struct lro_ctrl lro; TYPE_7__ rx_comp_ring; TYPE_7__ rx_bd_ring; int * sw_rx_ring; TYPE_4__* tpa_info; } ;
struct ecore_dev {int dummy; } ;
struct TYPE_9__ {struct ecore_dev cdev; } ;
typedef TYPE_2__ qlnx_host_t ;
struct TYPE_10__ {int * mpf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (struct ecore_dev*,TYPE_7__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,struct qlnx_rx_queue*) ;
 int FUNC_4 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_5 (struct lro_ctrl*) ;

__attribute__((used)) static void
FUNC_6(qlnx_host_t *VAR_2, struct qlnx_rx_queue *VAR_3)
{
 struct ecore_dev *VAR_4;
 int VAR_5;

 VAR_4 = &VAR_2->cdev;

 FUNC_3(VAR_2, VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_4(VAR_2, &VAR_3->tpa_info[VAR_5]);
  if (VAR_3->tpa_info[VAR_5].mpf != ((void*)0))
   FUNC_2(VAR_3->tpa_info[VAR_5].mpf);
 }

 FUNC_0((void *)&VAR_3->sw_rx_ring[0],
  (sizeof (struct sw_rx_data) * VAR_1));


 if (VAR_3->rx_bd_ring.p_virt_addr) {
                FUNC_1(VAR_4, &VAR_3->rx_bd_ring);
                VAR_3->rx_bd_ring.p_virt_addr = ((void*)0);
        }


        if (VAR_3->rx_comp_ring.p_virt_addr &&
                        VAR_3->rx_comp_ring.pbl_sp.p_virt_table) {
                FUNC_1(VAR_4, &VAR_3->rx_comp_ring);
                VAR_3->rx_comp_ring.p_virt_addr = ((void*)0);
                VAR_3->rx_comp_ring.pbl_sp.p_virt_table = ((void*)0);
        }
 return;
}

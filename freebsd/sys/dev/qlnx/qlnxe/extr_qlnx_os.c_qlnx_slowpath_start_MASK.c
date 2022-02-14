
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int num_qps; int num_srqs; int min_dpis; int rdma_protocol; void* gl_pi; scalar_t__ roce_edpm_mode; } ;
struct TYPE_7__ {int num_cons; } ;
struct ecore_pf_params {TYPE_2__ rdma_pf_params; TYPE_1__ eth_pf_params; } ;
struct ecore_dev {int rx_coalesce_usecs; int tx_coalesce_usecs; int int_coalescing_mode; int int_mode; } ;
struct TYPE_9__ {int num_rss; int num_tc; scalar_t__ personality; int rx_coalesce_usecs; int tx_coalesce_usecs; struct ecore_dev cdev; int pci_dev; } ;
typedef TYPE_3__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ecore_pf_params*,int ,int) ;
 int FUNC_2 (struct ecore_dev*,struct ecore_pf_params*) ;
 int FUNC_3 (struct ecore_dev*) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_6(qlnx_host_t *VAR_7)
{
 struct ecore_dev *VAR_8;
 struct ecore_pf_params VAR_9;
 int VAR_10;

 FUNC_1(&VAR_9, 0, sizeof(struct ecore_pf_params));
 VAR_9.eth_pf_params.num_cons =
  (VAR_7->num_rss) * (VAR_7->num_tc + 1);
 VAR_8 = &VAR_7->cdev;

 VAR_10 = FUNC_2(VAR_8, &VAR_9);
        if (VAR_10)
                goto qlnx_slowpath_start_exit;

        VAR_8->int_mode = VAR_1;
        VAR_8->int_coalescing_mode = VAR_0;






 VAR_10 = FUNC_3(VAR_8);

 VAR_7->rx_coalesce_usecs = VAR_8->rx_coalesce_usecs;
 VAR_7->tx_coalesce_usecs = VAR_8->tx_coalesce_usecs;





qlnx_slowpath_start_exit:

 return (VAR_10);
}

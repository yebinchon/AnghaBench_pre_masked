
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int max_fin_rt; } ;
struct TYPE_6__ {scalar_t__ ll2_ooo_q_index; } ;
struct iwarp_init_func_ramrod_data {TYPE_5__ tcp; TYPE_1__ iwarp; } ;
struct TYPE_7__ {scalar_t__* resc_start; } ;
struct ecore_hwfn {TYPE_4__* p_rdma_info; TYPE_2__ hw_info; } ;
struct TYPE_8__ {scalar_t__ ll2_ooo_handle; } ;
struct TYPE_9__ {TYPE_3__ iwarp; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,scalar_t__) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

void
FUNC_1(struct ecore_hwfn *VAR_3,
      struct iwarp_init_func_ramrod_data *VAR_4)
{
 FUNC_0(VAR_3, VAR_2,
     "ooo handle = %d\n",
     VAR_3->p_rdma_info->iwarp.ll2_ooo_handle);

 VAR_4->iwarp.ll2_ooo_q_index =
  VAR_3->hw_info.resc_start[VAR_1] +
  VAR_3->p_rdma_info->iwarp.ll2_ooo_handle;

 VAR_4->tcp.max_fin_rt = VAR_0;
 return;
}

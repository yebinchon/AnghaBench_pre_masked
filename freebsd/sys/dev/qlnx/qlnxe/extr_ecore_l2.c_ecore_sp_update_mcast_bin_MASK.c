
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int * bins; } ;
struct TYPE_4__ {int update_approx_mcast_flg; } ;
struct vport_update_ramrod_data {TYPE_1__ approx_mcast; TYPE_2__ common; } ;
struct ecore_sp_vport_update_params {int * bins; int update_approx_mcast_flg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int **,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct vport_update_ramrod_data *VAR_1,
     struct ecore_sp_vport_update_params *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_1->approx_mcast.bins, 0,
      sizeof(VAR_1->approx_mcast.bins));

 if (!VAR_2->update_approx_mcast_flg)
  return;

 VAR_1->common.update_approx_mcast_flg = 1;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  u32 *VAR_4 = VAR_2->bins;

  VAR_1->approx_mcast.bins[VAR_3] = FUNC_0(VAR_4[VAR_3]);
 }
}

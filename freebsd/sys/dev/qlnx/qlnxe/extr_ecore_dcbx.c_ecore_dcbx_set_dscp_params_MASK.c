
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ecore_hwfn {TYPE_2__* p_dcbx_info; } ;
struct TYPE_3__ {scalar_t__* dscp_pri_map; scalar_t__ enabled; } ;
struct ecore_dcbx_set {TYPE_1__ dscp; } ;
struct dcb_dscp_map {int* dscp_pri_map; int flags; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {int dscp_nig_update; int dscp_map; } ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dcb_dscp_map*,int *,int) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_2(struct ecore_hwfn *VAR_3,
      struct dcb_dscp_map *VAR_4,
      struct ecore_dcbx_set *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 u32 VAR_9;

 FUNC_1(VAR_4, &VAR_3->p_dcbx_info->dscp_map,
      sizeof(*VAR_4));

 VAR_4->flags &= ~VAR_0;
 if (VAR_5->dscp.enabled)
  VAR_4->flags |= VAR_0;

 for (VAR_7 = 0, VAR_6 = 0; VAR_7 < 8; VAR_7++) {
  VAR_9 = 0;
  for (VAR_8 = 0; VAR_8 < 8; VAR_8++, VAR_6++)
   VAR_9 |= (((u32)VAR_5->dscp.dscp_pri_map[VAR_6]) <<
    (VAR_8 * 4));

  VAR_4->dscp_pri_map[VAR_7] = VAR_9;
 }

 VAR_3->p_dcbx_info->dscp_nig_update = 1;

 FUNC_0(VAR_3, VAR_1, "flags = 0x%x\n", VAR_4->flags);
 FUNC_0(VAR_3, VAR_1,
     "pri_map[] = 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x\n",
     VAR_4->dscp_pri_map[0], VAR_4->dscp_pri_map[1],
     VAR_4->dscp_pri_map[2], VAR_4->dscp_pri_map[3],
     VAR_4->dscp_pri_map[4], VAR_4->dscp_pri_map[5],
     VAR_4->dscp_pri_map[6], VAR_4->dscp_pri_map[7]);

 return VAR_2;
}

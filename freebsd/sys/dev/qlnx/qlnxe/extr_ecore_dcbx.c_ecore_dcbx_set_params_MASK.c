
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_5__ {int personality; int offload_tc; } ;
struct ecore_hwfn {TYPE_3__* p_dev; TYPE_2__ hw_info; } ;
struct ecore_dcbx_results {TYPE_1__* arr; } ;
typedef enum ecore_pci_personality { ____Placeholder_ecore_pci_personality } ecore_pci_personality ;
typedef enum dcbx_protocol_type { ____Placeholder_dcbx_protocol_type } dcbx_protocol_type ;
struct TYPE_6__ {int mf_bits; } ;
struct TYPE_4__ {int enable; int priority; int tc; scalar_t__ dscp_val; int dscp_enable; int dont_add_vlan0; int update; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct ecore_hwfn*,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ecore_dcbx_results *VAR_6,
        struct ecore_hwfn *VAR_7, struct ecore_ptt *VAR_8,
        bool VAR_9, u8 VAR_10, u8 VAR_11,
        enum dcbx_protocol_type VAR_12,
        enum ecore_pci_personality VAR_13)
{

 VAR_6->arr[VAR_12].enable = VAR_9;
 VAR_6->arr[VAR_12].priority = VAR_10;
 VAR_6->arr[VAR_12].tc = VAR_11;
 VAR_6->arr[VAR_12].dscp_val = FUNC_1(VAR_7, VAR_10);
 if (VAR_6->arr[VAR_12].dscp_val == VAR_3) {
  VAR_6->arr[VAR_12].dscp_enable = 0;
  VAR_6->arr[VAR_12].dscp_val = 0;
 } else
  VAR_6->arr[VAR_12].dscp_enable = VAR_9;

 VAR_6->arr[VAR_12].update = VAR_5;


 if (FUNC_0(VAR_4, &VAR_7->p_dev->mf_bits))
  VAR_6->arr[VAR_12].dont_add_vlan0 = 1;


 if (VAR_7->hw_info.personality == VAR_13)
  VAR_7->hw_info.offload_tc = VAR_11;


 if (FUNC_0(VAR_4, &VAR_7->p_dev->mf_bits) &&
     (VAR_12 == VAR_0)) {
  FUNC_2(VAR_7, VAR_8, VAR_2, 1);
  FUNC_2(VAR_7, VAR_8, VAR_1, VAR_10 << 1);
 }
}

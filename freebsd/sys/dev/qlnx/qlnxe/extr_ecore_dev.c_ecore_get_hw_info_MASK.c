
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_4__ {scalar_t__ ovlan; int personality; int num_active_tc; int mtu; int num_hw_tc; int * hw_mac_addr; } ;
struct ecore_hwfn {TYPE_3__* mcp_info; TYPE_1__ hw_info; int rel_pf_id; int p_dev; int abs_pf_id; } ;
struct ecore_hw_prepare_params {int drv_resc_alloc; int p_relaxed_res; scalar_t__ b_relaxed_probe; } ;
typedef enum ecore_pci_personality { ____Placeholder_ecore_pci_personality } ecore_pci_personality ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_5__ {int* mac; scalar_t__ ovlan; int protocol; int mtu; } ;
struct TYPE_6__ {TYPE_2__ func_info; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct ecore_hwfn*) ;
 int VAR_9 ;
 int FUNC_4 (int *,int*,int ) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_hw_prepare_params*) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_10 (struct ecore_hwfn*) ;
 int FUNC_11 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_12 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_13 (struct ecore_hwfn*,struct ecore_ptt*) ;
 scalar_t__ FUNC_14 (struct ecore_hwfn*) ;
 int FUNC_15 (struct ecore_hwfn*,struct ecore_ptt*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_16(struct ecore_hwfn *VAR_10, struct ecore_ptt *VAR_11,
    enum ecore_pci_personality VAR_12,
    struct ecore_hw_prepare_params *VAR_13)
{
 bool VAR_14 = VAR_13->drv_resc_alloc;
 enum _ecore_status_t VAR_15;


 if (FUNC_3(VAR_10)) {
  VAR_15 = FUNC_10(VAR_10);
  if (VAR_15 != VAR_7) {
   if (VAR_13->b_relaxed_probe)
    VAR_13->p_relaxed_res =
      VAR_1;
   else
    return VAR_15;
  }
 }

 if (FUNC_3(VAR_10))
  FUNC_8(VAR_10, VAR_11);

 FUNC_12(VAR_10, VAR_11);


 if (FUNC_0(VAR_10->p_dev)) {

 VAR_15 = FUNC_6(VAR_10, VAR_11, VAR_13);
 if (VAR_15 != VAR_7)
  return VAR_15;

 }


 VAR_15 = FUNC_9(VAR_10, VAR_11);
 if (VAR_15 != VAR_7) {
  if (VAR_13->b_relaxed_probe)
   VAR_13->p_relaxed_res = VAR_0;
  else
   return VAR_15;
 }


 if (FUNC_0(VAR_10->p_dev) && FUNC_14(VAR_10)) {

 FUNC_4(VAR_10->hw_info.hw_mac_addr,
      VAR_10->mcp_info->func_info.mac, VAR_8);

 } else {
  static u8 VAR_16[6] = {0, 2, 3, 4, 5, 6};

  FUNC_4(VAR_10->hw_info.hw_mac_addr, VAR_16, VAR_8);
  VAR_10->hw_info.hw_mac_addr[5] = VAR_10->abs_pf_id;
 }


 if (FUNC_14(VAR_10)) {
  if (VAR_10->mcp_info->func_info.ovlan != VAR_3)
   VAR_10->hw_info.ovlan =
    VAR_10->mcp_info->func_info.ovlan;

  FUNC_11(VAR_10, VAR_11);

  FUNC_13(VAR_10, VAR_11);

  FUNC_15(VAR_10, VAR_11);
 }

 if (VAR_12 != VAR_4) {
  VAR_10->hw_info.personality = VAR_12;
 } else if (FUNC_14(VAR_10)) {
  enum ecore_pci_personality VAR_17;

  VAR_17 = VAR_10->mcp_info->func_info.protocol;
  VAR_10->hw_info.personality = VAR_17;
 }





 if (FUNC_1(VAR_10->p_dev) && FUNC_2(VAR_10->p_dev)) {
  if (!VAR_10->rel_pf_id)
   VAR_10->hw_info.personality = VAR_6;
  else
   VAR_10->hw_info.personality = VAR_5;
 }






 VAR_10->hw_info.num_hw_tc = VAR_9;




 VAR_10->hw_info.num_active_tc = 1;

 FUNC_5(VAR_10, VAR_11);

 if (FUNC_14(VAR_10))
  VAR_10->hw_info.mtu = VAR_10->mcp_info->func_info.mtu;







 VAR_15 = FUNC_7(VAR_10, VAR_11, VAR_14);
 if (VAR_15 != VAR_7 && VAR_13->b_relaxed_probe) {
  VAR_15 = VAR_7;
  VAR_13->p_relaxed_res = VAR_2;
 }

 return VAR_15;
}

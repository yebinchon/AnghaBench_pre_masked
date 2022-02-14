
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct dbg_tools_data {scalar_t__ num_regs_read; size_t platform_id; scalar_t__ use_dmae; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
typedef scalar_t__ osal_uintptr_t ;
struct TYPE_2__ {scalar_t__ log_thresh; scalar_t__ dmae_thresh; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,...) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,scalar_t__,int ) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__*,scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static u32 FUNC_4(struct ecore_hwfn *VAR_4,
          struct ecore_ptt *VAR_5,
          u32 *VAR_6,
          bool VAR_7,
          u32 VAR_8,
          u32 VAR_9,
          bool VAR_10)
{
 struct dbg_tools_data *VAR_11 = &VAR_4->dbg_info;

 if (!VAR_7)
  return VAR_9;


 VAR_11->num_regs_read += VAR_9;
 if (VAR_11->num_regs_read >= VAR_3[VAR_11->platform_id].log_thresh) {
  FUNC_0(VAR_4, VAR_0, "Dumping %d registers...\n", VAR_11->num_regs_read);
  VAR_11->num_regs_read = 0;
 }


 if (VAR_11->use_dmae && (VAR_9 >= VAR_3[VAR_11->platform_id].dmae_thresh || (VAR_2 && VAR_10))) {
  if (!FUNC_2(VAR_4, VAR_5, FUNC_1(VAR_8), (u64)(osal_uintptr_t)(VAR_6), VAR_9, VAR_1))
   return VAR_9;
  VAR_11->use_dmae = 0;
  FUNC_0(VAR_4, VAR_0, "Failed reading from chip using DMAE, using GRC instead\n");
 }


 FUNC_3(VAR_4, VAR_5, VAR_6, VAR_8, VAR_9);

 return VAR_9;
}

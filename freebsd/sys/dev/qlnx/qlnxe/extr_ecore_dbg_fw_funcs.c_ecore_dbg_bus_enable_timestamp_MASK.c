
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_4__ {scalar_t__ state; int timestamp_input_en; TYPE_1__* blocks; int num_enabled_blocks; int unify_inputs; } ;
struct dbg_tools_data {TYPE_2__ bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
struct TYPE_3__ {int data; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,int,int) ;
 int VAR_10 ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (struct ecore_hwfn*,int,int ) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

enum dbg_status FUNC_4(struct ecore_hwfn *VAR_11,
              struct ecore_ptt *VAR_12,
              u8 VAR_13,
              u8 VAR_14,
              u32 VAR_15)
{
 struct dbg_tools_data *VAR_16 = &VAR_11->dbg_info;

 FUNC_0(VAR_11, VAR_10, "dbg_bus_enable_timestamp: valid_mask = 0x%x, frame_mask = 0x%x, tick_len = %d\n", VAR_13, VAR_14, VAR_15);

 if (VAR_16->bus.state != VAR_2)
  return VAR_6;
 if (VAR_13 > 0x7 || VAR_14 > 0x7)
  return VAR_8;
 if (!VAR_16->bus.unify_inputs && FUNC_2(VAR_11, 0x1, 0))
  return VAR_7;

 VAR_16->bus.timestamp_input_en = 1;
 VAR_16->bus.num_enabled_blocks++;

 FUNC_1(VAR_16->bus.blocks[VAR_0].data, VAR_1, 0x1);

 FUNC_3(VAR_11, VAR_12, VAR_5, VAR_13);
 FUNC_3(VAR_11, VAR_12, VAR_3, VAR_14);
 FUNC_3(VAR_11, VAR_12, VAR_4, VAR_15);

 return VAR_9;
}

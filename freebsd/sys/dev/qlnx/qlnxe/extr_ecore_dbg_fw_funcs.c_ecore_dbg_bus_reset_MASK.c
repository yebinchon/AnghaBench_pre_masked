
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_4__ {int one_shot_en; int hw_dwords; int grc_input_en; int unify_inputs; int num_enabled_blocks; TYPE_1__* blocks; int state; int target; } ;
struct dbg_tools_data {TYPE_2__ bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
struct TYPE_3__ {int data; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,int,int,int) ;
 int VAR_9 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*) ;
 scalar_t__ FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

enum dbg_status FUNC_9(struct ecore_hwfn *VAR_10,
         struct ecore_ptt *VAR_11,
         bool VAR_12,
         u8 VAR_13,
         bool VAR_14,
         bool VAR_15)
{
 struct dbg_tools_data *VAR_16 = &VAR_10->dbg_info;
 enum dbg_status VAR_17;

 VAR_17 = FUNC_5(VAR_10, VAR_11);
 if (VAR_17 != VAR_8)
  return VAR_17;

 FUNC_0(VAR_10, VAR_9, "dbg_bus_reset: one_shot_en = %d, force_hw_dwords = %d, unify_inputs = %d, grc_input_en = %d\n", VAR_12, VAR_13, VAR_14, VAR_15);

 if (VAR_13 &&
  VAR_13 != 4 &&
  VAR_13 != 8)
  return VAR_7;

 if (FUNC_6(VAR_10, VAR_11, VAR_4))
  return VAR_6;


 FUNC_7(VAR_10, VAR_11);


 VAR_17 = FUNC_3(VAR_10, VAR_11, 0);
 if (VAR_17 != VAR_8)
  return VAR_17;


 FUNC_4(VAR_10, VAR_11);


 FUNC_8(VAR_10, VAR_11, VAR_5, VAR_12 ? 0 : 1);


 FUNC_1(&VAR_16->bus, 0, sizeof(VAR_16->bus));
 VAR_16->bus.target = VAR_3;
 VAR_16->bus.state = VAR_2;
 VAR_16->bus.one_shot_en = VAR_12;
 VAR_16->bus.hw_dwords = VAR_13;
 VAR_16->bus.grc_input_en = VAR_15;
 VAR_16->bus.unify_inputs = VAR_14;
 VAR_16->bus.num_enabled_blocks = VAR_15 ? 1 : 0;


 if (VAR_15)
  FUNC_2(VAR_16->bus.blocks[VAR_0].data, VAR_1, 0x1);

 return VAR_8;
}

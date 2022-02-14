
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ state; int num_enabled_blocks; struct dbg_bus_block_data* blocks; int unify_inputs; } ;
struct dbg_tools_data {size_t chip_id; TYPE_1__ bus; scalar_t__* block_in_reset; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct dbg_bus_block_data {int data; scalar_t__ line_num; } ;
struct dbg_bus_block {int dummy; } ;
struct block_defs {scalar_t__* dbg_client_id; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
typedef enum block_id { ____Placeholder_block_id } block_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_2 (struct dbg_bus_block*) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int VAR_15 ;
 scalar_t__ FUNC_4 (struct ecore_hwfn*,scalar_t__,scalar_t__) ;
 struct dbg_bus_block* FUNC_5 (struct ecore_hwfn*,int) ;
 struct block_defs** VAR_16 ;

enum dbg_status FUNC_6(struct ecore_hwfn *VAR_17,
             enum block_id VAR_18,
             u8 VAR_19,
             u8 VAR_20,
             u8 VAR_21,
             u8 VAR_22,
             u8 VAR_23)
{
 struct dbg_tools_data *VAR_24 = &VAR_17->dbg_info;
 struct block_defs *VAR_25 = VAR_16[VAR_18];
 struct dbg_bus_block_data *VAR_26;
 struct dbg_bus_block *VAR_27;

 VAR_26 = &VAR_24->bus.blocks[VAR_18];
 VAR_27 = FUNC_5(VAR_17, VAR_18);

 FUNC_0(VAR_17, VAR_11, "dbg_bus_enable_block: block = %d, line_num = %d, enable_mask = 0x%x, right_shift = %d, force_valid_mask = 0x%x, force_frame_mask = 0x%x\n", VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23);

 if (VAR_24->bus.state != VAR_4)
  return VAR_7;
 if (VAR_18 >= VAR_12)
  return VAR_9;
 if (FUNC_1(VAR_26->data, VAR_0))
  return VAR_5;
 if (VAR_25->dbg_client_id[VAR_24->chip_id] == VAR_14 ||
  VAR_19 >= FUNC_2(VAR_27) ||
  !VAR_20 ||
  VAR_20 > VAR_13 ||
  VAR_22 > VAR_13 ||
  VAR_23 > VAR_13 ||
  VAR_21 > VAR_15 - 1)
  return VAR_9;
 if (VAR_24->block_in_reset[VAR_18])
  return VAR_6;
 if (!VAR_24->bus.unify_inputs && FUNC_4(VAR_17, VAR_20, VAR_21))
  return VAR_8;

 VAR_24->bus.blocks[VAR_18].line_num = VAR_19;
 FUNC_3(VAR_26->data, VAR_0, VAR_20);
 FUNC_3(VAR_26->data, VAR_3, VAR_21);
 FUNC_3(VAR_26->data, VAR_2, VAR_22);
 FUNC_3(VAR_26->data, VAR_1, VAR_23);

 VAR_24->bus.num_enabled_blocks++;

 return VAR_10;
}

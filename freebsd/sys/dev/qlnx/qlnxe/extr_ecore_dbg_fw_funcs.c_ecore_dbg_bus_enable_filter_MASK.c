
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_4__ {scalar_t__ state; int filter_en; int adding_filter; scalar_t__ next_constraint_id; int unify_inputs; TYPE_1__* blocks; } ;
struct dbg_tools_data {TYPE_2__ bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
typedef enum block_id { ____Placeholder_block_id } block_id ;
struct TYPE_3__ {int data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,int) ;
 int VAR_11 ;
 int FUNC_1 (int ,int ) ;
 int VAR_12 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

enum dbg_status FUNC_3(struct ecore_hwfn *VAR_13,
           struct ecore_ptt *VAR_14,
           enum block_id VAR_15,
           u8 VAR_16)
{
 struct dbg_tools_data *VAR_17 = &VAR_13->dbg_info;

 FUNC_0(VAR_13, VAR_11, "dbg_bus_enable_filter: block = %d, const_msg_len = %d\n", VAR_15, VAR_16);

 if (VAR_17->bus.state != VAR_1)
  return VAR_6;
 if (VAR_17->bus.filter_en)
  return VAR_7;
 if (VAR_15 >= VAR_12)
  return VAR_9;
 if (!FUNC_1(VAR_17->bus.blocks[VAR_15].data, VAR_0))
  return VAR_5;
 if (!VAR_17->bus.unify_inputs)
  return VAR_8;

 VAR_17->bus.filter_en = 1;
 VAR_17->bus.next_constraint_id = 0;
 VAR_17->bus.adding_filter = 1;


 FUNC_2(VAR_13, VAR_14, VAR_2, 0);
 FUNC_2(VAR_13, VAR_14, VAR_4, VAR_16 > 0 ? 1 : 0);
 if (VAR_16 > 0)
  FUNC_2(VAR_13, VAR_14, VAR_3, VAR_16 - 1);

 return VAR_10;
}

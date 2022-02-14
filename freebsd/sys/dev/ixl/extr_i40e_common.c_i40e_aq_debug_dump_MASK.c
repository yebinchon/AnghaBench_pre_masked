
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_debug_dump_internals {int idx; void* table_id; void* cluster_id; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {int datalen; int flags; TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (struct i40e_hw*,struct i40e_aq_desc*,void*,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_5 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_6(struct i40e_hw *VAR_5, u8 VAR_6,
    u8 VAR_7, u32 VAR_8, u16 VAR_9,
    void *VAR_10, u16 *VAR_11,
    u8 *VAR_12, u32 *VAR_13,
    struct i40e_asq_cmd_details *VAR_14)
{
 struct i40e_aq_desc VAR_15;
 struct i40e_aqc_debug_dump_internals *VAR_16 =
  (struct i40e_aqc_debug_dump_internals *)&VAR_15.params.raw;
 struct i40e_aqc_debug_dump_internals *VAR_17 =
  (struct i40e_aqc_debug_dump_internals *)&VAR_15.params.raw;
 enum i40e_status_code VAR_18;

 if (VAR_9 == 0 || !VAR_10)
  return VAR_3;

 FUNC_5(&VAR_15,
       VAR_4);

 VAR_15.flags |= FUNC_0((u16)VAR_0);
 if (VAR_9 > VAR_2)
  VAR_15.flags |= FUNC_0((u16)VAR_1);

 VAR_16->cluster_id = VAR_6;
 VAR_16->table_id = VAR_7;
 VAR_16->idx = FUNC_1(VAR_8);

 VAR_15.datalen = FUNC_0(VAR_9);

 VAR_18 = FUNC_4(VAR_5, &VAR_15, VAR_10, VAR_9, VAR_14);
 if (!VAR_18) {
  if (VAR_11 != ((void*)0))
   *VAR_11 = FUNC_2(VAR_15.datalen);
  if (VAR_12 != ((void*)0))
   *VAR_12 = VAR_17->table_id;
  if (VAR_13 != ((void*)0))
   *VAR_13 = FUNC_3(VAR_17->idx);
 }

 return VAR_18;
}

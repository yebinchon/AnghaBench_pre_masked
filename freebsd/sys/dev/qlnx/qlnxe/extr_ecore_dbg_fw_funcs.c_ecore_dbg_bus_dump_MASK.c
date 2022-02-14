
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_3__ {int size; } ;
struct dbg_bus_data {scalar_t__ state; scalar_t__ target; struct dbg_bus_storm_data* storms; TYPE_2__* blocks; scalar_t__ trigger_en; scalar_t__ filter_en; scalar_t__ num_enabled_storms; scalar_t__ num_enabled_blocks; TYPE_1__ pci_buf; } ;
struct dbg_tools_data {struct dbg_bus_data bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct dbg_bus_storm_data {int enabled; scalar_t__ cid_filter_en; scalar_t__ eid_filter_en; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
struct TYPE_4__ {int data; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,scalar_t__*,scalar_t__) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 size_t VAR_16 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__*,int) ;
 scalar_t__ FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__*,int) ;
 int FUNC_4 (struct ecore_hwfn*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__*) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*) ;
 scalar_t__ FUNC_7 (scalar_t__*,scalar_t__,int) ;

enum dbg_status FUNC_8(struct ecore_hwfn *VAR_17,
           struct ecore_ptt *VAR_18,
           u32 *VAR_19,
           u32 VAR_20,
           u32 *VAR_21)
{
 struct dbg_tools_data *VAR_22 = &VAR_17->dbg_info;
 u32 VAR_23, VAR_24, VAR_25 = 0;
 struct dbg_bus_data *VAR_26 = &VAR_22->bus;
 enum dbg_status VAR_27;
 u8 VAR_28;

 *VAR_21 = 0;

 VAR_27 = FUNC_5(VAR_17, VAR_18, &VAR_23);
 if (VAR_27 != VAR_11)
  return VAR_27;

 FUNC_0(VAR_17, VAR_14, "dbg_bus_dump: dump_buf = 0x%p, buf_size_in_dwords = %d\n", VAR_19, VAR_20);

 if (VAR_26->state != VAR_4 && VAR_26->state != VAR_5)
  return VAR_13;

 if (VAR_26->state == VAR_4) {
  enum dbg_status VAR_29 = FUNC_6(VAR_17, VAR_18);
  if (VAR_29 != VAR_11)
   return VAR_29;
 }

 if (VAR_20 < VAR_23)
  return VAR_8;

 if (VAR_26->target == VAR_7 && !VAR_26->pci_buf.size)
  return VAR_12;


 VAR_25 += FUNC_3(VAR_17, VAR_18, VAR_19 + VAR_25, 1);


 if (VAR_26->target != VAR_6) {
  u32 VAR_30 = FUNC_2(VAR_17, VAR_18, VAR_19 + VAR_25, 1);

  if (!VAR_30)
   return VAR_10;
  if (VAR_30 % VAR_1)
   return VAR_9;
  VAR_25 += VAR_30;
 }


 VAR_25 += FUNC_7(VAR_19, VAR_25, 1);


 FUNC_4(VAR_17);


 VAR_26->state = VAR_3;
 VAR_26->num_enabled_blocks = 0;
 VAR_26->num_enabled_storms = 0;
 VAR_26->filter_en = VAR_26->trigger_en = 0;

 for (VAR_24 = 0; VAR_24 < VAR_15; VAR_24++)
  FUNC_1(VAR_26->blocks[VAR_0].data, VAR_2, 0);

 for (VAR_28 = 0; VAR_28 < VAR_16; VAR_28++) {
  struct dbg_bus_storm_data *VAR_31 = &VAR_26->storms[VAR_28];

  VAR_31->enabled = 0;
  VAR_31->eid_filter_en = VAR_31->cid_filter_en = 0;
 }

 *VAR_21 = VAR_25;

 return VAR_11;
}

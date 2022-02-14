
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_5__ {scalar_t__ target; scalar_t__ state; int rcv_from_other_engine; } ;
struct dbg_tools_data {size_t chip_id; size_t platform_id; TYPE_2__ bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
struct TYPE_6__ {TYPE_1__* per_platform; } ;
struct TYPE_4__ {scalar_t__ num_ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,scalar_t__,int,int,int,int,int) ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;
 TYPE_3__* VAR_27 ;

enum dbg_status FUNC_2(struct ecore_hwfn *VAR_28,
           struct ecore_ptt *VAR_29,
           u8 VAR_30,
           u32 VAR_31,
           u16 VAR_32,
           u16 VAR_33,
           bool VAR_34,
           bool VAR_35)
{
 struct dbg_tools_data *VAR_36 = &VAR_28->dbg_info;

 FUNC_0(VAR_28, VAR_20, "dbg_bus_set_nw_output: port_id = %d, dest_addr_lo32 = 0x%x, dest_addr_hi16 = 0x%x, data_limit_size_kb = %d, send_to_other_engine = %d, rcv_from_other_engine = %d\n", VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35);

 if (VAR_36->bus.target != VAR_4)
  return VAR_19;
 if (VAR_36->bus.state != VAR_3)
  return VAR_16;
 if (VAR_30 >= VAR_27[VAR_36->chip_id].per_platform[VAR_36->platform_id].num_ports || (VAR_34 && VAR_35))
  return VAR_17;

 VAR_36->bus.target = VAR_5;
 VAR_36->bus.rcv_from_other_engine = VAR_35;

 FUNC_1(VAR_28, VAR_29, VAR_14, VAR_26);
 FUNC_1(VAR_28, VAR_29, VAR_6, VAR_5);

 if (VAR_34)
  FUNC_1(VAR_28, VAR_29, VAR_13, VAR_2);
 else
  FUNC_1(VAR_28, VAR_29, VAR_23, VAR_30);

 if (VAR_35) {
  FUNC_1(VAR_28, VAR_29, VAR_13, VAR_1);
 }
 else {


  FUNC_1(VAR_28, VAR_29, VAR_11, 0);
  FUNC_1(VAR_28, VAR_29, VAR_10, VAR_31);
  FUNC_1(VAR_28, VAR_29, VAR_9, (u32)VAR_25 | ((u32)VAR_32 << 16));
  FUNC_1(VAR_28, VAR_29, VAR_8, VAR_24);
  FUNC_1(VAR_28, VAR_29, VAR_7, (u32)VAR_21 << 16);
  FUNC_1(VAR_28, VAR_29, VAR_15, VAR_22);
  if (VAR_33)
   FUNC_1(VAR_28, VAR_29, VAR_12, (VAR_33 * 1024) / VAR_0);
 }

 return VAR_18;
}

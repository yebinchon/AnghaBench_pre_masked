
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct dbg_bus_data {scalar_t__ state; scalar_t__ trigger_en; } ;
struct dbg_tools_data {struct dbg_bus_data bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 scalar_t__ FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

enum dbg_status FUNC_6(struct ecore_hwfn *VAR_10,
           struct ecore_ptt *VAR_11)
{
 struct dbg_tools_data *VAR_12 = &VAR_10->dbg_info;
 struct dbg_bus_data *VAR_13 = &VAR_12->bus;
 enum dbg_status VAR_14 = VAR_5;

 FUNC_0(VAR_10, VAR_7, "dbg_bus_stop\n");

 if (VAR_13->state != VAR_0)
  return VAR_6;

 VAR_14 = FUNC_2(VAR_10, VAR_11, 1);
 if (VAR_14 != VAR_5)
  return VAR_14;

 FUNC_5(VAR_10, VAR_11, VAR_2, 1);

 FUNC_1(VAR_8);

 FUNC_3(VAR_10, VAR_11, 0);


 if (VAR_13->trigger_en) {
  u32 VAR_15 = FUNC_4(VAR_10, VAR_11, VAR_3);

  if (VAR_15 != VAR_9)
   return VAR_4;
 }

 VAR_13->state = VAR_1;

 return VAR_14;
}

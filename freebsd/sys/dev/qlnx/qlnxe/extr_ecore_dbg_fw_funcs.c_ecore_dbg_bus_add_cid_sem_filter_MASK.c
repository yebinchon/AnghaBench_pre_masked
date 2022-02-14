
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct dbg_bus_storm_data* storms; } ;
struct dbg_tools_data {TYPE_1__ bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct dbg_bus_storm_data {int cid_filter_en; int cid; int enabled; } ;
typedef enum dbg_storms { ____Placeholder_dbg_storms } dbg_storms ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;

enum dbg_status FUNC_1(struct ecore_hwfn *VAR_5,
             enum dbg_storms VAR_6,
             u32 VAR_7)
{
 struct dbg_tools_data *VAR_8 = &VAR_5->dbg_info;
 struct dbg_bus_storm_data *VAR_9;

 VAR_9 = &VAR_8->bus.storms[VAR_6];

 FUNC_0(VAR_5, VAR_3, "dbg_bus_add_cid_sem_filter: storm = %d, cid = 0x%x\n", VAR_6, VAR_7);

 if (VAR_6 >= VAR_4)
  return VAR_0;
 if (!VAR_9->enabled)
  return VAR_2;

 VAR_9->cid_filter_en = 1;
 VAR_9->cid = VAR_7;

 return VAR_1;
}

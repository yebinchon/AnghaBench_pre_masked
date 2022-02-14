
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct storm_defs {int sem_sync_dbg_empty_addr; } ;
struct ecore_ptt {int dummy; } ;
struct dbg_bus_data {scalar_t__ target; struct dbg_bus_storm_data* storms; scalar_t__ one_shot_en; } ;
struct dbg_tools_data {struct dbg_bus_data bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct dbg_bus_storm_data {size_t hw_id; scalar_t__ enabled; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (size_t) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,size_t) ;
 struct storm_defs* VAR_9 ;

__attribute__((used)) static enum dbg_status FUNC_3(struct ecore_hwfn *VAR_10,
            struct ecore_ptt *VAR_11)
{
 struct dbg_tools_data *VAR_12 = &VAR_10->dbg_info;
 struct dbg_bus_data *VAR_13 = &VAR_12->bus;
 u8 VAR_14, VAR_15, VAR_16 = 0;
 u32 VAR_17 = 0;


 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
  struct dbg_bus_storm_data *VAR_18 = &VAR_13->storms[VAR_14];
  struct storm_defs *VAR_19 = &VAR_9[VAR_14];

  if (VAR_18->enabled && !FUNC_1(VAR_10, VAR_11, VAR_19->sem_sync_dbg_empty_addr))
   return VAR_5;
 }

 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
  struct dbg_bus_storm_data *VAR_20 = &VAR_13->storms[VAR_14];

  if (VAR_20->enabled)
   VAR_17 |= (VAR_20->hw_id << (VAR_14 * VAR_6));
 }

 FUNC_2(VAR_10, VAR_11, VAR_3, VAR_17);


 FUNC_2(VAR_10, VAR_11, VAR_2, (VAR_12->bus.target == VAR_0 && VAR_13->one_shot_en) ? 0 : 1);


 for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++, VAR_16 = (VAR_16 + 1) % VAR_7) {


  for (; !VAR_12->bus.storms[VAR_16].enabled; VAR_16 = (VAR_16 + 1) % VAR_7);


  FUNC_2(VAR_10, VAR_11, VAR_1 + FUNC_0(VAR_15), VAR_16);
 }

 return VAR_4;
}

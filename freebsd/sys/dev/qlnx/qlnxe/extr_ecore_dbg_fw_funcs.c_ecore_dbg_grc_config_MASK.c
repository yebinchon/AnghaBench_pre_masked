
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ecore_hwfn {int dummy; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
typedef enum dbg_grc_params { ____Placeholder_dbg_grc_params } dbg_grc_params ;
struct TYPE_2__ {int crash_preset_val; int exclude_all_preset_val; scalar_t__ is_preset; int max; int min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ecore_hwfn*) ;
 int FUNC_2 (struct ecore_hwfn*,int,int ) ;
 TYPE_1__* VAR_6 ;

enum dbg_status FUNC_3(struct ecore_hwfn *VAR_7,
          enum dbg_grc_params VAR_8,
          u32 VAR_9)
{
 int VAR_10;

 FUNC_0(VAR_7, VAR_4, "dbg_grc_config: paramId = %d, val = %d\n", VAR_8, VAR_9);




 FUNC_1(VAR_7);

 if (VAR_8 >= VAR_5)
  return VAR_2;
 if (VAR_9 < VAR_6[VAR_8].min ||
  VAR_9 > VAR_6[VAR_8].max)
  return VAR_2;

 if (VAR_6[VAR_8].is_preset) {






  if (!VAR_9)
   return VAR_2;


  for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
   u32 VAR_11;

   if (VAR_8 == VAR_1)
    VAR_11 = VAR_6[VAR_10].exclude_all_preset_val;
   else if (VAR_8 == VAR_0)
    VAR_11 = VAR_6[VAR_10].crash_preset_val;
   else
    return VAR_2;

   FUNC_2(VAR_7, (enum dbg_grc_params)VAR_10, VAR_11);
  }
 }
 else {


  FUNC_2(VAR_7, VAR_8, VAR_9);
 }

 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct dbg_tools_data {scalar_t__ platform_id; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
typedef enum dbg_storms { ____Placeholder_dbg_storms } dbg_storms ;
struct TYPE_2__ {int has_vfc; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int*,int,size_t) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int*,int,size_t,int *) ;
 int FUNC_2 (struct ecore_hwfn*,int) ;
 TYPE_1__* VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static u32 FUNC_3(struct ecore_hwfn *VAR_6,
         struct ecore_ptt *VAR_7,
         u32 *VAR_8,
         bool VAR_9)
{
 struct dbg_tools_data *VAR_10 = &VAR_6->dbg_info;
 u8 VAR_11, VAR_12;
 u32 VAR_13 = 0;

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  if (!FUNC_2(VAR_6, (enum dbg_storms)VAR_11) ||
   !VAR_4[VAR_11].has_vfc ||
   (VAR_11 == VAR_0 && VAR_10->platform_id != VAR_3))
   continue;


  VAR_13 += FUNC_0(VAR_6, VAR_7, VAR_8 + VAR_13, VAR_9, VAR_11);


  for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
   VAR_13 += FUNC_1(VAR_6, VAR_7, VAR_8 + VAR_13, VAR_9, VAR_11, &VAR_5[VAR_12]);
 }

 return VAR_13;
}

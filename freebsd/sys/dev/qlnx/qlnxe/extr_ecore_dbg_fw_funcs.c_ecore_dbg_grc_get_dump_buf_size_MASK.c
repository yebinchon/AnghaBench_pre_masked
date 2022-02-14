
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
struct TYPE_2__ {int ptr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,int,scalar_t__*) ;
 TYPE_1__* VAR_8 ;

enum dbg_status FUNC_2(struct ecore_hwfn *VAR_9,
            struct ecore_ptt *VAR_10,
            u32 *VAR_11)
{
 enum dbg_status VAR_12 = FUNC_0(VAR_9, VAR_10);

 *VAR_11 = 0;

 if (VAR_12 != VAR_6)
  return VAR_12;

 if (!VAR_8[VAR_4].ptr || !VAR_8[VAR_3].ptr || !VAR_8[VAR_2].ptr ||
  !VAR_8[VAR_0].ptr || !VAR_8[VAR_1].ptr)
  return VAR_5;

 return FUNC_1(VAR_9, VAR_10, VAR_7, 0, VAR_11);
}

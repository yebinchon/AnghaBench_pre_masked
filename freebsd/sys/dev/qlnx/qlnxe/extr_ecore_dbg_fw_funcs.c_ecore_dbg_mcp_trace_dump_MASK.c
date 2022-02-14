
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ecore_hwfn*) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__*) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__*,int,scalar_t__*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*) ;

enum dbg_status FUNC_4(struct ecore_hwfn *VAR_3,
           struct ecore_ptt *VAR_4,
           u32 *VAR_5,
           u32 VAR_6,
           u32 *VAR_7)
{
 u32 VAR_8;
 enum dbg_status VAR_9;

 VAR_9 = FUNC_1(VAR_3, VAR_4, &VAR_8);
 if (VAR_9 != VAR_2 && VAR_9 != VAR_1)
  return VAR_9;

 if (VAR_6 < VAR_8)
  return VAR_0;


 FUNC_3(VAR_3, VAR_4);


 VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5, 1, VAR_7);


 FUNC_0(VAR_3);

 return VAR_9;
}

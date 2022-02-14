
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
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*) ;
 scalar_t__ FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*) ;

enum dbg_status FUNC_3(struct ecore_hwfn *VAR_2,
                struct ecore_ptt *VAR_3,
                u32 *VAR_4)
{
 enum dbg_status VAR_5 = FUNC_0(VAR_2, VAR_3);

 *VAR_4 = 0;

 if (VAR_5 != VAR_0)
  return VAR_5;


 FUNC_2(VAR_2, VAR_3);

 *VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_1, 0);

 return VAR_0;
}

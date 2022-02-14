
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int ,int,int*,int*) ;

enum _ecore_status_t FUNC_1(struct ecore_hwfn *VAR_6,
      struct ecore_ptt *VAR_7,
      u16 VAR_8, u32 *VAR_9)
{
 enum _ecore_status_t VAR_10 = VAR_2;
 u32 VAR_11 = 0, VAR_12;

 VAR_11 = (VAR_8 << VAR_0);

 VAR_10 = FUNC_0(VAR_6, VAR_7, VAR_1,
      VAR_11, &VAR_12, VAR_9);

 if (VAR_10 != VAR_2)
  return VAR_10;

 if ((VAR_12 & VAR_5) != VAR_4)
  return VAR_3;

 return VAR_2;
}

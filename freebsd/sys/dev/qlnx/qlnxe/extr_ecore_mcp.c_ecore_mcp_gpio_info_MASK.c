
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int ,int,int*,int*) ;

enum _ecore_status_t FUNC_1(struct ecore_hwfn *VAR_10,
      struct ecore_ptt *VAR_11,
      u16 VAR_12, u32 *VAR_13,
      u32 *VAR_14)
{
 u32 VAR_15 = 0, VAR_16, VAR_17 = 0;
 enum _ecore_status_t VAR_18 = VAR_6;

 VAR_15 = VAR_12 << VAR_4;

 VAR_18 = FUNC_0(VAR_10, VAR_11, VAR_5,
      VAR_15, &VAR_16, &VAR_17);
 if (VAR_18 != VAR_6)
  return VAR_18;

 *VAR_13 = (VAR_17 & VAR_2) >>
      VAR_3;
 *VAR_14 = (VAR_17 & VAR_0) >>
        VAR_1;

 if ((VAR_16 & VAR_9) != VAR_8)
  return VAR_7;

 return VAR_6;
}

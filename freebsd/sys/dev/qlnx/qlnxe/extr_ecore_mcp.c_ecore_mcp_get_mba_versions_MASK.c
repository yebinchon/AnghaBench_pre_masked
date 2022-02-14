
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_mba_vers {int * mba_vers; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,scalar_t__*,scalar_t__*,scalar_t__*,int *) ;

enum _ecore_status_t FUNC_1(
 struct ecore_hwfn *VAR_6,
 struct ecore_ptt *VAR_7,
 struct ecore_mba_vers *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11;
 enum _ecore_status_t VAR_12;

 VAR_12 = FUNC_0(VAR_6, VAR_7, VAR_0,
      0, &VAR_10, &VAR_11, &VAR_9,
      &(VAR_8->mba_vers[0]));

 if (VAR_12 != VAR_1)
  return VAR_12;

 if ((VAR_10 & VAR_3) != VAR_4)
  VAR_12 = VAR_2;

 if (VAR_9 != VAR_5)
  VAR_12 = VAR_2;

 return VAR_12;
}

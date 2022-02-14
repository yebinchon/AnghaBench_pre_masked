
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
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
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int ,int,int*,int*) ;

enum _ecore_status_t FUNC_1(
 struct ecore_hwfn *VAR_7, struct ecore_ptt *VAR_8, u32 *VAR_9)
{
 u32 VAR_10 = 0, VAR_11;
 enum _ecore_status_t VAR_12 = VAR_3;

 VAR_10 = (VAR_0 <<
   VAR_1);

 VAR_12 = FUNC_0(VAR_7, VAR_8, VAR_2,
      VAR_10, &VAR_11, VAR_9);

 if (VAR_12 != VAR_3)
  return VAR_12;

 if (((VAR_11 & VAR_5) != VAR_6))
  VAR_12 = VAR_4;

 return VAR_12;
}

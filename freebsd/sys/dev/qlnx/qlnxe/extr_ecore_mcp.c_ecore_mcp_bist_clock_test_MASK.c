
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int ,scalar_t__,scalar_t__*,scalar_t__*) ;

enum _ecore_status_t FUNC_1(struct ecore_hwfn *VAR_8,
            struct ecore_ptt *VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12;
 enum _ecore_status_t VAR_13 = VAR_4;

 VAR_10 = (VAR_0 <<
   VAR_2);

 VAR_13 = FUNC_0(VAR_8, VAR_9, VAR_3,
      VAR_10, &VAR_11, &VAR_12);

 if (VAR_13 != VAR_4)
  return VAR_13;

 if (((VAR_11 & VAR_6) != VAR_7) ||
     (VAR_12 != VAR_1))
  VAR_13 = VAR_5;

 return VAR_13;
}

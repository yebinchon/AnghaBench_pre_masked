
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ VAR_0 ;

 int FUNC_0 (int ) ;

 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int,scalar_t__,scalar_t__*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_2(struct ecore_hwfn *VAR_9,
       struct ecore_ptt *VAR_10)
{
 bool VAR_11 = FUNC_0(VAR_9->p_dev);
 u32 VAR_12, VAR_13;
 u8 VAR_14;
 enum _ecore_status_t VAR_15;

 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
  switch (VAR_14) {
  case 130:
   VAR_12 = VAR_5;
   break;
  case 129:



   VAR_12 = VAR_6;
   break;
  case 128:
   VAR_12 = VAR_11 ? VAR_8
         : VAR_7;
   break;
  case 131:
   VAR_12 = VAR_0;
   break;
  default:
   continue;
  }

  VAR_15 = FUNC_1(VAR_9, VAR_10, VAR_14,
         VAR_12, &VAR_13);
  if (VAR_15 != VAR_3)
   return VAR_15;







  if (VAR_13 == VAR_4)
   return VAR_2;
 }

 return VAR_3;
}

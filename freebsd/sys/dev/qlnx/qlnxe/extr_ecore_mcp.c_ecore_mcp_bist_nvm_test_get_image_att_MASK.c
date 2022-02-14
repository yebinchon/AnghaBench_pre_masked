
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct bist_nvm_image_att {int return_code; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int ,int,int*,int*,int*,int*) ;

enum _ecore_status_t FUNC_1(
 struct ecore_hwfn *VAR_8, struct ecore_ptt *VAR_9,
 struct bist_nvm_image_att *VAR_10, u32 VAR_11)
{
 u32 VAR_12, VAR_13, VAR_14, VAR_15;
 enum _ecore_status_t VAR_16;

 VAR_13 = (VAR_0 <<
        VAR_2);
 VAR_13 |= (VAR_11 <<
         VAR_1);
 VAR_16 = FUNC_0(VAR_8, VAR_9, VAR_3,
      VAR_13, &VAR_14, &VAR_15, &VAR_12,
      (u32 *)VAR_10);
 if (VAR_16 != VAR_4)
  return VAR_16;

 if (((VAR_14 & VAR_6) != VAR_7) ||
     (VAR_10->return_code != 1))
  VAR_16 = VAR_5;

 return VAR_16;
}

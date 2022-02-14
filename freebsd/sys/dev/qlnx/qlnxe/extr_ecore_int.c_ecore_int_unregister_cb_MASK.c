
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct ecore_sb_sp_info {TYPE_1__* pi_info_arr; } ;
struct ecore_hwfn {struct ecore_sb_sp_info* p_sp_sb; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {scalar_t__ comp_cb; scalar_t__ cookie; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

enum _ecore_status_t FUNC_0(struct ecore_hwfn *VAR_3,
          u8 VAR_4)
{
 struct ecore_sb_sp_info *VAR_5 = VAR_3->p_sp_sb;

 if (VAR_5->pi_info_arr[VAR_4].comp_cb == VAR_2)
  return VAR_0;

 VAR_5->pi_info_arr[VAR_4].comp_cb = VAR_2;
 VAR_5->pi_info_arr[VAR_4].cookie = VAR_2;

 return VAR_1;
}

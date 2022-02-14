
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_5__ {TYPE_1__* sb_virt; } ;
struct ecore_sb_sp_info {TYPE_2__ sb_info; TYPE_3__* pi_info_arr; } ;
struct ecore_hwfn {struct ecore_sb_sp_info* p_sp_sb; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef scalar_t__ ecore_int_comp_cb_t ;
typedef int __le16 ;
struct TYPE_6__ {scalar_t__ comp_cb; void* cookie; } ;
struct TYPE_4__ {int * pi_array; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;

enum _ecore_status_t FUNC_1(struct ecore_hwfn *VAR_3,
        ecore_int_comp_cb_t VAR_4,
        void *VAR_5,
        u8 *VAR_6,
        __le16 **VAR_7)
{
 struct ecore_sb_sp_info *VAR_8 = VAR_3->p_sp_sb;
 enum _ecore_status_t VAR_9 = VAR_0;
 u8 VAR_10;


 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_8->pi_info_arr); VAR_10++) {
  if (VAR_8->pi_info_arr[VAR_10].comp_cb != VAR_2)
   continue;

  VAR_8->pi_info_arr[VAR_10].comp_cb = VAR_4;
  VAR_8->pi_info_arr[VAR_10].cookie = VAR_5;
  *VAR_6 = VAR_10;
  *VAR_7 = &VAR_8->sb_info.sb_virt->pi_array[VAR_10];
  VAR_9 = VAR_1;
  break;
 }

 return VAR_9;
}

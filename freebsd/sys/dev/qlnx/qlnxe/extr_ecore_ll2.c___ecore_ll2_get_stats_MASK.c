
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct ecore_ptt {int dummy; } ;
struct ecore_ll2_stats {int dummy; } ;
struct TYPE_2__ {scalar_t__ gsi_enable; } ;
struct ecore_ll2_info {scalar_t__ tx_stats_en; TYPE_1__ input; } ;
struct ecore_hwfn {struct ecore_ll2_info* p_ll2_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct ecore_ll2_info* VAR_3 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_ll2_stats*) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_ll2_info*,struct ecore_ll2_stats*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_ll2_info*,struct ecore_ll2_stats*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_ll2_info*,struct ecore_ll2_stats*) ;
 struct ecore_ptt* FUNC_5 (struct ecore_hwfn*) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*) ;

enum _ecore_status_t FUNC_7(void *VAR_4,
        u8 VAR_5,
        struct ecore_ll2_stats *VAR_6)
{
 struct ecore_hwfn *VAR_7 = (struct ecore_hwfn *)VAR_4;
 struct ecore_ll2_info *VAR_8 = VAR_3;
 struct ecore_ptt *VAR_9;

 if ((VAR_5 >= VAR_1) ||
     !VAR_7->p_ll2_info) {
  return VAR_0;
 }

 VAR_8 = &VAR_7->p_ll2_info[VAR_5];

 VAR_9 = FUNC_5(VAR_7);
 if (!VAR_9) {
  FUNC_0(VAR_7, "Failed to acquire ptt\n");
  return VAR_0;
 }

 if (VAR_8->input.gsi_enable)
  FUNC_1(VAR_7, VAR_9, VAR_6);

 FUNC_3(VAR_7, VAR_9, VAR_8, VAR_6);

 FUNC_4(VAR_7, VAR_9, VAR_8, VAR_6);

 if (VAR_8->tx_stats_en)
  FUNC_2(VAR_7, VAR_9, VAR_8, VAR_6);

 FUNC_6(VAR_7, VAR_9);

 return VAR_2;
}

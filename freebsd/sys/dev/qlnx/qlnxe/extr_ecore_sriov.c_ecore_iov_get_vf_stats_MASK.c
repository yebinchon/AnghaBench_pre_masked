
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ecore_vf_info {scalar_t__ state; scalar_t__ abs_vf_id; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_eth_stats {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_eth_stats*,scalar_t__,int) ;
 struct ecore_vf_info* FUNC_1 (struct ecore_hwfn*,int ,int) ;

enum _ecore_status_t FUNC_2(struct ecore_hwfn *VAR_3,
         struct ecore_ptt *VAR_4,
         int VAR_5,
         struct ecore_eth_stats *VAR_6)
{
 struct ecore_vf_info *VAR_7;

 VAR_7 = FUNC_1(VAR_3, (u16)VAR_5, 1);
 if (!VAR_7)
  return VAR_0;

 if (VAR_7->state != VAR_2)
  return VAR_0;

 FUNC_0(VAR_3, VAR_4, VAR_6,
    VAR_7->abs_vf_id + 0x10, 0);

 return VAR_1;
}

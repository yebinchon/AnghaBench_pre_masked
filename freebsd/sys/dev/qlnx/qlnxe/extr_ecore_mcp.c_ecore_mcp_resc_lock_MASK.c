
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ecore_resc_lock_params {scalar_t__ retry_num; scalar_t__ b_granted; int retry_interval; scalar_t__ sleep_b4_retry; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_resc_lock_params*) ;

enum _ecore_status_t
FUNC_4(struct ecore_hwfn *VAR_1, struct ecore_ptt *VAR_2,
      struct ecore_resc_lock_params *VAR_3)
{
 u32 VAR_4 = 0;
 enum _ecore_status_t VAR_5;

 do {

  if (VAR_4) {
   if (VAR_3->sleep_b4_retry) {
    u32 VAR_6 =
     FUNC_0(VAR_3->retry_interval,
           1000);

    FUNC_1(VAR_6);
   } else {
    FUNC_2(VAR_3->retry_interval);
   }
  }

  VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3);
  if (VAR_5 != VAR_0)
   return VAR_5;

  if (VAR_3->b_granted)
   break;
 } while (VAR_4++ < VAR_3->retry_num);

 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct ecore_resc_lock_params {int b_granted; scalar_t__ retry_interval; scalar_t__ retry_num; int resource; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ecore_resc_lock_params*,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_resc_lock_params*) ;

enum _ecore_status_t
FUNC_3(struct ecore_hwfn *VAR_5,
    struct ecore_ptt *VAR_6,
    u8 VAR_7,
    u32 VAR_8)
{
 struct ecore_resc_lock_params VAR_9;
 enum _ecore_status_t VAR_10;

 FUNC_1(&VAR_9,
        sizeof(struct ecore_resc_lock_params));
 VAR_9.resource = VAR_3;
 if (!VAR_7)
  VAR_7 = VAR_1;
 VAR_9.retry_num = VAR_7;

 if (!VAR_8)
  VAR_8 = VAR_2;
 VAR_9.retry_interval = VAR_8;

 VAR_10 = FUNC_2(VAR_5, VAR_6, &VAR_9);
 if (VAR_10 == VAR_4 && !VAR_9.b_granted) {
  FUNC_0(VAR_5, 0,
     "Failed to acquire the resource lock for IDT access\n");
  return VAR_0;
 }
 return VAR_10;
}

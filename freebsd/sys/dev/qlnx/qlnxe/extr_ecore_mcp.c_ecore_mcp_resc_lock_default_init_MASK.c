
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_resc_unlock_params {int sleep_b4_retry; int resource; int retry_interval; int retry_num; int timeout; } ;
struct ecore_resc_lock_params {int sleep_b4_retry; int resource; int retry_interval; int retry_num; int timeout; } ;
typedef enum ecore_resc_lock { ____Placeholder_ecore_resc_lock } ecore_resc_lock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ecore_resc_unlock_params*,int) ;
 struct ecore_resc_unlock_params* VAR_3 ;

void FUNC_1(struct ecore_resc_lock_params *VAR_4,
          struct ecore_resc_unlock_params *VAR_5,
          enum ecore_resc_lock VAR_6,
          bool VAR_7)
{
 if (VAR_4 != VAR_3) {
  FUNC_0(VAR_4, sizeof(*VAR_4));





  if (VAR_7) {
   VAR_4->timeout = VAR_2;
  } else {
   VAR_4->retry_num = VAR_0;
   VAR_4->retry_interval =
     VAR_1;
   VAR_4->sleep_b4_retry = 1;
  }

  VAR_4->resource = VAR_6;
 }

 if (VAR_5 != VAR_3) {
  FUNC_0(VAR_5, sizeof(*VAR_5));
  VAR_5->resource = VAR_6;
 }
}

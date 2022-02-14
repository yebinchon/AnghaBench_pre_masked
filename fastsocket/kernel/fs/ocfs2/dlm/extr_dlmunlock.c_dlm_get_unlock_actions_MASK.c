
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lockstatus {int dummy; } ;
struct dlm_lock_resource {int granted; } ;
struct dlm_lock {int dummy; } ;
struct dlm_ctxt {int dummy; } ;
typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct dlm_lock*) ;

__attribute__((used)) static enum dlm_status FUNC_2(struct dlm_ctxt *VAR_5,
           struct dlm_lock_resource *VAR_6,
           struct dlm_lock *VAR_7,
           struct dlm_lockstatus *VAR_8,
           int *VAR_9)
{
 enum dlm_status VAR_10;


 if (!FUNC_1(&VAR_6->granted, VAR_7)) {
  VAR_10 = VAR_0;
  FUNC_0(VAR_10);
  *VAR_9 = 0;
 } else {

  VAR_10 = VAR_1;
  *VAR_9 = (VAR_3 |
       VAR_2 |
       VAR_4);
 }
 return VAR_10;
}

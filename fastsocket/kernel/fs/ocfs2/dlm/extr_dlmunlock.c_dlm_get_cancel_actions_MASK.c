
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lockstatus {int dummy; } ;
struct dlm_lock_resource {int granted; int converting; int blocked; } ;
struct dlm_lock {int dummy; } ;
struct dlm_ctxt {int dummy; } ;
typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *,struct dlm_lock*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static enum dlm_status FUNC_2(struct dlm_ctxt *VAR_8,
           struct dlm_lock_resource *VAR_9,
           struct dlm_lock *VAR_10,
           struct dlm_lockstatus *VAR_11,
           int *VAR_12)
{
 enum dlm_status VAR_13;

 if (FUNC_0(&VAR_9->blocked, VAR_10)) {

  VAR_13 = VAR_2;
  *VAR_12 = (VAR_3 |
       VAR_6);
 } else if (FUNC_0(&VAR_9->converting, VAR_10)) {

  VAR_13 = VAR_2;
  *VAR_12 = (VAR_3 |
       VAR_6 |
       VAR_5 |
       VAR_4);
 } else if (FUNC_0(&VAR_9->granted, VAR_10)) {

  VAR_13 = VAR_0;
  *VAR_12 = VAR_3;
 } else {
  FUNC_1(VAR_7, "lock to cancel is not on any list!\n");
  VAR_13 = VAR_1;
  *VAR_12 = 0;
 }
 return VAR_13;
}

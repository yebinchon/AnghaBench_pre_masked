
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lockstatus {int dummy; } ;
struct dlm_lock_resource {int dummy; } ;
struct dlm_lock {int dummy; } ;
struct dlm_ctxt {int dummy; } ;
typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;


 int FUNC_0 (struct dlm_ctxt*,struct dlm_lock_resource*,struct dlm_lock*,struct dlm_lockstatus*,int,int*,int) ;

__attribute__((used)) static inline enum dlm_status FUNC_1(struct dlm_ctxt *VAR_0,
       struct dlm_lock_resource *VAR_1,
       struct dlm_lock *VAR_2,
       struct dlm_lockstatus *VAR_3,
       int VAR_4,
       int *VAR_5)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, 1);
}

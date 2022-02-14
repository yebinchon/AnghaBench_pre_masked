
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct common_audit_data {int (* lsm_post_audit ) (struct audit_buffer*,struct common_audit_data*) ;int (* lsm_pre_audit ) (struct audit_buffer*,struct common_audit_data*) ;} ;
struct audit_buffer {int dummy; } ;
struct TYPE_2__ {int audit_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct audit_buffer*) ;
 struct audit_buffer* FUNC_1 (int ,int ,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (struct audit_buffer*,struct common_audit_data*) ;
 int FUNC_3 (struct audit_buffer*,struct common_audit_data*) ;
 int FUNC_4 (struct audit_buffer*,struct common_audit_data*) ;

void FUNC_5(struct common_audit_data *VAR_3)
{
 struct audit_buffer *VAR_4;

 if (VAR_3 == ((void*)0))
  return;

 VAR_4 = FUNC_1(VAR_2->audit_context, VAR_1, VAR_0);

 if (VAR_4 == ((void*)0))
  return;

 if (VAR_3->lsm_pre_audit)
  VAR_3->lsm_pre_audit(VAR_4, VAR_3);

 FUNC_2(VAR_4, VAR_3);

 if (VAR_3->lsm_post_audit)
  VAR_3->lsm_post_audit(VAR_4, VAR_3);

 FUNC_0(VAR_4);
}

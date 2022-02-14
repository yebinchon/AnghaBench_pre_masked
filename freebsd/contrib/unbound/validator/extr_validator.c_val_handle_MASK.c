
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_qstate {int state; } ;
struct val_env {int dummy; } ;
struct module_qstate {int dummy; } ;







 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct module_qstate*,struct val_qstate*,struct val_env*,int) ;
 int FUNC_2 (struct module_qstate*,struct val_qstate*,int) ;
 int FUNC_3 (struct module_qstate*,struct val_qstate*,struct val_env*,int) ;
 int FUNC_4 (struct module_qstate*,struct val_qstate*,struct val_env*,int) ;
 int FUNC_5 (struct module_qstate*,struct val_qstate*,struct val_env*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_8(struct module_qstate* VAR_1, struct val_qstate* VAR_2,
 struct val_env* VAR_3, int VAR_4)
{
 int VAR_5 = 1;
 while(VAR_5) {
  FUNC_7(VAR_0, "val handle processing q with state %s",
   FUNC_6(VAR_2->state));
  switch(VAR_2->state) {
   case 129:
    VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);
    break;
   case 131:
    VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_4);
    break;
   case 128:
    VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4);
    break;
   case 130:
    VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
    break;
   case 132:
    VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
    break;
   default:
    FUNC_0("validator: invalid state %d",
     VAR_2->state);
    VAR_5 = 0;
    break;
  }
 }
}

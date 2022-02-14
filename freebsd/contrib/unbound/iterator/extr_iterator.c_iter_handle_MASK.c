
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_qstate {int dummy; } ;
struct iter_qstate {int state; } ;
struct iter_env {int dummy; } ;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct module_qstate*,int) ;
 int FUNC_3 (struct module_qstate*,struct iter_qstate*,int) ;
 int FUNC_4 (struct module_qstate*,struct iter_qstate*,int) ;
 int FUNC_5 (struct module_qstate*,struct iter_qstate*,struct iter_env*,int) ;
 int FUNC_6 (struct module_qstate*,struct iter_qstate*,int) ;
 int FUNC_7 (struct module_qstate*,struct iter_qstate*,int) ;
 int FUNC_8 (struct module_qstate*,int) ;
 int FUNC_9 (struct module_qstate*,struct iter_qstate*,int) ;
 int FUNC_10 (struct module_qstate*,struct iter_qstate*,struct iter_env*,int) ;
 int FUNC_11 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_12(struct module_qstate* VAR_1, struct iter_qstate* VAR_2,
 struct iter_env* VAR_3, int VAR_4)
{
 int VAR_5 = 1;
 while(VAR_5) {
  FUNC_11(VAR_0, "iter_handle processing q with state %s",
   FUNC_0(VAR_2->state));
  switch(VAR_2->state) {
   case 131:
    VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4);
    break;
   case 133:
    VAR_5 = FUNC_6(VAR_1, VAR_2, VAR_4);
    break;
   case 132:
    VAR_5 = FUNC_7(VAR_1, VAR_2, VAR_4);
    break;
   case 129:
    VAR_5 = FUNC_10(VAR_1, VAR_2, VAR_3, VAR_4);
    break;
   case 128:
    VAR_5 = FUNC_9(VAR_1, VAR_2, VAR_4);
    break;
   case 130:
    VAR_5 = FUNC_8(VAR_1, VAR_4);
    break;
   case 136:
    VAR_5 = FUNC_2(VAR_1, VAR_4);
    break;
   case 135:
    VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_4);
    break;
   case 134:
    VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_4);
    break;
   default:
    FUNC_1("iterator: invalid state: %d",
     VAR_2->state);
    VAR_5 = 0;
    break;
  }
 }
}

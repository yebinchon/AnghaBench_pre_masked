
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_qstate {int dummy; } ;
struct iter_qstate {int final_state; int state; } ;
struct iter_env {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct module_qstate*,struct iter_qstate*,struct iter_env*,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(struct module_qstate* VAR_3, struct iter_qstate* VAR_4,
 struct iter_env* VAR_5, int VAR_6)
{


 VAR_4->state = VAR_1;
 VAR_4->final_state = VAR_0;
 FUNC_1(VAR_2, "process_request: new external request event");
 FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
}

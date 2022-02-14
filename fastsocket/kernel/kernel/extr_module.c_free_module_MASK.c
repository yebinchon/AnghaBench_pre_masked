
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module {int module_core; int core_size; scalar_t__ refptr; scalar_t__ percpu; int args; int module_init; int num_kp; int kp; int name; } ;
struct TYPE_2__ {int mm; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct module*) ;
 int FUNC_5 (struct module*) ;
 int FUNC_6 (struct module*,int ) ;
 int FUNC_7 (struct module*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct module*) ;
 int FUNC_10 (struct module*) ;
 int FUNC_11 (int ,struct module*,int *) ;
 int FUNC_12 (struct module*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct module *VAR_2)
{
 FUNC_12(VAR_2);


 FUNC_11(VAR_0, VAR_2, ((void*)0));
 FUNC_9(VAR_2);
 FUNC_10(VAR_2);
 FUNC_4(VAR_2);


 FUNC_0(VAR_2->name);


 FUNC_5(VAR_2);


 FUNC_7(VAR_2);


 FUNC_1(VAR_2->kp, VAR_2->num_kp);


 FUNC_6(VAR_2, VAR_2->module_init);
 FUNC_2(VAR_2->args);
 if (VAR_2->percpu)
  FUNC_8(VAR_2->percpu);





 FUNC_3(VAR_2->module_core, VAR_2->core_size);


 FUNC_6(VAR_2, VAR_2->module_core);




}

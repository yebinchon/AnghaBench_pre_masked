
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct ipmi_softc* ich_arg; int ich_func; } ;
struct ipmi_softc {TYPE_1__ ipmi_ich; int ipmi_irq; int * ipmi_intr; int * ipmi_irq_res; } ;
struct intr_config_hook {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,int *,int *,struct ipmi_softc*,int *) ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 struct ipmi_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_5(device_t VAR_4)
{
 struct ipmi_softc *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;

 if (VAR_5->ipmi_irq_res != ((void*)0) && VAR_5->ipmi_intr != ((void*)0)) {
  VAR_6 = FUNC_0(VAR_4, VAR_5->ipmi_irq_res, VAR_1,
      ((void*)0), VAR_5->ipmi_intr, VAR_5, &VAR_5->ipmi_irq);
  if (VAR_6) {
   FUNC_4(VAR_4, "can't set up interrupt\n");
   return (VAR_6);
  }
 }

 FUNC_1(&VAR_5->ipmi_ich, sizeof(struct intr_config_hook));
 VAR_5->ipmi_ich.ich_func = VAR_3;
 VAR_5->ipmi_ich.ich_arg = VAR_5;
 if (FUNC_2(&VAR_5->ipmi_ich) != 0) {
  FUNC_4(VAR_4, "can't establish configuration hook\n");
  return (VAR_0);
 }

 VAR_2 = 1;
 return (0);
}

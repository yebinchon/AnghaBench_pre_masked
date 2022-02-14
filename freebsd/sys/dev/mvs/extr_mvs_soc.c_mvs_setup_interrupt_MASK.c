
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * r_irq; scalar_t__ r_irq_rid; int handle; } ;
struct mvs_controller {TYPE_1__ irq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ,int ,scalar_t__*,int) ;
 int FUNC_1 (int ,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int *,int ,struct mvs_controller*,int *) ;
 struct mvs_controller* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6)
{
 struct mvs_controller *VAR_7 = FUNC_3(VAR_6);


 VAR_7->irq.r_irq_rid = 0;
 if (!(VAR_7->irq.r_irq = FUNC_0(VAR_6, VAR_4,
     &VAR_7->irq.r_irq_rid, VAR_3 | VAR_2))) {
  FUNC_4(VAR_6, "unable to map interrupt\n");
  return (VAR_1);
 }
 if ((FUNC_2(VAR_6, VAR_7->irq.r_irq, VAR_0, ((void*)0),
     VAR_5, VAR_7, &VAR_7->irq.handle))) {
  FUNC_4(VAR_6, "unable to setup interrupt\n");
  FUNC_1(VAR_6, VAR_4,
      VAR_7->irq.r_irq_rid, VAR_7->irq.r_irq);
  VAR_7->irq.r_irq = ((void*)0);
  return (VAR_1);
 }
 return (0);
}

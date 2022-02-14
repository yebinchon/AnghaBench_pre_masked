
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int r_irq_rid; int * r_irq; int handle; } ;
struct mvs_controller {int msi; TYPE_1__ irq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,int ,int,int *) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int *,int ,struct mvs_controller*,int *) ;
 int FUNC_3 (int ) ;
 struct mvs_controller* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (int ,int*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,char*,int*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_6)
{
 struct mvs_controller *VAR_7 = FUNC_4(VAR_6);
 int VAR_8 = 0;


 FUNC_10(FUNC_3(VAR_6),
     FUNC_5(VAR_6), "msi", &VAR_8);
 if (VAR_8 < 0)
  VAR_8 = 0;
 else if (VAR_8 > 0)
  VAR_8 = FUNC_7(1, FUNC_9(VAR_6));

 if (VAR_8 && FUNC_8(VAR_6, &VAR_8) != 0)
  VAR_8 = 0;
 VAR_7->msi = VAR_8;

 VAR_7->irq.r_irq_rid = VAR_8 ? 1 : 0;
 if (!(VAR_7->irq.r_irq = FUNC_0(VAR_6, VAR_4,
     &VAR_7->irq.r_irq_rid, VAR_3 | VAR_2))) {
  FUNC_6(VAR_6, "unable to map interrupt\n");
  return (VAR_1);
 }
 if ((FUNC_2(VAR_6, VAR_7->irq.r_irq, VAR_0, ((void*)0),
     VAR_5, VAR_7, &VAR_7->irq.handle))) {
  FUNC_6(VAR_6, "unable to setup interrupt\n");
  FUNC_1(VAR_6, VAR_4,
      VAR_7->irq.r_irq_rid, VAR_7->irq.r_irq);
  VAR_7->irq.r_irq = ((void*)0);
  return (VAR_1);
 }
 return (0);
}

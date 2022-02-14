
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int r_irq_rid; int handle; int r_irq; } ;
struct siis_controller {int quirks; TYPE_1__ irq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int*,int) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,struct siis_controller*,int *) ;
 int FUNC_2 (int ) ;
 struct siis_controller* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int ,int*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,char*,int*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_10(device_t VAR_7)
{
 struct siis_controller *VAR_8 = FUNC_3(VAR_7);
 int VAR_9 = VAR_8->quirks & VAR_4 ? 0 : 1;


 FUNC_9(FUNC_2(VAR_7),
     FUNC_4(VAR_7), "msi", &VAR_9);
 if (VAR_9 < 0)
  VAR_9 = 0;
 else if (VAR_9 > 0)
  VAR_9 = FUNC_6(1, FUNC_8(VAR_7));

 if (VAR_9 && FUNC_7(VAR_7, &VAR_9) != 0)
  VAR_9 = 0;

 VAR_8->irq.r_irq_rid = VAR_9 ? 1 : 0;
 if (!(VAR_8->irq.r_irq = FUNC_0(VAR_7, VAR_5,
     &VAR_8->irq.r_irq_rid, VAR_3 | VAR_2))) {
  FUNC_5(VAR_7, "unable to map interrupt\n");
  return VAR_1;
 }
 if ((FUNC_1(VAR_7, VAR_8->irq.r_irq, VAR_0, ((void*)0),
     VAR_6, VAR_8, &VAR_8->irq.handle))) {

  FUNC_5(VAR_7, "unable to setup interrupt\n");
  return VAR_1;
 }
 return (0);
}

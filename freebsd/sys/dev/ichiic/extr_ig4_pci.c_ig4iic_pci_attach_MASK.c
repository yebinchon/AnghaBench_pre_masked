
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int platform_attached; int * intr_res; scalar_t__ intr_rid; int * regs_res; scalar_t__ regs_rid; int dev; } ;
typedef TYPE_1__ ig4iic_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ,int ,scalar_t__*,int) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5)
{
 ig4iic_softc_t *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;

 VAR_6->dev = VAR_5;
 VAR_6->regs_rid = FUNC_0(0);
 VAR_6->regs_res = FUNC_1(VAR_5, VAR_4,
       &VAR_6->regs_rid, VAR_1);
 if (VAR_6->regs_res == ((void*)0)) {
  FUNC_3(VAR_5, "unable to map registers\n");
  FUNC_5(VAR_5);
  return (VAR_0);
 }
 VAR_6->intr_rid = 0;
 if (FUNC_6(VAR_5, &VAR_6->intr_rid)) {
  FUNC_3(VAR_5, "Using MSI\n");
 }
 VAR_6->intr_res = FUNC_1(VAR_5, VAR_3,
       &VAR_6->intr_rid, VAR_2 | VAR_1);
 if (VAR_6->intr_res == ((void*)0)) {
  FUNC_3(VAR_5, "unable to map interrupt\n");
  FUNC_5(VAR_5);
  return (VAR_0);
 }
 VAR_6->platform_attached = 1;

 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7)
  FUNC_5(VAR_5);

 return (VAR_7);
}

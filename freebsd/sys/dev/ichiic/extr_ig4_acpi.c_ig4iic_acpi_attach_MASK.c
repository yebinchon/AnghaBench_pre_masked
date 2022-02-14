
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int platform_attached; int * intr_res; scalar_t__ intr_rid; int * regs_res; scalar_t__ regs_rid; int version; int dev; } ;
typedef TYPE_1__ ig4iic_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int ,scalar_t__*,int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6)
{
 ig4iic_softc_t *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_6);

 VAR_7->dev = VAR_6;

 VAR_7->version = VAR_1;
 VAR_7->regs_rid = 0;
 VAR_7->regs_res = FUNC_0(VAR_6, VAR_5,
       &VAR_7->regs_rid, VAR_2);
 if (VAR_7->regs_res == ((void*)0)) {
  FUNC_2(VAR_6, "unable to map registers\n");
  FUNC_3(VAR_6);
  return (VAR_0);
 }
 VAR_7->intr_rid = 0;
 VAR_7->intr_res = FUNC_0(VAR_6, VAR_4,
       &VAR_7->intr_rid, VAR_3 | VAR_2);
 if (VAR_7->intr_res == ((void*)0)) {
  FUNC_2(VAR_6, "unable to map interrupt\n");
  FUNC_3(VAR_6);
  return (VAR_0);
 }
 VAR_7->platform_attached = 1;

 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8)
  FUNC_3(VAR_6);

 return (VAR_8);
}

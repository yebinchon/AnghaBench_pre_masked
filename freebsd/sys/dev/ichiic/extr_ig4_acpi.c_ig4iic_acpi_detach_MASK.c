
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * regs_res; int regs_rid; int * intr_res; int intr_rid; scalar_t__ platform_attached; } ;
typedef TYPE_1__ ig4iic_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 ig4iic_softc_t *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 if (VAR_3->platform_attached) {
  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4)
   return (VAR_4);
  VAR_3->platform_attached = 0;
 }

 if (VAR_3->intr_res) {
  FUNC_0(VAR_2, VAR_0,
         VAR_3->intr_rid, VAR_3->intr_res);
  VAR_3->intr_res = ((void*)0);
 }
 if (VAR_3->regs_res) {
  FUNC_0(VAR_2, VAR_1,
         VAR_3->regs_rid, VAR_3->regs_res);
  VAR_3->regs_res = ((void*)0);
 }

 return (0);
}

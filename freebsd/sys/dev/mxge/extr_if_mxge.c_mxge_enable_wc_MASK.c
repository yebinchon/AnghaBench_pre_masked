
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_3__ {int wc; int dev; scalar_t__ sram; int mem_res; } ;
typedef TYPE_1__ mxge_softc_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(mxge_softc_t *VAR_1)
{

 vm_offset_t VAR_2;
 int VAR_3;

 VAR_1->wc = 1;
 VAR_2 = FUNC_2(VAR_1->mem_res);
 VAR_3 = FUNC_1((vm_offset_t) VAR_1->sram,
          VAR_2, VAR_0);
 if (VAR_3 != 0) {
  FUNC_0(VAR_1->dev, "pmap_change_attr failed, %d\n",
         VAR_3);
  VAR_1->wc = 0;
 }

}

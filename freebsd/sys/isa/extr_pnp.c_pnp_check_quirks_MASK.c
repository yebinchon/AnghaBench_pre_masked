
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct pnp_quirk {scalar_t__ vendor_id; scalar_t__ logical_id; int type; int arg1; int arg2; } ;
struct isa_config {int ic_nport; TYPE_1__* ic_port; } ;
struct TYPE_2__ {int ir_start; int ir_end; } ;




 int VAR_0 ;
 struct pnp_quirk* VAR_1 ;
 int FUNC_0 (int,int) ;

void
FUNC_1(uint32_t VAR_2, uint32_t VAR_3, int VAR_4,
    struct isa_config *VAR_5)
{
 struct pnp_quirk *VAR_6;

 for (VAR_6 = &VAR_1[0]; VAR_6->vendor_id; VAR_6++) {
  if (VAR_6->vendor_id == VAR_2
      && (VAR_6->logical_id == 0 || VAR_6->logical_id == VAR_3)) {
   switch (VAR_6->type) {
   case 128:
    FUNC_0(VAR_0, VAR_4);
    FUNC_0(VAR_6->arg1, VAR_6->arg2);
    break;
   case 129:
    if (VAR_5 == ((void*)0))
     break;
    if (VAR_6->arg1 != 0) {
     VAR_5->ic_nport++;
     VAR_5->ic_port[VAR_5->ic_nport - 1] = VAR_5->ic_port[0];
     VAR_5->ic_port[VAR_5->ic_nport - 1].ir_start += VAR_6->arg1;
     VAR_5->ic_port[VAR_5->ic_nport - 1].ir_end += VAR_6->arg1;
    }
    if (VAR_6->arg2 != 0) {
     VAR_5->ic_nport++;
     VAR_5->ic_port[VAR_5->ic_nport - 1] = VAR_5->ic_port[0];
     VAR_5->ic_port[VAR_5->ic_nport - 1].ir_start += VAR_6->arg2;
     VAR_5->ic_port[VAR_5->ic_nport - 1].ir_end += VAR_6->arg2;
    }
    break;
   }
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int func_code; int sym_hcb_ptr; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int hcb_p ;


 int FUNC_0 () ;
 int FUNC_1 () ;

 int FUNC_2 (int ,union ccb*,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 union ccb *VAR_1 = (union ccb *) VAR_0;
 hcb_p VAR_2 = VAR_1->ccb_h.sym_hcb_ptr;




 if (!VAR_2)
  return;

 FUNC_0();

 switch(VAR_1->ccb_h.func_code) {
 case 128:
  (void) FUNC_2(VAR_2, VAR_1, 1);
  break;
 default:
  break;
 }

 FUNC_1();
}

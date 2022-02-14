
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* hcb_p ;
struct TYPE_3__ {int * path; int * sim; int * intr; int irq_res; int device; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(hcb_p VAR_2)
{

 FUNC_1(VAR_0);

 if (VAR_2->intr) {
  FUNC_3(VAR_2->device, VAR_2->irq_res, VAR_2->intr);
  VAR_2->intr = ((void*)0);
 }

 FUNC_0();

 if (VAR_2->sim) {
  FUNC_6(FUNC_5(VAR_2->sim));
  FUNC_4(VAR_2->sim, VAR_1);
  VAR_2->sim = ((void*)0);
 }
 if (VAR_2->path) {
  FUNC_7(VAR_2->path);
  VAR_2->path = ((void*)0);
 }

 FUNC_2();
}

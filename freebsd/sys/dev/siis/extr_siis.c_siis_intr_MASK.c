
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_4__ {scalar_t__ r_irq_rid; } ;
struct siis_controller {int channels; int gctl; int r_gmem; TYPE_2__ irq; TYPE_1__* interrupt; } ;
struct TYPE_3__ {int (* function ) (void*) ;void* argument; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_3)
{
 struct siis_controller *VAR_4 = (struct siis_controller *)VAR_3;
 u_int32_t VAR_5;
 void *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_4->r_gmem, VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_4->channels; VAR_7++) {
  if ((VAR_5 & FUNC_2(VAR_7)) != 0 &&
      (VAR_6 = VAR_4->interrupt[VAR_7].argument)) {
   VAR_4->interrupt[VAR_7].function(VAR_6);
  }
 }

 if (VAR_4->irq.r_irq_rid) {
  FUNC_1(VAR_4->r_gmem, VAR_0,
      VAR_4->gctl | VAR_1);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm {int dummy; } ;
struct vioapic {TYPE_1__* rtbl; } ;
struct TYPE_2__ {int reg; scalar_t__ acnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct vioapic*,char*,int) ;
 int FUNC_2 (struct vioapic*,char*,int,scalar_t__) ;
 int FUNC_3 (struct vioapic*) ;
 int FUNC_4 (struct vioapic*) ;
 int FUNC_5 (struct vioapic*,int) ;
 struct vioapic* FUNC_6 (struct vm*) ;

void
FUNC_7(struct vm *VAR_3, int VAR_4, int VAR_5)
{
 struct vioapic *VAR_6;
 int VAR_7;

 FUNC_0(VAR_5 >= 0 && VAR_5 < 256,
     ("vioapic_process_eoi: invalid vector %d", VAR_5));

 VAR_6 = FUNC_6(VAR_3);
 FUNC_1(VAR_6, "ioapic processing eoi for vector %d", VAR_5);





 FUNC_3(VAR_6);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if ((VAR_6->rtbl[VAR_7].reg & VAR_1) == 0)
   continue;
  if ((VAR_6->rtbl[VAR_7].reg & VAR_0) != VAR_5)
   continue;
  VAR_6->rtbl[VAR_7].reg &= ~VAR_1;
  if (VAR_6->rtbl[VAR_7].acnt > 0) {
   FUNC_2(VAR_6, "ioapic pin%d: asserted at eoi, "
       "acnt %d", VAR_7, VAR_6->rtbl[VAR_7].acnt);
   FUNC_5(VAR_6, VAR_7);
  }
 }
 FUNC_4(VAR_6);
}

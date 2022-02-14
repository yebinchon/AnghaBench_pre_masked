
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vioapic {TYPE_1__* rtbl; } ;
struct TYPE_2__ {int acnt; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct vioapic*,char*,int) ;
 int FUNC_2 (struct vioapic*,char*,int,int) ;
 int FUNC_3 (struct vioapic*,char*,int,int ,int) ;
 int FUNC_4 (struct vioapic*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct vioapic*,int) ;

__attribute__((used)) static void
FUNC_7(struct vioapic *VAR_1, int VAR_2, bool VAR_3)
{
 int VAR_4, VAR_5;
 bool VAR_6;

 FUNC_0(VAR_2 >= 0 && VAR_2 < VAR_0,
     ("vioapic_set_pinstate: invalid pin number %d", VAR_2));

 FUNC_0(FUNC_4(VAR_1),
     ("vioapic_set_pinstate: vioapic is not locked"));

 VAR_4 = VAR_1->rtbl[VAR_2].acnt;
 if (VAR_3)
  VAR_1->rtbl[VAR_2].acnt++;
 else
  VAR_1->rtbl[VAR_2].acnt--;
 VAR_5 = VAR_1->rtbl[VAR_2].acnt;

 if (VAR_5 < 0) {
  FUNC_2(VAR_1, "ioapic pin%d: bad acnt %d",
      VAR_2, VAR_5);
 }

 VAR_6 = 0;
 if (VAR_4 == 0 && VAR_5 == 1) {
  VAR_6 = 1;
  FUNC_1(VAR_1, "ioapic pin%d: asserted", VAR_2);
 } else if (VAR_4 == 1 && VAR_5 == 0) {
  FUNC_1(VAR_1, "ioapic pin%d: deasserted", VAR_2);
 } else {
  FUNC_3(VAR_1, "ioapic pin%d: %s, ignored, acnt %d",
      VAR_2, FUNC_5(VAR_3), VAR_5);
 }

 if (VAR_6)
  FUNC_6(VAR_1, VAR_2);
}

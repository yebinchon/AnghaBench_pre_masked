
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vioapic {int vm; TYPE_1__* rtbl; } ;
struct TYPE_2__ {int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,char*) ;
 int VAR_9 ;
 int FUNC_1 (struct vioapic*,char*,int) ;
 int FUNC_2 (struct vioapic*) ;
 int FUNC_3 (int ,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_4(struct vioapic *VAR_10, int VAR_11)
{
 int VAR_12, VAR_13;
 uint32_t VAR_14, VAR_15, VAR_16;
 bool VAR_17, VAR_18;

 FUNC_0(VAR_11 >= 0 && VAR_11 < VAR_9,
     ("vioapic_set_pinstate: invalid pin number %d", VAR_11));

 FUNC_0(FUNC_2(VAR_10),
     ("vioapic_set_pinstate: vioapic is not locked"));

 VAR_14 = VAR_10->rtbl[VAR_11].reg;
 VAR_15 = VAR_10->rtbl[VAR_11].reg >> 32;

 if ((VAR_14 & VAR_4) == VAR_5) {
  FUNC_1(VAR_10, "ioapic pin%d: masked", VAR_11);
  return;
 }

 VAR_18 = ((VAR_14 & VAR_2) == VAR_3);
 VAR_13 = VAR_14 & VAR_1;
 VAR_17 = VAR_14 & VAR_8 ? 1 : 0;
 if (VAR_17)
  VAR_10->rtbl[VAR_11].reg |= VAR_7;

 VAR_12 = VAR_14 & VAR_6;
 VAR_16 = VAR_15 >> VAR_0;
 FUNC_3(VAR_10->vm, VAR_17, VAR_16, VAR_18, VAR_13, VAR_12);
}

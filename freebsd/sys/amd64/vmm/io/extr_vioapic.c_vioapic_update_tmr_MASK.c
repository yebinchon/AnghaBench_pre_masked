
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vm {int dummy; } ;
struct vlapic {int dummy; } ;
struct vioapic {TYPE_1__* rtbl; } ;
struct TYPE_2__ {int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct vioapic*) ;
 int FUNC_1 (struct vioapic*) ;
 int FUNC_2 (struct vlapic*) ;
 int FUNC_3 (struct vlapic*,int,int,int,int) ;
 struct vioapic* FUNC_4 (struct vm*) ;
 struct vlapic* FUNC_5 (struct vm*,int) ;

__attribute__((used)) static void
FUNC_6(struct vm *VAR_7, int VAR_8, void *VAR_9)
{
 struct vioapic *VAR_10;
 struct vlapic *VAR_11;
 uint32_t VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17;
 bool VAR_18, VAR_19;

 VAR_11 = FUNC_5(VAR_7, VAR_8);
 VAR_10 = FUNC_4(VAR_7);

 FUNC_0(VAR_10);



 FUNC_2(VAR_11);
 for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
  VAR_12 = VAR_10->rtbl[VAR_16].reg;
  VAR_13 = VAR_10->rtbl[VAR_16].reg >> 32;

  VAR_18 = VAR_12 & VAR_5 ? 1 : 0;
  if (!VAR_18)
   continue;







  VAR_19 = ((VAR_12 & VAR_2) == VAR_3);
  VAR_15 = VAR_12 & VAR_1;
  VAR_17 = VAR_12 & VAR_4;
  VAR_14 = VAR_13 >> VAR_0;
  FUNC_3(VAR_11, VAR_14, VAR_19, VAR_15, VAR_17);
 }
 FUNC_1(VAR_10);
}

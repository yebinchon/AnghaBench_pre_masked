
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vioapic {int id; TYPE_1__* rtbl; } ;
struct TYPE_2__ {int reg; } ;




 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static uint32_t
FUNC_0(struct vioapic *VAR_3, int VAR_4, uint32_t VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = VAR_5 & 0xff;
 switch (VAR_6) {
 case 129:
  return (VAR_3->id);
  break;
 case 128:
  return (((VAR_2 - 1) << VAR_1) | 0x11);
  break;
 case 130:
  return (VAR_3->id);
  break;
 default:
  break;
 }


 if (VAR_6 >= VAR_0 &&
     VAR_6 < VAR_0 + VAR_2 * 2) {
  VAR_7 = (VAR_6 - VAR_0) / 2;
  if ((VAR_6 - VAR_0) % 2)
   VAR_8 = 32;
  else
   VAR_8 = 0;

  return (VAR_3->rtbl[VAR_7].reg >> VAR_8);
 }

 return (0);
}

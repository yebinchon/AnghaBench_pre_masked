
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; int eax; scalar_t__ ctl; } ;


 int VAR_0 ;
 int* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(void)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3] != 0) {
   VAR_4 = VAR_1[VAR_3];
   VAR_1[VAR_3] = 0;
   return (VAR_4);
  }
 }

 if (FUNC_1()) {
  VAR_2 = 0;
  VAR_2 = 0x16;
  VAR_2 = 0x0;
  FUNC_0();
  if ((VAR_2 & 0xff) != 0) {
   return (VAR_2 & 0xff);
  }


  switch (VAR_2 & 0xff00) {
  case 0x4800:
   VAR_1[0] = '[';
   VAR_1[1] = 'A';
   return (0x1b);
  case 0x4b00:
   VAR_1[0] = '[';
   VAR_1[1] = 'D';
   return (0x1b);
  case 0x4d00:
   VAR_1[0] = '[';
   VAR_1[1] = 'C';
   return (0x1b);
  case 0x5000:
   VAR_1[0] = '[';
   VAR_1[1] = 'B';
   return (0x1b);
  default:
   return (-1);
  }
 } else {
  return (-1);
 }
}

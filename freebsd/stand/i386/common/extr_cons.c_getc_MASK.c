
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; int eax; int efl; int ctl; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 () ;

int
FUNC_2(int VAR_2)
{

 VAR_1 = VAR_0;
 VAR_1 = 0x16;
 VAR_1 = VAR_2 << 8;
 FUNC_1();

 if (VAR_2 == 0)
  return (VAR_1);

 if (FUNC_0(VAR_1))
  return (0);
 return (VAR_1);
}

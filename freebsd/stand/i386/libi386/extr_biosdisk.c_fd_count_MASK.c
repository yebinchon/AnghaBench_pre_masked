
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; int eax; int edx; int efl; int ctl; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(void)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_1(VAR_3);

  VAR_2 = VAR_1;
  VAR_2 = 0x13;
  VAR_2 = 0x1500;
  VAR_2 = VAR_3;
  FUNC_2();

  if (FUNC_0(VAR_2))
   break;

  if ((VAR_2 & 0x300) == 0)
   break;
 }

 return (VAR_3);
}

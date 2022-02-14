
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; int eax; int efl; int ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(void)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_2[VAR_4] != 0) {
   return (1);
  }
 }

 VAR_3 = VAR_1;
 VAR_3 = 0x16;
 VAR_3 = 0x100;
 FUNC_1();
 return (!FUNC_0(VAR_3));
}

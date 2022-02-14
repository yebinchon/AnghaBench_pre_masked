
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; int eax; int efl; } ;


 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(int VAR_1)
{

 VAR_0 = 0x16;
 VAR_0 = VAR_1 << 8;
 FUNC_1();
 return (VAR_1 == 0 ? VAR_0 & 0xff : !FUNC_0(VAR_0));
}

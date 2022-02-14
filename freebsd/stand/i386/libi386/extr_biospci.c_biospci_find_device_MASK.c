
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int eax; int edx; int ecx; int esi; int ebx; int efl; int addr; int ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(uint32_t VAR_4, int VAR_5, uint32_t *VAR_6)
{
 VAR_3 = VAR_2;
 VAR_3 = VAR_1;
 VAR_3 = VAR_0;
 VAR_3 = VAR_4 & 0xffff;
 VAR_3 = (VAR_4 >> 16) & 0xffff;
 VAR_3 = VAR_5;
 FUNC_1();


 if (FUNC_0(VAR_3) || (VAR_3 & 0xff00))
  return (-1);

 *VAR_6 = VAR_3;
 return (0);
}

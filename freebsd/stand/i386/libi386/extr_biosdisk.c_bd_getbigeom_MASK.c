
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int addr; int eax; int edx; int ecx; int efl; int ctl; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 () ;

uint32_t
FUNC_2(int VAR_2)
{

 VAR_1 = VAR_0;
 VAR_1 = 0x13;
 VAR_1 = 0x800;
 VAR_1 = 0x80 + VAR_2;
 FUNC_1();
 if (FUNC_0(VAR_1))
  return (0x4f010f);
 return (((VAR_1 & 0xc0) << 18) | ((VAR_1 & 0xff00) << 8) |
     (VAR_1 & 0xff00) | (VAR_1 & 0x3f));
}

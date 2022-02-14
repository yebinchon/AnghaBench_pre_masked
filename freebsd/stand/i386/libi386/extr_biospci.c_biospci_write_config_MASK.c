
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_2__ {int eax; int edi; int efl; void* ecx; void* ebx; int addr; int ctl; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 () ;

int
FUNC_2(uint32_t VAR_4, int VAR_5, int VAR_6, uint32_t VAR_7)
{
 VAR_3 = VAR_1;
 VAR_3 = VAR_0;
 VAR_3 = VAR_2 + VAR_6;
 VAR_3 = VAR_4;
 VAR_3 = VAR_5;
 VAR_3 = VAR_7;
 FUNC_1();


 if (FUNC_0(VAR_3) || (VAR_3 & 0xff00))
  return (-1);

 return(0);
}

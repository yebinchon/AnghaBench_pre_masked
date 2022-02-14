
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int platform_t ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,int,int ,scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int,int,int ) ;

void
FUNC_8(platform_t VAR_4)
{
 bus_addr_t VAR_5;

 if (FUNC_0(VAR_2, 0x48240000, 0x1000, 0, &VAR_5) != 0)
  FUNC_4("Couldn't map the SCU\n");

 *(volatile unsigned int *)VAR_5 |= 1;

 FUNC_2();

 FUNC_7(0x200, 0xfffffdff, VAR_0);
 FUNC_7(FUNC_5((vm_offset_t)VAR_3), 0, VAR_1);
 FUNC_3();
 FUNC_6();
 FUNC_1(VAR_2, VAR_5, 0x1000);
}

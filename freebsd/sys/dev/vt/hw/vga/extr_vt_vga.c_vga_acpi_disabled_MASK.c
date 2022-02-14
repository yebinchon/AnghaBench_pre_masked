
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int*) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static bool
FUNC_2(void)
{

 uint16_t VAR_1;
 int VAR_2;

 VAR_2 = 0;
 FUNC_0("hw.vga.acpi_ignore_no_vga", &VAR_2);
 if (VAR_2 || !FUNC_1(&VAR_1))
   return (0);
 return ((VAR_1 & VAR_0) != 0);



}

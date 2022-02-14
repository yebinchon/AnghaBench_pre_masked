
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;

void
FUNC_2 (FILE *VAR_0)
{
  FUNC_1 (VAR_0, FUNC_0("\nThe following i386/x86-64 specific disassembler options are supported for use\nwith the -M switch (multiple options should be separated by commas):\n"));



  FUNC_1 (VAR_0, FUNC_0("  x86-64      Disassemble in 64bit mode\n"));
  FUNC_1 (VAR_0, FUNC_0("  i386        Disassemble in 32bit mode\n"));
  FUNC_1 (VAR_0, FUNC_0("  i8086       Disassemble in 16bit mode\n"));
  FUNC_1 (VAR_0, FUNC_0("  att         Display instruction in AT&T syntax\n"));
  FUNC_1 (VAR_0, FUNC_0("  intel       Display instruction in Intel syntax\n"));
  FUNC_1 (VAR_0, FUNC_0("  addr64      Assume 64bit address size\n"));
  FUNC_1 (VAR_0, FUNC_0("  addr32      Assume 32bit address size\n"));
  FUNC_1 (VAR_0, FUNC_0("  addr16      Assume 16bit address size\n"));
  FUNC_1 (VAR_0, FUNC_0("  data32      Assume 32bit data size\n"));
  FUNC_1 (VAR_0, FUNC_0("  data16      Assume 16bit data size\n"));
  FUNC_1 (VAR_0, FUNC_0("  suffix      Always display instruction suffix in AT&T syntax\n"));
}

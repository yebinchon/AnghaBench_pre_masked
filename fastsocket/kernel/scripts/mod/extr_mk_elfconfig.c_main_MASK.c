
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;




 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (unsigned char*,int,int,int ) ;
 scalar_t__ FUNC_3 (unsigned char*,char*,int) ;
 int FUNC_4 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (char*,char*) ;

int
FUNC_6(int VAR_7, char **VAR_8)
{
 unsigned char VAR_9[VAR_2];
 union { short s; char c[2]; } VAR_10;

 if (VAR_7 != 2) {
  FUNC_1(VAR_5, "Error: no arch\n");
 }
 if (FUNC_2(VAR_9, 1, VAR_2, VAR_6) != VAR_2) {
  FUNC_1(VAR_5, "Error: input truncated\n");
  return 1;
 }
 if (FUNC_3(VAR_9, VAR_3, VAR_4) != 0) {
  FUNC_1(VAR_5, "Error: not ELF\n");
  return 1;
 }
 switch (VAR_9[VAR_0]) {
 case 131:
  FUNC_4("#define KERNEL_ELFCLASS ELFCLASS32\n");
  break;
 case 130:
  FUNC_4("#define KERNEL_ELFCLASS ELFCLASS64\n");
  break;
 default:
  FUNC_0(1);
 }
 switch (VAR_9[VAR_1]) {
 case 129:
  FUNC_4("#define KERNEL_ELFDATA ELFDATA2LSB\n");
  break;
 case 128:
  FUNC_4("#define KERNEL_ELFDATA ELFDATA2MSB\n");
  break;
 default:
  FUNC_0(1);
 }

 if (sizeof(unsigned long) == 4) {
  FUNC_4("#define HOST_ELFCLASS ELFCLASS32\n");
 } else if (sizeof(unsigned long) == 8) {
  FUNC_4("#define HOST_ELFCLASS ELFCLASS64\n");
 }

 VAR_10.s = 0x0102;
 if (FUNC_3(VAR_10.c, "\x01\x02", 2) == 0)
  FUNC_4("#define HOST_ELFDATA ELFDATA2MSB\n");
 else if (FUNC_3(VAR_10.c, "\x02\x01", 2) == 0)
  FUNC_4("#define HOST_ELFDATA ELFDATA2LSB\n");
 else
  FUNC_0(1);

 if ((FUNC_5(VAR_8[1], "h8300") == 0)
     || (FUNC_5(VAR_8[1], "blackfin") == 0))
  FUNC_4("#define MODULE_SYMBOL_PREFIX \"_\"\n");
 else
  FUNC_4("#define MODULE_SYMBOL_PREFIX \"\"\n");

 return 0;
}

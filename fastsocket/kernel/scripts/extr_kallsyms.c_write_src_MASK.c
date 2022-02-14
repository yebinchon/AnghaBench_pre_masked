
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* sym; scalar_t__ addr; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (unsigned int*) ;
 unsigned int* FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (char*) ;
 TYPE_1__* VAR_6 ;
 unsigned int VAR_7 ;
 char FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(void)
{
 unsigned int VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11[256];
 unsigned int *VAR_12;
 char VAR_13[VAR_1];

 FUNC_6("#include <asm/types.h>\n");
 FUNC_6("#if BITS_PER_LONG == 64\n");
 FUNC_6("#define PTR .quad\n");
 FUNC_6("#define ALGN .align 8\n");
 FUNC_6("#else\n");
 FUNC_6("#define PTR .long\n");
 FUNC_6("#define ALGN .align 4\n");
 FUNC_6("#endif\n");

 FUNC_6("\t.section .rodata, \"a\"\n");
 FUNC_5("kallsyms_addresses");
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  if (FUNC_8(VAR_6[VAR_8].sym[0]) != 'A') {
   if (VAR_2 <= VAR_6[VAR_8].addr)
    FUNC_6("\tPTR\t_text + %#llx\n",
     VAR_6[VAR_8].addr - VAR_2);
   else
    FUNC_6("\tPTR\t_text - %#llx\n",
     VAR_2 - VAR_6[VAR_8].addr);
  } else {
   FUNC_6("\tPTR\t%#llx\n", VAR_6[VAR_8].addr);
  }
 }
 FUNC_6("\n");

 FUNC_5("kallsyms_num_syms");
 FUNC_6("\tPTR\t%d\n", VAR_7);
 FUNC_6("\n");



 VAR_12 = FUNC_4(sizeof(unsigned int) * ((VAR_7 + 255) / 256));
 if (!VAR_12) {
  FUNC_2(VAR_5, "kallsyms failure: "
   "unable to allocate required memory\n");
  FUNC_0(VAR_0);
 }

 FUNC_5("kallsyms_names");
 VAR_10 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  if ((VAR_8 & 0xFF) == 0)
   VAR_12[VAR_8 >> 8] = VAR_10;

  FUNC_6("\t.byte 0x%02x", VAR_6[VAR_8].len);
  for (VAR_9 = 0; VAR_9 < VAR_6[VAR_8].len; VAR_9++)
   FUNC_6(", 0x%02x", VAR_6[VAR_8].sym[VAR_9]);
  FUNC_6("\n");

  VAR_10 += VAR_6[VAR_8].len + 1;
 }
 FUNC_6("\n");

 FUNC_5("kallsyms_markers");
 for (VAR_8 = 0; VAR_8 < ((VAR_7 + 255) >> 8); VAR_8++)
  FUNC_6("\tPTR\t%d\n", VAR_12[VAR_8]);
 FUNC_6("\n");

 FUNC_3(VAR_12);

 FUNC_5("kallsyms_token_table");
 VAR_10 = 0;
 for (VAR_8 = 0; VAR_8 < 256; VAR_8++) {
  VAR_11[VAR_8] = VAR_10;
  FUNC_1(VAR_3[VAR_8], VAR_4[VAR_8], VAR_13);
  FUNC_6("\t.asciz\t\"%s\"\n", VAR_13);
  VAR_10 += FUNC_7(VAR_13) + 1;
 }
 FUNC_6("\n");

 FUNC_5("kallsyms_token_index");
 for (VAR_8 = 0; VAR_8 < 256; VAR_8++)
  FUNC_6("\t.short\t%d\n", VAR_11[VAR_8]);
 FUNC_6("\n");
}

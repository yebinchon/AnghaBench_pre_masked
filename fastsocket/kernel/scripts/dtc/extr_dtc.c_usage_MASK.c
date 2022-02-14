
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void __attribute__ ((noreturn)) FUNC_2(void)
{
 FUNC_1(VAR_1, "Usage:\n");
 FUNC_1(VAR_1, "\tdtc [options] <input file>\n");
 FUNC_1(VAR_1, "\nOptions:\n");
 FUNC_1(VAR_1, "\t-h\n");
 FUNC_1(VAR_1, "\t\tThis help text\n");
 FUNC_1(VAR_1, "\t-q\n");
 FUNC_1(VAR_1, "\t\tQuiet: -q suppress warnings, -qq errors, -qqq all\n");
 FUNC_1(VAR_1, "\t-I <input format>\n");
 FUNC_1(VAR_1, "\t\tInput formats are:\n");
 FUNC_1(VAR_1, "\t\t\tdts - device tree source text\n");
 FUNC_1(VAR_1, "\t\t\tdtb - device tree blob\n");
 FUNC_1(VAR_1, "\t\t\tfs - /proc/device-tree style directory\n");
 FUNC_1(VAR_1, "\t-o <output file>\n");
 FUNC_1(VAR_1, "\t-O <output format>\n");
 FUNC_1(VAR_1, "\t\tOutput formats are:\n");
 FUNC_1(VAR_1, "\t\t\tdts - device tree source text\n");
 FUNC_1(VAR_1, "\t\t\tdtb - device tree blob\n");
 FUNC_1(VAR_1, "\t\t\tasm - assembler source\n");
 FUNC_1(VAR_1, "\t-V <output version>\n");
 FUNC_1(VAR_1, "\t\tBlob version to produce, defaults to %d (relevant for dtb\n\t\tand asm output only)\n", VAR_0);
 FUNC_1(VAR_1, "\t-R <number>\n");
 FUNC_1(VAR_1, "\t\tMake space for <number> reserve map entries (relevant for \n\t\tdtb and asm output only)\n");
 FUNC_1(VAR_1, "\t-S <bytes>\n");
 FUNC_1(VAR_1, "\t\tMake the blob at least <bytes> long (extra space)\n");
 FUNC_1(VAR_1, "\t-p <bytes>\n");
 FUNC_1(VAR_1, "\t\tAdd padding to the blob of <bytes> long (extra space)\n");
 FUNC_1(VAR_1, "\t-b <number>\n");
 FUNC_1(VAR_1, "\t\tSet the physical boot cpu\n");
 FUNC_1(VAR_1, "\t-f\n");
 FUNC_1(VAR_1, "\t\tForce - try to produce output even if the input tree has errors\n");
 FUNC_1(VAR_1, "\t-v\n");
 FUNC_1(VAR_1, "\t\tPrint DTC version and exit\n");
 FUNC_0(3);
}

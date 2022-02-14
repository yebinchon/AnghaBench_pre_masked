
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_3 (char*,...) ;

void
FUNC_4 (
    void)
{
    FUNC_3 (FUNC_0 (VAR_0));
    FUNC_3 ("%s\n\n", VAR_1);
    FUNC_2 ("iasl [Options] [Files]");

    FUNC_3 ("\nGeneral:\n");
    FUNC_1 ("-@  <file>", "Specify command file");
    FUNC_1 ("-I  <dir>", "Specify additional include directory");
    FUNC_1 ("-p  <prefix>", "Specify path/filename prefix for all output files");
    FUNC_1 ("-v", "Display compiler version");
    FUNC_1 ("-vo", "Enable optimization comments");
    FUNC_1 ("-vs", "Disable signon");

    FUNC_3 ("\nHelp:\n");
    FUNC_1 ("-h", "This message");
    FUNC_1 ("-hc", "Display operators allowed in constant expressions");
    FUNC_1 ("-hd", "Info for obtaining and disassembling binary ACPI tables");
    FUNC_1 ("-hf", "Display help for output filename generation");
    FUNC_1 ("-hr", "Display ACPI reserved method names");
    FUNC_1 ("-ht", "Display currently supported ACPI table names");

    FUNC_3 ("\nPreprocessor:\n");
    FUNC_1 ("-D <symbol>", "Define symbol for preprocessor use");
    FUNC_1 ("-li", "Create preprocessed output file (*.i)");
    FUNC_1 ("-P", "Preprocess only and create preprocessor output file (*.i)");
    FUNC_1 ("-Pn", "Disable preprocessor");

    FUNC_3 ("\nErrors, Warnings, and Remarks:\n");
    FUNC_1 ("-va", "Disable all errors/warnings/remarks");
    FUNC_1 ("-ve", "Report only errors (ignore warnings and remarks)");
    FUNC_1 ("-vi", "Less verbose errors and warnings for use with IDEs");
    FUNC_1 ("-vr", "Disable remarks");
    FUNC_1 ("-vw <messageid>", "Ignore specific error, warning or remark");
    FUNC_1 ("-vx <messageid>", "Expect a specific warning, remark, or error");
    FUNC_1 ("-w <1|2|3>", "Set warning reporting level");
    FUNC_1 ("-we", "Report warnings as errors");
    FUNC_1 ("-ww <messageid>", "Report specific warning or remark as error");

    FUNC_3 ("\nAML Bytecode Generation (*.aml):\n");
    FUNC_1 ("-oa", "Disable all optimizations (compatibility mode)");
    FUNC_1 ("-of", "Disable constant folding");
    FUNC_1 ("-oi", "Disable integer optimization to Zero/One/Ones");
    FUNC_1 ("-on", "Disable named reference string optimization");
    FUNC_1 ("-ot", "Disable typechecking");
    FUNC_1 ("-cr", "Disable Resource Descriptor error checking");
    FUNC_1 ("-in", "Ignore NoOp operators");
    FUNC_1 ("-r <revision>", "Override table header Revision (1-255)");

    FUNC_3 ("\nListings:\n");
    FUNC_1 ("-l", "Create mixed listing file (ASL source and AML) (*.lst)");
    FUNC_1 ("-lm", "Create hardware summary map file (*.map)");
    FUNC_1 ("-ln", "Create namespace file (*.nsp)");
    FUNC_1 ("-ls", "Create combined source file (expanded includes) (*.src)");
    FUNC_1 ("-lx", "Create cross-reference file (*.xrf)");

    FUNC_3 ("\nFirmware Support - C Text Output:\n");
    FUNC_1 ("-tc", "Create hex AML table in C (*.hex)");
    FUNC_1 ("-sc", "Create named hex AML arrays in C (*.c)");
    FUNC_1 ("-ic", "Create include file in C for -sc symbols (*.h)");
    FUNC_1 ("-so", "Create namespace AML offset table in C (*.offset.h)");

    FUNC_3 ("\nFirmware Support - Assembler Text Output:\n");
    FUNC_1 ("-ta", "Create hex AML table in assembler (*.hex)");
    FUNC_1 ("-sa", "Create named hex AML arrays in assembler (*.asm)");
    FUNC_1 ("-ia", "Create include file in assembler for -sa symbols (*.inc)");

    FUNC_3 ("\nFirmware Support - ASL Text Output:\n");
    FUNC_1 ("-ts", "Create hex AML table in ASL (Buffer object) (*.hex)");

    FUNC_3 ("\nLegacy-ASL to ASL+ Converter:\n");
    FUNC_1 ("-ca <file>", "Convert legacy-ASL source file to new ASL+ file");
    FUNC_1 ("", "  (Original comments are passed through to ASL+ file)");

    FUNC_3 ("\nData Table Compiler:\n");
    FUNC_1 ("-tp", "Compile tables with flex/bison prototype");
    FUNC_1 ("-G", "Compile custom table that contains generic operators");
    FUNC_1 ("-T <sig list>|ALL", "Create ACPI table template/example files");
    FUNC_1 ("-T <count>", "Emit DSDT and <count> SSDTs to same file");
    FUNC_1 ("-vt", "Create verbose template files (full disassembly)");

    FUNC_3 ("\nAML Disassembler:\n");
    FUNC_1 ("-d  <f1 f2 ...>", "Disassemble or decode binary ACPI tables to file (*.dsl)");
    FUNC_1 ("", "  (Optional, file type is automatically detected)");
    FUNC_1 ("-da <f1 f2 ...>", "Disassemble multiple tables from single namespace");
    FUNC_1 ("-db", "Do not translate Buffers to Resource Templates");
    FUNC_1 ("-dc <f1 f2 ...>", "Disassemble AML and immediately compile it");
    FUNC_1 ("", "  (Obtain DSDT from current system if no input file)");
    FUNC_1 ("-df", "Force disassembler to assume table contains valid AML");
    FUNC_1 ("-dl", "Emit legacy ASL code only (no C-style operators)");
    FUNC_1 ("-e  <f1 f2 ...>", "Include ACPI table(s) for external symbol resolution");
    FUNC_1 ("-fe <file>", "Specify external symbol declaration file");
    FUNC_1 ("-in", "Ignore NoOp opcodes");
    FUNC_1 ("-l", "Disassemble to mixed ASL and AML code");
    FUNC_1 ("-vt", "Dump binary table data in hex format within output file");

    FUNC_3 ("\nDebug Options:\n");
    FUNC_1 ("-bc", "Create converter debug file (*.cdb)");
    FUNC_1 ("-bf", "Create debug file (full output) (*.txt)");
    FUNC_1 ("-bs", "Create debug file (parse tree only) (*.txt)");
    FUNC_1 ("-bp <depth>", "Prune ASL parse tree");
    FUNC_1 ("-bt <type>", "Object type to be pruned from the parse tree");
    FUNC_1 ("-f", "Ignore errors, force creation of AML output file(s)");
    FUNC_1 ("-m <size>", "Set internal line buffer size (in Kbytes)");
    FUNC_1 ("-n", "Parse only, no output generation");
    FUNC_1 ("-oc", "Display compile times and statistics");
    FUNC_1 ("-x <level>", "Set debug level for trace output");
    FUNC_1 ("-z", "Do not insert new compiler ID for DataTables");
}

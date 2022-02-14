
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* mnemonic; char* opcode; int no_nibbles; char* format; int mode_bits; int min_cpu; } ;


 char* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1 (void)
{
  char *VAR_3;
  int VAR_4;


  FUNC_0 (VAR_0);

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    {
      FUNC_0 ("  { \"%s\", ", VAR_2[VAR_4].mnemonic);
      for (VAR_3 = VAR_2[VAR_4].opcode; *VAR_3 != 0; VAR_3++)
 if (*VAR_3 == '?')
   *VAR_3 = '0';
      FUNC_0 ("OP%i(0x%sLL), ",
       VAR_2[VAR_4].no_nibbles*4, VAR_2[VAR_4].opcode);
      FUNC_0 ("MASK_%s, INSTR_%s, ",
       VAR_2[VAR_4].format, VAR_2[VAR_4].format);
      FUNC_0 ("%i, ", VAR_2[VAR_4].mode_bits);
      FUNC_0 ("%i}", VAR_2[VAR_4].min_cpu);
      if (VAR_4 < VAR_1-1)
 FUNC_0 (",\n");
      else
 FUNC_0 ("\n");
    }
  FUNC_0 ("};\n\n");
  FUNC_0 ("const int s390_num_opcodes =\n");
  FUNC_0 ("  sizeof (s390_opcodes) / sizeof (s390_opcodes[0]);\n\n");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_stream {int dummy; } ;
struct ui_out {int dummy; } ;
struct symtab_and_line {scalar_t__ end; } ;
struct symtab {int dummy; } ;
struct linetable_entry {scalar_t__ pc; scalar_t__ line; } ;
struct disassemble_info {int dummy; } ;
struct dis_line_entry {scalar_t__ line; scalar_t__ start_pc; scalar_t__ end_pc; } ;
struct cleanup {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct cleanup*) ;
 scalar_t__ FUNC_2 (struct ui_out*,struct disassemble_info*,scalar_t__,scalar_t__,int,struct ui_stream*) ;
 struct symtab_and_line FUNC_3 (scalar_t__,int ) ;
 struct cleanup* FUNC_4 (int ,int ) ;
 struct cleanup* FUNC_5 (struct ui_out*,char*) ;
 struct cleanup* FUNC_6 (struct ui_out*,char*) ;
 int VAR_1 ;
 int FUNC_7 (struct symtab*,int,int,int ) ;
 int FUNC_8 (struct dis_line_entry*,int,int,int ) ;
 int FUNC_9 (struct ui_out*,char*) ;

__attribute__((used)) static void
FUNC_10 (struct ui_out *VAR_2,
         struct disassemble_info *VAR_3, int VAR_4,
         struct linetable_entry *VAR_5,
         CORE_ADDR VAR_6, CORE_ADDR VAR_7,
         struct symtab *VAR_8,
         int VAR_9, struct ui_stream *VAR_10)
{
  int VAR_11 = 0;
  struct dis_line_entry *VAR_12;
  struct symtab_and_line VAR_13;
  int VAR_14;
  int VAR_15 = 0;
  int VAR_16 = 0;
  CORE_ADDR VAR_17;
  int VAR_18 = 0;
  struct cleanup *VAR_19;
  struct cleanup *VAR_20 = FUNC_4 (VAR_1, 0);
  struct cleanup *VAR_21 = FUNC_4 (VAR_1, 0);

  VAR_12 = (struct dis_line_entry *) FUNC_0 (VAR_4
       * sizeof (struct dis_line_entry));







  for (VAR_14 = 0; VAR_14 < VAR_4 - 1 && VAR_5[VAR_14].pc < VAR_6; VAR_14++);



  for (; VAR_14 < VAR_4 - 1 && VAR_5[VAR_14].pc < VAR_7; VAR_14++)
    {
      if (VAR_5[VAR_14].line == VAR_5[VAR_14 + 1].line && VAR_5[VAR_14].pc == VAR_5[VAR_14 + 1].pc)
 continue;


      if (VAR_5[VAR_14].line == 0)
 continue;

      VAR_12[VAR_11].line = VAR_5[VAR_14].line;
      if (VAR_5[VAR_14].line > VAR_5[VAR_14 + 1].line)
 VAR_15 = 1;
      VAR_12[VAR_11].start_pc = VAR_5[VAR_14].pc;
      VAR_12[VAR_11].end_pc = VAR_5[VAR_14 + 1].pc;
      VAR_11++;
    }




  if (VAR_14 == VAR_4 - 1 && VAR_5[VAR_14].pc < VAR_7)
    {
      VAR_12[VAR_11].line = VAR_5[VAR_14].line;
      VAR_12[VAR_11].start_pc = VAR_5[VAR_14].pc;
      VAR_13 = FUNC_3 (VAR_5[VAR_14].pc, 0);
      VAR_12[VAR_11].end_pc = VAR_13.end;
      VAR_11++;
    }




  if (VAR_15)
    FUNC_8 (VAR_12, VAR_11, sizeof (struct dis_line_entry), VAR_0);





  VAR_19 = FUNC_5 (VAR_2, "asm_insns");

  for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
    {

      if (VAR_12[VAR_14].line >= VAR_16)
 {
   if (VAR_16 != 0)
     {

       if (VAR_16 == VAR_12[VAR_14].line)
  {
    VAR_20
      = FUNC_6 (VAR_2,
          "src_and_asm_line");
    FUNC_7 (VAR_8, VAR_16, VAR_12[VAR_14].line + 1, 0);
  }
       else
  {

    for (; VAR_16 < VAR_12[VAR_14].line; VAR_16++)
      {
        struct cleanup *VAR_22;
        struct cleanup *VAR_23;

        VAR_23
   = FUNC_6 (VAR_2,
              "src_and_asm_line");
        FUNC_7 (VAR_8, VAR_16, VAR_16 + 1,
       0);
        VAR_22
   = FUNC_5 (VAR_2,
             "line_asm_insn");
        FUNC_1 (VAR_22);
        FUNC_1 (VAR_23);
      }


    VAR_20
      = FUNC_6 (VAR_2,
          "src_and_asm_line");
    FUNC_7 (VAR_8, VAR_16, VAR_12[VAR_14].line + 1, 0);
  }
     }
   else
     {
       VAR_20
  = FUNC_6 (VAR_2, "src_and_asm_line");
       FUNC_7 (VAR_8, VAR_12[VAR_14].line, VAR_12[VAR_14].line + 1, 0);
     }

   VAR_16 = VAR_12[VAR_14].line + 1;
   VAR_21
     = FUNC_5 (VAR_2, "line_asm_insn");
 }

      VAR_18 += FUNC_2 (VAR_2, VAR_3, VAR_12[VAR_14].start_pc, VAR_12[VAR_14].end_pc,
       VAR_9, VAR_10);



      if (VAR_14 == (VAR_11 - 1) || VAR_12[VAR_14 + 1].line > VAR_12[VAR_14].line)
 {
   FUNC_1 (VAR_21);
   FUNC_1 (VAR_20);
   VAR_20 = FUNC_4 (VAR_1, 0);
   VAR_21 = FUNC_4 (VAR_1, 0);
   FUNC_9 (VAR_2, "\n");
 }
      if (VAR_9 >= 0 && VAR_18 >= VAR_9)
 break;
    }
  FUNC_1 (VAR_19);
}

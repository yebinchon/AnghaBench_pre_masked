
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int section_offsets; } ;
struct line_header {char* statement_program_start; char* statement_program_end; int default_is_stmt; unsigned int num_file_names; char** include_dirs; unsigned char opcode_base; unsigned char line_range; unsigned char minimum_instruction_length; int* standard_opcode_lengths; struct file_entry* file_names; scalar_t__ line_base; } ;
struct file_entry {int dir_index; int name; } ;
struct dwarf2_cu {struct objfile* objfile; } ;
typedef int bfd ;
typedef unsigned char CORE_ADDR ;


 unsigned char FUNC_0 (int ,int ) ;
 int FUNC_1 (struct objfile*) ;
 int FUNC_2 (struct line_header*,char*,unsigned int,unsigned int,unsigned int) ;
 unsigned char FUNC_3 (unsigned char,struct dwarf2_cu*) ;
 int FUNC_4 (int *,char*) ;
 int VAR_0 ;
 int FUNC_5 (int ,char*) ;
 unsigned char FUNC_6 (int *,char*) ;
 unsigned char FUNC_7 (int *,char*) ;
 unsigned char FUNC_8 (int *,char*,struct dwarf2_cu*,unsigned int*) ;
 unsigned int FUNC_9 (int *,char*,unsigned int*) ;
 char* FUNC_10 (int *,char*,unsigned int*) ;
 unsigned char FUNC_11 (int *,char*,unsigned int*) ;
 int FUNC_12 (int ,unsigned int,unsigned char) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_13 (struct line_header *VAR_2, char *VAR_3, bfd *VAR_4,
      struct dwarf2_cu *VAR_5)
{
  char *VAR_6;
  char *VAR_7;
  unsigned int VAR_8;
  unsigned char VAR_9, VAR_10, VAR_11;
  CORE_ADDR VAR_12;
  struct objfile *VAR_13 = VAR_5->objfile;

  VAR_12 = FUNC_0 (VAR_13->section_offsets, FUNC_1 (VAR_13));

  VAR_6 = VAR_2->statement_program_start;
  VAR_7 = VAR_2->statement_program_end;


  while (VAR_6 < VAR_7)
    {

      CORE_ADDR VAR_14 = 0;
      unsigned int VAR_15 = 1;
      unsigned int VAR_16 = 1;
      unsigned int VAR_17 = 0;
      int VAR_18 = VAR_2->default_is_stmt;
      int VAR_19 = 0;
      int VAR_20 = 0;


      if (VAR_2->num_file_names >= VAR_15)
 {



          struct file_entry *VAR_21 = &VAR_2->file_names[VAR_15 - 1];
          char *VAR_22;
          if (VAR_21->dir_index)
            VAR_22 = VAR_2->include_dirs[VAR_21->dir_index - 1];
          else
            VAR_22 = VAR_3;
   FUNC_5 (VAR_21->name, VAR_22);
 }


      while (!VAR_20)
 {
   VAR_9 = FUNC_6 (VAR_4, VAR_6);
   VAR_6 += 1;

   if (VAR_9 >= VAR_2->opcode_base)
     {
       VAR_11 = VAR_9 - VAR_2->opcode_base;
       VAR_14 += (VAR_11 / VAR_2->line_range)
  * VAR_2->minimum_instruction_length;
       VAR_16 += VAR_2->line_base + (VAR_11 % VAR_2->line_range);

       FUNC_12 (VAR_0, VAR_16,
                    FUNC_3 (VAR_14, VAR_5));
       VAR_19 = 1;
     }
   else switch (VAR_9)
     {
     case 133:
       VAR_6 += 1;
       VAR_10 = FUNC_6 (VAR_4, VAR_6);
       VAR_6 += 1;
       switch (VAR_10)
  {
  case 139:
    VAR_20 = 1;
    FUNC_12 (VAR_0, 0, VAR_14);
    break;
  case 138:
    VAR_14 = FUNC_8 (VAR_4, VAR_6, VAR_5, &VAR_8);
    VAR_6 += VAR_8;
    VAR_14 += VAR_12;
    break;
  case 140:
                  {
                    char *VAR_23;
                    unsigned int VAR_24, VAR_25, VAR_26;

                    VAR_23 = FUNC_10 (VAR_4, VAR_6, &VAR_8);
                    VAR_6 += VAR_8;
                    VAR_24 =
                      FUNC_11 (VAR_4, VAR_6, &VAR_8);
                    VAR_6 += VAR_8;
                    VAR_25 =
                      FUNC_11 (VAR_4, VAR_6, &VAR_8);
                    VAR_6 += VAR_8;
                    VAR_26 =
                      FUNC_11 (VAR_4, VAR_6, &VAR_8);
                    VAR_6 += VAR_8;
                    FUNC_2 (VAR_2, VAR_23, VAR_24, VAR_25, VAR_26);
                  }
    break;
  default:
    FUNC_4 (&VAR_1,
        "mangled .debug_line section");
    return;
  }
       break;
     case 134:
       FUNC_12 (VAR_0, VAR_16,
                    FUNC_3 (VAR_14, VAR_5));
       VAR_19 = 0;
       break;
     case 136:
       VAR_14 += VAR_2->minimum_instruction_length
  * FUNC_11 (VAR_4, VAR_6, &VAR_8);
       VAR_6 += VAR_8;
       break;
     case 137:
       VAR_16 += FUNC_9 (VAR_4, VAR_6, &VAR_8);
       VAR_6 += VAR_8;
       break;
     case 128:
              {



                struct file_entry *VAR_27;
                char *VAR_28;
                VAR_15 = FUNC_11 (VAR_4, VAR_6, &VAR_8);
                VAR_6 += VAR_8;
                VAR_27 = &VAR_2->file_names[VAR_15 - 1];
                if (VAR_27->dir_index)
                  VAR_28 = VAR_2->include_dirs[VAR_27->dir_index - 1];
                else
                  VAR_28 = VAR_3;
                FUNC_5 (VAR_27->name, VAR_28);
              }
       break;
     case 129:
       VAR_17 = FUNC_11 (VAR_4, VAR_6, &VAR_8);
       VAR_6 += VAR_8;
       break;
     case 131:
       VAR_18 = (!VAR_18);
       break;
     case 130:
       VAR_19 = 1;
       break;





     case 135:
       VAR_14 += (VAR_2->minimum_instruction_length
     * ((255 - VAR_2->opcode_base) / VAR_2->line_range));
       break;
     case 132:
       VAR_14 += FUNC_7 (VAR_4, VAR_6);
       VAR_6 += 2;
       break;
     default:
       {
  int VAR_29;
  for (VAR_29 = 0; VAR_29 < VAR_2->standard_opcode_lengths[VAR_9]; VAR_29++)
    {
      (void) FUNC_11 (VAR_4, VAR_6, &VAR_8);
      VAR_6 += VAR_8;
    }
       }
     }
 }
    }
}

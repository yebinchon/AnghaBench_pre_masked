
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_header {int total_length; char* statement_program_end; int opcode_base; unsigned char* standard_opcode_lengths; char* statement_program_start; void* line_range; int line_base; void* default_is_stmt; void* minimum_instruction_length; int header_length; int version; } ;
struct dwarf2_cu {int header; } ;
struct cleanup {int dummy; } ;
typedef int make_cleanup_ftype ;
typedef int bfd ;


 int FUNC_0 (struct line_header*,char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (struct line_header*,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct cleanup*) ;
 int FUNC_4 () ;
 char* VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct cleanup* FUNC_5 (int *,void*) ;
 int FUNC_6 (struct line_header*,int ,int) ;
 void* FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*,int *,int*) ;
 int FUNC_11 (int *,char*,int *,int*) ;
 char* FUNC_12 (int *,char*,int*) ;
 unsigned int FUNC_13 (int *,char*,int*) ;
 int VAR_3 ;
 struct line_header* FUNC_14 (int) ;

__attribute__((used)) static struct line_header *
FUNC_15 (unsigned int VAR_4, bfd *VAR_5,
     struct dwarf2_cu *VAR_6)
{
  struct cleanup *VAR_7;
  struct line_header *VAR_8;
  char *VAR_9;
  int VAR_10;
  int VAR_11;
  char *VAR_12, *VAR_13;

  if (VAR_0 == ((void*)0))
    {
      FUNC_2 (&VAR_3, "missing .debug_line section");
      return 0;
    }



  if (VAR_4 + 4 >= VAR_1)
    {
      FUNC_4 ();
      return 0;
    }

  VAR_8 = FUNC_14 (sizeof (*VAR_8));
  FUNC_6 (VAR_8, 0, sizeof (*VAR_8));
  VAR_7 = FUNC_5 ((make_cleanup_ftype *) VAR_2,
                          (void *) VAR_8);

  VAR_9 = VAR_0 + VAR_4;


  VAR_8->total_length = FUNC_10 (VAR_5, VAR_9, &VAR_6->header, &VAR_10);
  VAR_9 += VAR_10;
  if (VAR_9 + VAR_8->total_length > VAR_0 + VAR_1)
    {
      FUNC_4 ();
      return 0;
    }
  VAR_8->statement_program_end = VAR_9 + VAR_8->total_length;
  VAR_8->version = FUNC_9 (VAR_5, VAR_9);
  VAR_9 += 2;
  VAR_8->header_length = FUNC_11 (VAR_5, VAR_9, &VAR_6->header, &VAR_10);
  VAR_9 += VAR_10;
  VAR_8->minimum_instruction_length = FUNC_7 (VAR_5, VAR_9);
  VAR_9 += 1;
  VAR_8->default_is_stmt = FUNC_7 (VAR_5, VAR_9);
  VAR_9 += 1;
  VAR_8->line_base = FUNC_8 (VAR_5, VAR_9);
  VAR_9 += 1;
  VAR_8->line_range = FUNC_7 (VAR_5, VAR_9);
  VAR_9 += 1;
  VAR_8->opcode_base = FUNC_7 (VAR_5, VAR_9);
  VAR_9 += 1;
  VAR_8->standard_opcode_lengths
    = (unsigned char *) FUNC_14 (VAR_8->opcode_base * sizeof (unsigned char));

  VAR_8->standard_opcode_lengths[0] = 1;
  for (VAR_11 = 1; VAR_11 < VAR_8->opcode_base; ++VAR_11)
    {
      VAR_8->standard_opcode_lengths[VAR_11] = FUNC_7 (VAR_5, VAR_9);
      VAR_9 += 1;
    }


  while ((VAR_12 = FUNC_12 (VAR_5, VAR_9, &VAR_10)) != ((void*)0))
    {
      VAR_9 += VAR_10;
      FUNC_1 (VAR_8, VAR_12);
    }
  VAR_9 += VAR_10;


  while ((VAR_13 = FUNC_12 (VAR_5, VAR_9, &VAR_10)) != ((void*)0))
    {
      unsigned int VAR_14, VAR_15, VAR_16;

      VAR_9 += VAR_10;
      VAR_14 = FUNC_13 (VAR_5, VAR_9, &VAR_10);
      VAR_9 += VAR_10;
      VAR_15 = FUNC_13 (VAR_5, VAR_9, &VAR_10);
      VAR_9 += VAR_10;
      VAR_16 = FUNC_13 (VAR_5, VAR_9, &VAR_10);
      VAR_9 += VAR_10;

      FUNC_0 (VAR_8, VAR_13, VAR_14, VAR_15, VAR_16);
    }
  VAR_9 += VAR_10;
  VAR_8->statement_program_start = VAR_9;

  if (VAR_9 > VAR_0 + VAR_1)
    FUNC_2 (&VAR_3,
        "line number info header doesn't fit in `.debug_line' section");

  FUNC_3 (VAR_7);
  return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_header {struct line_header* include_dirs; struct line_header* file_names; struct line_header* standard_opcode_lengths; } ;


 int FUNC_0 (struct line_header*) ;

__attribute__((used)) static void
FUNC_1 (struct line_header *VAR_0)
{
  if (VAR_0->standard_opcode_lengths)
    FUNC_0 (VAR_0->standard_opcode_lengths);



  if (VAR_0->file_names)
    FUNC_0 (VAR_0->file_names);


  if (VAR_0->include_dirs)
    FUNC_0 (VAR_0->include_dirs);

  FUNC_0 (VAR_0);
}

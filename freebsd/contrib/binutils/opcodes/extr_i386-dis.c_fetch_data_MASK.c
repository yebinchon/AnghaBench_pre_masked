
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {int (* read_memory_func ) (int,int *,int,struct disassemble_info*) ;int (* memory_error_func ) (int,int,struct disassemble_info*) ;scalar_t__ private_data; } ;
struct dis_private {int insn_start; int * max_fetched; int bailout; int * the_buffer; } ;
typedef int bfd_vma ;
typedef int bfd_byte ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int *,int,struct disassemble_info*) ;
 int FUNC_2 (int,int,struct disassemble_info*) ;

__attribute__((used)) static int
FUNC_3 (struct disassemble_info *VAR_1, bfd_byte *VAR_2)
{
  int VAR_3;
  struct dis_private *VAR_4 = (struct dis_private *) VAR_1->private_data;
  bfd_vma VAR_5 = VAR_4->insn_start + (VAR_4->max_fetched - VAR_4->the_buffer);

  if (VAR_2 <= VAR_4->the_buffer + VAR_0)
    VAR_3 = (*VAR_1->read_memory_func) (VAR_5,
     VAR_4->max_fetched,
     VAR_2 - VAR_4->max_fetched,
     VAR_1);
  else
    VAR_3 = -1;
  if (VAR_3 != 0)
    {




      if (VAR_4->max_fetched == VAR_4->the_buffer)
 (*VAR_1->memory_error_func) (VAR_3, VAR_5, VAR_1);
      FUNC_0 (VAR_4->bailout, 1);
    }
  else
    VAR_4->max_fetched = VAR_2;
  return 1;
}

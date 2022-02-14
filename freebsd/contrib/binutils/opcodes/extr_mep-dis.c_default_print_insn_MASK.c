
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int (* read_memory_func ) (int ,int *,int,TYPE_1__*) ;int (* memory_error_func ) (int,int ,TYPE_1__*) ;} ;
typedef TYPE_1__ disassemble_info ;
typedef int bfd_vma ;
typedef int bfd_byte ;
struct TYPE_11__ {int base_insn_bitsize; scalar_t__ min_insn_bitsize; } ;
typedef TYPE_2__* CGEN_CPU_DESC ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,TYPE_1__*,int *,int) ;
 int FUNC_1 (int ,int *,int,TYPE_1__*) ;
 int FUNC_2 (int ,int *,int,TYPE_1__*) ;
 int FUNC_3 (int,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4 (CGEN_CPU_DESC VAR_1, bfd_vma VAR_2, disassemble_info *VAR_3)
{
  bfd_byte VAR_4[VAR_0];
  int VAR_5;
  int VAR_6;


  VAR_5 = VAR_1->base_insn_bitsize / 8;
  VAR_6 = (*VAR_3->read_memory_func) (VAR_2, VAR_4, VAR_5, VAR_3);


  if (VAR_6 != 0 && (VAR_1->min_insn_bitsize < VAR_1->base_insn_bitsize))
    {
      VAR_5 = VAR_1->min_insn_bitsize / 8;
      VAR_6 = (*VAR_3->read_memory_func) (VAR_2, VAR_4, VAR_5, VAR_3);
    }

  if (VAR_6 != 0)
    {
      (*VAR_3->memory_error_func) (VAR_6, VAR_2, VAR_3);
      return -1;
    }

  return FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}

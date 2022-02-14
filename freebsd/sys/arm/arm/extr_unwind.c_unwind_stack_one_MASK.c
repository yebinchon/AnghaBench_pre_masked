
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct unwind_state {unsigned int* insn; int start_pc; int * registers; scalar_t__ update_mask; } ;
struct unwind_idx {unsigned int insn; } ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 struct unwind_idx* FUNC_1 (int ,int) ;
 int FUNC_2 (struct unwind_state*) ;

int
FUNC_3(struct unwind_state *VAR_2, int VAR_3)
{
 struct unwind_idx *VAR_4;
 int VAR_5;


 VAR_2->update_mask = 0;


 VAR_2->start_pc = VAR_2->registers[VAR_1];


 VAR_4 = FUNC_1(VAR_2->start_pc, VAR_3);

 VAR_5 = 0;
 if (VAR_4->insn != VAR_0) {
  if (VAR_4->insn & (1U << 31)) {

   VAR_2->insn = &VAR_4->insn;
  } else {

   VAR_2->insn = (uint32_t *)
       ((uintptr_t)&VAR_4->insn +
        FUNC_0(VAR_4->insn));
  }

  VAR_5 = FUNC_2(VAR_2);
 }


 if (VAR_4->insn == VAR_0)
  VAR_5 = 1;

 return (VAR_5);
}

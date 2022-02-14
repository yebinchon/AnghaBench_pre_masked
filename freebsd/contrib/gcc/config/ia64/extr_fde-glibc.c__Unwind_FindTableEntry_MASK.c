
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unw_table_entry {int dummy; } ;
struct unw_ia64_callback_data {unsigned long* segment_base; unsigned long* gp; struct unw_table_entry* ret; scalar_t__ pc; } ;
typedef scalar_t__ Elf64_Addr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct unw_ia64_callback_data*) ;

struct unw_table_entry *
FUNC_1 (void *VAR_1, unsigned long *VAR_2,
                        unsigned long *VAR_3)
{
  struct unw_ia64_callback_data VAR_4;

  VAR_4.pc = (Elf64_Addr) VAR_1;
  VAR_4.segment_base = VAR_2;
  VAR_4.gp = VAR_3;
  VAR_4.ret = ((void*)0);

  if (FUNC_0 (VAR_0, &VAR_4) < 0)
    return ((void*)0);

  return VAR_4.ret;
}

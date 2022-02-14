
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ppc_elf_link_hash_table {scalar_t__ plt_type; unsigned int got_gap; unsigned int got_header_size; TYPE_1__* got; } ;
typedef unsigned int bfd_vma ;
struct TYPE_2__ {unsigned int size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bfd_vma
FUNC_0 (struct ppc_elf_link_hash_table *VAR_2, unsigned int VAR_3)
{
  bfd_vma VAR_4;
  unsigned int VAR_5;

  if (VAR_2->plt_type == VAR_1)
    {
      VAR_4 = VAR_2->got->size;
      VAR_2->got->size += VAR_3;
    }
  else
    {
      VAR_5 = VAR_2->plt_type == VAR_0 ? 32768 : 32764;
      if (VAR_3 <= VAR_2->got_gap)
 {
   VAR_4 = VAR_5 - VAR_2->got_gap;
   VAR_2->got_gap -= VAR_3;
 }
      else
 {
   if (VAR_2->got->size + VAR_3 > VAR_5
       && VAR_2->got->size <= VAR_5)
     {
       VAR_2->got_gap = VAR_5 - VAR_2->got->size;
       VAR_2->got->size = VAR_5 + VAR_2->got_header_size;
     }
   VAR_4 = VAR_2->got->size;
   VAR_2->got->size += VAR_3;
 }
    }
  return VAR_4;
}

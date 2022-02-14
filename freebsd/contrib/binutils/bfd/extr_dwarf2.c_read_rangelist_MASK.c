
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comp_unit {unsigned long base_address; int addr_size; int abfd; TYPE_1__* stash; } ;
struct arange {int dummy; } ;
typedef unsigned long bfd_vma ;
typedef int bfd_uint64_t ;
typedef int bfd_byte ;
struct TYPE_2__ {int * dwarf_ranges_buffer; } ;


 int FUNC_0 (int ,struct arange*,unsigned long,unsigned long) ;
 unsigned long FUNC_1 (int ,int *) ;
 unsigned long FUNC_2 (int ,int *) ;
 int FUNC_3 (struct comp_unit*) ;

__attribute__((used)) static void
FUNC_4 (struct comp_unit *VAR_0, struct arange *VAR_1, bfd_uint64_t VAR_2)
{
  bfd_byte *VAR_3;
  bfd_vma VAR_4 = VAR_0->base_address;

  if (! VAR_0->stash->dwarf_ranges_buffer)
    {
      if (! FUNC_3 (VAR_0))
 return;
    }
  VAR_3 = VAR_0->stash->dwarf_ranges_buffer + VAR_2;

  for (;;)
    {
      bfd_vma VAR_5;
      bfd_vma VAR_6;

      if (VAR_0->addr_size == 4)
 {
   VAR_5 = FUNC_1 (VAR_0->abfd, VAR_3);
   VAR_3 += 4;
   VAR_6 = FUNC_1 (VAR_0->abfd, VAR_3);
   VAR_3 += 4;
 }
      else
 {
   VAR_5 = FUNC_2 (VAR_0->abfd, VAR_3);
   VAR_3 += 8;
   VAR_6 = FUNC_2 (VAR_0->abfd, VAR_3);
   VAR_3 += 8;
 }
      if (VAR_5 == 0 && VAR_6 == 0)
 break;
      if (VAR_5 == -1UL && VAR_6 != -1UL)
 VAR_4 = VAR_6;
      else
 FUNC_0 (VAR_0->abfd, VAR_1, VAR_4 + VAR_5, VAR_4 + VAR_6);
    }
}

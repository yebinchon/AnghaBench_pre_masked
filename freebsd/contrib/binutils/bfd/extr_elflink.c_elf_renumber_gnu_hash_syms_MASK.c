
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ link; } ;
struct TYPE_6__ {TYPE_1__ i; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ u; } ;
struct elf_link_hash_entry {int dynindx; TYPE_3__ root; } ;
struct collect_gnu_hash_codes {int min_dynindx; unsigned long* hashval; unsigned long bucketcount; int shift1; int maskbits; int* bitmask; int mask; int shift2; int* counts; int* indx; int symindx; scalar_t__ contents; int output_bfd; int local_indx; TYPE_4__* bed; } ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_8__ {int (* elf_hash_symbol ) (struct elf_link_hash_entry*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,unsigned long,scalar_t__) ;
 int FUNC_1 (struct elf_link_hash_entry*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (struct elf_link_hash_entry *VAR_2, void *VAR_3)
{
  struct collect_gnu_hash_codes *VAR_4 = VAR_3;
  unsigned long int VAR_5;
  unsigned long int VAR_6;

  if (VAR_2->root.type == VAR_1)
    VAR_2 = (struct elf_link_hash_entry *) VAR_2->root.u.i.link;


  if (VAR_2->dynindx == -1)
    return VAR_0;


  if (! (*VAR_4->bed->elf_hash_symbol) (VAR_2))
    {
      if (VAR_2->dynindx >= VAR_4->min_dynindx)
 VAR_2->dynindx = VAR_4->local_indx++;
      return VAR_0;
    }

  VAR_5 = VAR_4->hashval[VAR_2->dynindx] % VAR_4->bucketcount;
  VAR_6 = (VAR_4->hashval[VAR_2->dynindx] >> VAR_4->shift1)
 & ((VAR_4->maskbits >> VAR_4->shift1) - 1);
  VAR_4->bitmask[VAR_6] |= ((bfd_vma) 1) << (VAR_4->hashval[VAR_2->dynindx] & VAR_4->mask);
  VAR_4->bitmask[VAR_6]
    |= ((bfd_vma) 1) << ((VAR_4->hashval[VAR_2->dynindx] >> VAR_4->shift2) & VAR_4->mask);
  VAR_6 = VAR_4->hashval[VAR_2->dynindx] & ~(unsigned long int) 1;
  if (VAR_4->counts[VAR_5] == 1)

    VAR_6 |= 1;
  FUNC_0 (VAR_4->output_bfd, VAR_6,
       VAR_4->contents + (VAR_4->indx[VAR_5] - VAR_4->symindx) * 4);
  --VAR_4->counts[VAR_5];
  VAR_2->dynindx = VAR_4->indx[VAR_5]++;
  return VAR_0;
}

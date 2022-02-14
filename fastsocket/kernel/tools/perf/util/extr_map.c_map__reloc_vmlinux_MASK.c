
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct map {scalar_t__ pgoff; int unmap_ip; int map_ip; } ;
struct kmap {TYPE_1__* ref_reloc_sym; } ;
typedef scalar_t__ s64 ;
struct TYPE_2__ {scalar_t__ addr; scalar_t__ unrelocated_addr; } ;


 struct kmap* FUNC_0 (struct map*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct map *VAR_2)
{
 struct kmap *VAR_3 = FUNC_0(VAR_2);
 s64 VAR_4;

 if (!VAR_3->ref_reloc_sym || !VAR_3->ref_reloc_sym->unrelocated_addr)
  return;

 VAR_4 = (VAR_3->ref_reloc_sym->unrelocated_addr -
   VAR_3->ref_reloc_sym->addr);

 if (!VAR_4)
  return;

 VAR_2->map_ip = VAR_0;
 VAR_2->unmap_ip = VAR_1;
 VAR_2->pgoff = VAR_4;
}

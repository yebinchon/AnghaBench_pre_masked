
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct internal_extra_pe_aouthdr {TYPE_1__* DataDirectory; } ;
typedef int bfd_vma ;
typedef int bfd ;
struct TYPE_8__ {int vma; int flags; } ;
typedef TYPE_2__ asection ;
struct TYPE_9__ {int virt_size; } ;
struct TYPE_7__ {int Size; int VirtualAddress; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *,TYPE_2__*) ;
 TYPE_3__* FUNC_2 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3 (bfd * VAR_1,
  struct internal_extra_pe_aouthdr *VAR_2,
  int VAR_3,
  char *VAR_4,
  bfd_vma VAR_5)
{
  asection *VAR_6 = FUNC_0 (VAR_1, VAR_4);


  if ((VAR_6 != ((void*)0))
      && (FUNC_1 (VAR_1, VAR_6) != ((void*)0))
      && (FUNC_2 (VAR_1, VAR_6) != ((void*)0)))
    {

      int VAR_7 = FUNC_2 (VAR_1, VAR_6)->virt_size;
      VAR_2->DataDirectory[VAR_3].Size = VAR_7;

      if (VAR_7)
 {
   VAR_2->DataDirectory[VAR_3].VirtualAddress =
     (VAR_6->vma - VAR_5) & 0xffffffff;
   VAR_6->flags |= VAR_0;
 }
    }
}

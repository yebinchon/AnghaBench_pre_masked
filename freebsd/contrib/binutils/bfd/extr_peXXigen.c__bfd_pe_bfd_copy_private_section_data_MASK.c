
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct pei_section_tdata {int dummy; } ;
struct coff_section_tdata {int dummy; } ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_8__ {int * used_by_bfd; } ;
typedef TYPE_1__ asection ;
struct TYPE_10__ {int * tdata; } ;
struct TYPE_9__ {int pe_flags; int virt_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (int *,int) ;
 TYPE_4__* FUNC_2 (int *,TYPE_1__*) ;
 TYPE_2__* FUNC_3 (int *,TYPE_1__*) ;

bfd_boolean
FUNC_4 (bfd *VAR_3,
           asection *VAR_4,
           bfd *VAR_5,
           asection *VAR_6)
{
  if (FUNC_0 (VAR_3) != VAR_2
      || FUNC_0 (VAR_5) != VAR_2)
    return VAR_1;

  if (FUNC_2 (VAR_3, VAR_4) != ((void*)0)
      && FUNC_3 (VAR_3, VAR_4) != ((void*)0))
    {
      if (FUNC_2 (VAR_5, VAR_6) == ((void*)0))
 {
   bfd_size_type VAR_7 = sizeof (struct coff_section_tdata);
   VAR_6->used_by_bfd = FUNC_1 (VAR_5, VAR_7);
   if (VAR_6->used_by_bfd == ((void*)0))
     return VAR_0;
 }

      if (FUNC_3 (VAR_5, VAR_6) == ((void*)0))
 {
   bfd_size_type VAR_8 = sizeof (struct pei_section_tdata);
   FUNC_2 (VAR_5, VAR_6)->tdata = FUNC_1 (VAR_5, VAR_8);
   if (FUNC_2 (VAR_5, VAR_6)->tdata == ((void*)0))
     return VAR_0;
 }

      FUNC_3 (VAR_5, VAR_6)->virt_size =
 FUNC_3 (VAR_3, VAR_4)->virt_size;
      FUNC_3 (VAR_5, VAR_6)->pe_flags =
 FUNC_3 (VAR_3, VAR_4)->pe_flags;
    }

  return VAR_1;
}

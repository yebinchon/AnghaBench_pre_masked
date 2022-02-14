
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef scalar_t__ bfd_boolean ;
struct TYPE_19__ {scalar_t__ xvec; TYPE_2__* sections; } ;
typedef TYPE_1__ bfd ;
struct TYPE_20__ {scalar_t__ segment_mark; scalar_t__ flags; scalar_t__ lma; scalar_t__ vma; scalar_t__ size; scalar_t__ rawsize; scalar_t__ alignment_power; struct TYPE_20__* next; struct TYPE_20__* output_section; } ;
typedef TYPE_2__ asection ;
struct TYPE_23__ {int this_hdr; } ;
struct TYPE_22__ {TYPE_3__* phdr; } ;
struct TYPE_21__ {scalar_t__ p_paddr; scalar_t__ p_memsz; scalar_t__ p_type; } ;
struct TYPE_18__ {unsigned int e_phnum; } ;
typedef int Elf_Internal_Shdr ;
typedef TYPE_3__ Elf_Internal_Phdr ;


 scalar_t__ FUNC_0 (int *,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 TYPE_10__* FUNC_3 (TYPE_1__*) ;
 TYPE_8__* FUNC_4 (TYPE_2__*) ;
 TYPE_6__* FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (bfd *VAR_5, bfd *VAR_6)
{
  if (FUNC_1 (VAR_5) != VAR_4
      || FUNC_1 (VAR_6) != VAR_4)
    return VAR_3;

  if (FUNC_5 (VAR_5)->phdr == ((void*)0))
    return VAR_3;

  if (VAR_5->xvec == VAR_6->xvec)
    {


      Elf_Internal_Phdr *VAR_7;
      asection *VAR_8, *VAR_9;
      unsigned int VAR_10, VAR_11;
      Elf_Internal_Shdr *VAR_12;


      for (VAR_8 = VAR_6->sections; VAR_8 != ((void*)0);
    VAR_8 = VAR_8->next)
 VAR_8->segment_mark = VAR_0;

      VAR_11 = FUNC_3 (VAR_5)->e_phnum;
      for (VAR_10 = 0, VAR_7 = FUNC_5 (VAR_5)->phdr;
    VAR_10 < VAR_11;
    VAR_10++, VAR_7++)
 {




   if (VAR_7->p_paddr == 0
       && VAR_7->p_memsz == 0
       && (VAR_7->p_type == VAR_2 || VAR_7->p_type == VAR_1))
     goto rewrite;

   for (VAR_8 = VAR_5->sections;
        VAR_8 != ((void*)0); VAR_8 = VAR_8->next)
     {


       VAR_9 = VAR_8->output_section;
       if (VAR_9)
  VAR_9->segment_mark = VAR_3;


       VAR_12 = &(FUNC_4(VAR_8)->this_hdr);
       if (FUNC_0 (VAR_12, VAR_7))
  {


    if (VAR_9 == ((void*)0)
        || VAR_8->flags != VAR_9->flags
        || VAR_8->lma != VAR_9->lma
        || VAR_8->vma != VAR_9->vma
        || VAR_8->size != VAR_9->size
        || VAR_8->rawsize != VAR_9->rawsize
        || VAR_8->alignment_power != VAR_9->alignment_power)
      goto rewrite;
  }
     }
 }



      for (VAR_8 = VAR_6->sections; VAR_8 != ((void*)0);
    VAR_8 = VAR_8->next)
 {
   if (VAR_8->segment_mark == VAR_0)
     goto rewrite;
   else
     VAR_8->segment_mark = VAR_0;
 }

      return FUNC_2 (VAR_5, VAR_6);
    }

rewrite:
  return FUNC_6 (VAR_5, VAR_6);
}

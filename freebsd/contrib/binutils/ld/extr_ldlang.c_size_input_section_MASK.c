
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {TYPE_6__* section; } ;
struct TYPE_12__ {TYPE_5__ input_section; } ;
typedef TYPE_2__ lang_statement_union_type ;
struct TYPE_13__ {int subsection_alignment; TYPE_6__* bfd_section; } ;
typedef TYPE_3__ lang_output_section_statement_type ;
struct TYPE_14__ {int just_syms_flag; } ;
typedef TYPE_4__ lang_input_statement_type ;
typedef TYPE_5__ lang_input_section_type ;
typedef int fill_type ;
typedef unsigned int bfd_vma ;
struct TYPE_16__ {int flags; int alignment_power; unsigned int output_offset; unsigned int vma; int size; TYPE_1__* owner; } ;
typedef TYPE_6__ asection ;
struct TYPE_11__ {scalar_t__ usrdata; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int,int) ;
 int FUNC_3 (TYPE_2__**,int *,int ,TYPE_6__*,unsigned int) ;

__attribute__((used)) static bfd_vma
FUNC_4
  (lang_statement_union_type **VAR_1,
   lang_output_section_statement_type *VAR_2,
   fill_type *VAR_3,
   bfd_vma VAR_4)
{
  lang_input_section_type *VAR_5 = &((*VAR_1)->input_section);
  asection *VAR_6 = VAR_5->section;

  if (!((lang_input_statement_type *) VAR_6->owner->usrdata)->just_syms_flag
      && (VAR_6->flags & VAR_0) == 0)
    {
      unsigned int VAR_7;
      asection *VAR_8;






      if (VAR_2->subsection_alignment != -1)
 VAR_6->alignment_power = VAR_2->subsection_alignment;

      VAR_8 = VAR_2->bfd_section;
      if (VAR_8->alignment_power < VAR_6->alignment_power)
 VAR_8->alignment_power = VAR_6->alignment_power;

      VAR_7 = FUNC_2 (VAR_4, VAR_6->alignment_power) - VAR_4;

      if (VAR_7 != 0)
 {
   FUNC_3 (VAR_1, VAR_3, FUNC_1 (VAR_7), VAR_8, VAR_4);
   VAR_4 += VAR_7;
 }



      VAR_6->output_offset = VAR_4 - VAR_8->vma;


      VAR_4 += FUNC_0 (VAR_6->size);
      VAR_8->size = FUNC_1 (VAR_4 - VAR_8->vma);
    }
  else
    {
      VAR_6->output_offset = VAR_6->vma - VAR_2->bfd_section->vma;
    }

  return VAR_4;
}

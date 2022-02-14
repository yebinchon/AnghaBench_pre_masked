
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef int lang_statement_list_type ;
struct TYPE_20__ {int sectype; int block_value; TYPE_14__* bfd_section; int name; } ;
typedef TYPE_5__ lang_output_section_statement_type ;
struct TYPE_21__ {TYPE_7__* section; } ;
typedef TYPE_6__ lang_input_section_type ;
typedef int flagword ;
typedef int bfd_boolean ;
struct TYPE_18__ {TYPE_7__* s; } ;
struct TYPE_17__ {TYPE_7__* s; } ;
struct TYPE_22__ {int flags; scalar_t__ entsize; scalar_t__ alignment_power; int owner; TYPE_14__* output_section; TYPE_3__ map_head; TYPE_2__ map_tail; } ;
typedef TYPE_7__ asection ;
struct TYPE_23__ {scalar_t__ strip; int relocatable; } ;
struct TYPE_19__ {TYPE_7__* s; } ;
struct TYPE_16__ {TYPE_7__* s; } ;
struct TYPE_15__ {int linker_has_input; int flags; scalar_t__ entsize; scalar_t__ alignment_power; TYPE_4__ map_head; TYPE_1__ map_tail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_14__* VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,TYPE_7__*,int) ;
 int VAR_16 ;
 TYPE_9__ VAR_17 ;
 TYPE_6__* FUNC_2 (int ,int *) ;




 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;

void
FUNC_4 (lang_statement_list_type *VAR_21,
    asection *VAR_22,
    lang_output_section_statement_type *VAR_23)
{
  flagword VAR_24 = VAR_22->flags;
  bfd_boolean VAR_25;


  VAR_25 = (VAR_24 & VAR_3) != 0;



  if (FUNC_3 (VAR_23->name, VAR_0) == 0)
    VAR_25 = VAR_13;



  if ((VAR_17.strip == VAR_19 || VAR_17.strip == VAR_18)
      && (VAR_24 & VAR_2) != 0)
    VAR_25 = VAR_13;

  if (VAR_25)
    {
      if (VAR_22->output_section == ((void*)0))
 {

   VAR_22->output_section = VAR_14;
 }
      return;
    }

  if (VAR_22->output_section == ((void*)0))
    {
      bfd_boolean VAR_26;
      lang_input_section_type *VAR_27;
      flagword VAR_28;

      VAR_28 = VAR_22->flags;
      VAR_28 &= ~ VAR_8;

      switch (VAR_23->sectype)
 {
 case 129:
 case 128:
   break;
 case 131:
   VAR_28 &= ~VAR_1;
   break;
 case 130:
   VAR_28 &= ~VAR_6;
   VAR_28 |= VAR_8;
   break;
 }

      if (VAR_23->bfd_section == ((void*)0))
 FUNC_1 (VAR_23, VAR_22, VAR_28);

      VAR_26 = ! VAR_23->bfd_section->linker_has_input;
      VAR_23->bfd_section->linker_has_input = 1;

      if (!VAR_17.relocatable
   && !VAR_20)
 {
   asection *VAR_29 = VAR_23->bfd_section->map_tail.s;
   VAR_23->bfd_section->map_tail.s = VAR_22;
   VAR_22->map_head.s = ((void*)0);
   VAR_22->map_tail.s = VAR_29;
   if (VAR_29 != ((void*)0))
     VAR_29->map_head.s = VAR_22;
   else
     VAR_23->bfd_section->map_head.s = VAR_22;
 }


      VAR_27 = FUNC_2 (VAR_16, VAR_21);

      VAR_27->section = VAR_22;
      VAR_22->output_section = VAR_23->bfd_section;






      if (! VAR_17.relocatable)
 VAR_28 &= ~ (VAR_5 | VAR_4);





      if (! VAR_26 && (VAR_23->bfd_section->flags & VAR_9) == 0)
 VAR_28 &= ~ VAR_9;


      if (! VAR_26
   && ((VAR_23->bfd_section->flags & (VAR_7 | VAR_11))
       != (VAR_28 & (VAR_7 | VAR_11))
       || ((VAR_28 & VAR_7)
    && VAR_23->bfd_section->entsize != VAR_22->entsize)))
 {
   VAR_23->bfd_section->flags &= ~ (VAR_7 | VAR_11);
   VAR_28 &= ~ (VAR_7 | VAR_11);
 }

      VAR_23->bfd_section->flags |= VAR_28;

      if (VAR_28 & VAR_7)
 VAR_23->bfd_section->entsize = VAR_22->entsize;



      if ((VAR_22->flags & VAR_9) == 0)
 VAR_23->bfd_section->flags &= ~VAR_9;


      if (VAR_22->flags & VAR_10)
 VAR_23->bfd_section->flags |= VAR_10;

      if (VAR_22->alignment_power > VAR_23->bfd_section->alignment_power)
 VAR_23->bfd_section->alignment_power = VAR_22->alignment_power;

      if (FUNC_0 (VAR_22->owner) == VAR_15
   && (VAR_22->flags & VAR_12) != 0)
 {
   VAR_23->bfd_section->flags |= VAR_12;

   VAR_23->block_value = 128;
 }
    }
}

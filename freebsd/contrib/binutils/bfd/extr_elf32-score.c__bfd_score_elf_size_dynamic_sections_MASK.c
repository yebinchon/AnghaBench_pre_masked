
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct bfd_link_info {int flags; int shared; } ;
typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_11__ {TYPE_2__* sections; } ;
typedef TYPE_1__ bfd ;
struct TYPE_12__ {scalar_t__ size; int flags; int * contents; scalar_t__ reloc_count; struct TYPE_12__* output_section; TYPE_1__* owner; struct TYPE_12__* next; } ;
typedef TYPE_2__ asection ;
struct TYPE_13__ {scalar_t__ dynamic_sections_created; TYPE_1__* dynobj; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (struct bfd_link_info*,int ,int ) ;
 char* VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 TYPE_2__* FUNC_3 (TYPE_1__*,char const*) ;
 char* FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (TYPE_1__*,scalar_t__) ;
 TYPE_4__* FUNC_7 (struct bfd_link_info*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_11 (bfd *VAR_23, struct bfd_link_info *VAR_24)
{
  bfd *VAR_25;
  asection *VAR_26;
  bfd_boolean VAR_27;

  VAR_25 = FUNC_7 (VAR_24)->dynobj;
  FUNC_0 (VAR_25 != ((void*)0));

  if (FUNC_7 (VAR_24)->dynamic_sections_created)
    {

      if (!VAR_24->shared)
        {
          VAR_26 = FUNC_3 (VAR_25, ".interp");
          FUNC_0 (VAR_26 != ((void*)0));
          VAR_26->size = FUNC_10 (VAR_13) + 1;
          VAR_26->contents = (bfd_byte *) VAR_13;
        }
    }




  VAR_27 = VAR_14;
  for (VAR_26 = VAR_25->sections; VAR_26 != ((void*)0); VAR_26 = VAR_26->next)
    {
      const char *VAR_28;

      if ((VAR_26->flags & VAR_19) == 0)
        continue;



      VAR_28 = FUNC_4 (VAR_25, VAR_26);

      if (FUNC_1 (VAR_28, ".rel"))
        {
          if (VAR_26->size == 0)
            {





              if (VAR_26->output_section != ((void*)0)
                  && FUNC_9 (VAR_28,
                             FUNC_4 (VAR_26->output_section->owner,
                                                   VAR_26->output_section)) == 0)
                VAR_26->flags |= VAR_18;
            }
          else
            {
              const char *VAR_29;
              asection *VAR_30;







              VAR_29 = FUNC_4 (VAR_23, VAR_26->output_section);
              VAR_30 = FUNC_3 (VAR_23, VAR_29 + 4);
              if ((VAR_30 != ((void*)0)
                   && (VAR_30->flags & VAR_20) != 0
                   && (VAR_30->flags & VAR_17) != 0) || FUNC_9 (VAR_29, ".rel.dyn") == 0)
                VAR_27 = VAR_21;



              if (FUNC_9 (VAR_28, ".rel.dyn") != 0)
                VAR_26->reloc_count = 0;
            }
        }
      else if (FUNC_1 (VAR_28, ".got"))
        {




        }
      else if (FUNC_9 (VAR_28, VAR_15) == 0)
        {


          VAR_26->size += VAR_16;
        }
      else if (! FUNC_1 (VAR_28, ".init"))
        {

          continue;
        }


      VAR_26->contents = FUNC_6 (VAR_25, VAR_26->size);
      if (VAR_26->contents == ((void*)0) && VAR_26->size != 0)
        {
          FUNC_5 (VAR_22);
          return VAR_14;
        }
    }

  if (FUNC_7 (VAR_24)->dynamic_sections_created)
    {






      if (!FUNC_2 (VAR_24, VAR_1, 0))
 return VAR_14;

      if (VAR_27)
 VAR_24->flags |= VAR_0;

      if ((VAR_24->flags & VAR_0) != 0)
 {
   if (!FUNC_2 (VAR_24, VAR_12, 0))
     return VAR_14;
 }

      if (! FUNC_2 (VAR_24, VAR_2, 0))
 return VAR_14;

      if (FUNC_8 (VAR_25, VAR_14))
 {
   if (!FUNC_2 (VAR_24, VAR_3, 0))
     return VAR_14;

   if (!FUNC_2 (VAR_24, VAR_5, 0))
     return VAR_14;

   if (!FUNC_2 (VAR_24, VAR_4, 0))
     return VAR_14;
 }

      if (!FUNC_2 (VAR_24, VAR_6, 0))
        return VAR_14;

      if (!FUNC_2 (VAR_24, VAR_9, 0))
        return VAR_14;

      if (!FUNC_2 (VAR_24, VAR_10, 0))
        return VAR_14;

      if (!FUNC_2 (VAR_24, VAR_11, 0))
        return VAR_14;

      if (!FUNC_2 (VAR_24, VAR_7, 0))
        return VAR_14;

      if (!FUNC_2 (VAR_24, VAR_8, 0))
 return VAR_14;
    }

  return VAR_21;
}

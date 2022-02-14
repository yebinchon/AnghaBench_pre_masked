
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int flags; TYPE_3__* bfd_section; struct TYPE_13__* next; } ;
typedef TYPE_2__ lang_output_section_statement_type ;
typedef int (* lang_match_sec_type_func ) (int ,TYPE_3__*,int ,TYPE_4__ const*) ;
typedef int flagword ;
struct TYPE_15__ {int flags; int owner; } ;
typedef TYPE_4__ asection ;
struct TYPE_16__ {TYPE_1__* head; } ;
struct TYPE_14__ {int flags; } ;
struct TYPE_12__ {TYPE_2__ output_section_statement; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_6__ VAR_7 ;
 int VAR_8 ;

lang_output_section_statement_type *
FUNC_0 (const asection *VAR_9,
       lang_output_section_statement_type **VAR_10,
       lang_match_sec_type_func VAR_11)
{
  lang_output_section_statement_type *VAR_12, *VAR_13, *VAR_14;
  flagword VAR_15;



  VAR_12 = &VAR_7.head->output_section_statement;
  VAR_12 = VAR_12->next;


  VAR_14 = ((void*)0);
  for (VAR_13 = VAR_12; VAR_13; VAR_13 = VAR_13->next)
    {
      VAR_15 = VAR_13->flags;
      if (VAR_13->bfd_section != ((void*)0))
 {
   VAR_15 = VAR_13->bfd_section->flags;
   if (VAR_11 && !VAR_11 (VAR_8, VAR_13->bfd_section,
      VAR_9->owner, VAR_9))
     continue;
 }
      VAR_15 ^= VAR_9->flags;
      if (!(VAR_15 & (VAR_2 | VAR_0 | VAR_3 | VAR_4
       | VAR_1 | VAR_5 | VAR_6)))
 VAR_14 = VAR_13;
    }
  if (VAR_14 != ((void*)0))
    {
      if (VAR_10 != ((void*)0))
 *VAR_10 = VAR_14;
      return VAR_14;
    }

  if (VAR_9->flags & VAR_1)
    {

      for (VAR_13 = VAR_12; VAR_13; VAR_13 = VAR_13->next)
 {
   VAR_15 = VAR_13->flags;
   if (VAR_13->bfd_section != ((void*)0))
     {
       VAR_15 = VAR_13->bfd_section->flags;
       if (VAR_11 && !VAR_11 (VAR_8, VAR_13->bfd_section,
          VAR_9->owner, VAR_9))
  continue;
     }
   VAR_15 ^= VAR_9->flags;
   if (!(VAR_15 & (VAR_2 | VAR_0 | VAR_3
    | VAR_1 | VAR_5 | VAR_6)))
     VAR_14 = VAR_13;
 }
    }
  else if (VAR_9->flags & (VAR_4 | VAR_6))
    {

      for (VAR_13 = VAR_12; VAR_13; VAR_13 = VAR_13->next)
 {
   VAR_15 = VAR_13->flags;
   if (VAR_13->bfd_section != ((void*)0))
     {
       VAR_15 = VAR_13->bfd_section->flags;
       if (VAR_11 && !VAR_11 (VAR_8, VAR_13->bfd_section,
          VAR_9->owner, VAR_9))
  continue;
     }
   VAR_15 ^= VAR_9->flags;
   if (!(VAR_15 & (VAR_2 | VAR_0 | VAR_3
    | VAR_4))
       && !(VAR_13->flags & (VAR_5 | VAR_6)))
     VAR_14 = VAR_13;
 }
    }
  else if (VAR_9->flags & VAR_5)
    {

      for (VAR_13 = VAR_12; VAR_13; VAR_13 = VAR_13->next)
 {
   VAR_15 = VAR_13->flags;
   if (VAR_13->bfd_section != ((void*)0))
     {
       VAR_15 = VAR_13->bfd_section->flags;
       if (VAR_11 && !VAR_11 (VAR_8, VAR_13->bfd_section,
          VAR_9->owner, VAR_9))
  continue;
     }
   VAR_15 ^= VAR_9->flags;
   if (!(VAR_15 & (VAR_2 | VAR_0 | VAR_3
    | VAR_6))
       || ((VAR_13->flags & VAR_5)
    && !(VAR_9->flags & VAR_2)))
     VAR_14 = VAR_13;
 }
    }
  else if (VAR_9->flags & VAR_2)
    {

      for (VAR_13 = VAR_12; VAR_13; VAR_13 = VAR_13->next)
 {
   VAR_15 = VAR_13->flags;
   if (VAR_13->bfd_section != ((void*)0))
     {
       VAR_15 = VAR_13->bfd_section->flags;
       if (VAR_11 && !VAR_11 (VAR_8, VAR_13->bfd_section,
          VAR_9->owner, VAR_9))
  continue;
     }
   VAR_15 ^= VAR_9->flags;
   if (!(VAR_15 & (VAR_2 | VAR_0 | VAR_3
    | VAR_5 | VAR_6)))
     VAR_14 = VAR_13;
 }
    }
  else
    {

      for (VAR_13 = VAR_12; VAR_13; VAR_13 = VAR_13->next)
 {
   VAR_15 = VAR_13->flags;
   if (VAR_13->bfd_section != ((void*)0))
     {
       VAR_15 = VAR_13->bfd_section->flags;
       if (VAR_11 && !VAR_11 (VAR_8, VAR_13->bfd_section,
          VAR_9->owner, VAR_9))
  continue;
     }
   VAR_15 ^= VAR_9->flags;
   if (!(VAR_15 & VAR_0))
     VAR_14 = VAR_13;
 }
    }

  if (VAR_14 || !VAR_11)
    return VAR_14;

  return FUNC_0 (VAR_9, ((void*)0), ((void*)0));
}

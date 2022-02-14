
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_18__ {scalar_t__ sorted; } ;
struct wildcard_list {TYPE_3__ spec; } ;
struct TYPE_16__ {TYPE_5__* head; } ;
struct TYPE_19__ {scalar_t__ filenames_sorted; TYPE_1__ children; } ;
typedef TYPE_4__ lang_wild_statement_type ;
struct TYPE_22__ {TYPE_11__* section; } ;
struct TYPE_17__ {scalar_t__ type; TYPE_5__* next; } ;
struct TYPE_20__ {TYPE_7__ input_section; TYPE_2__ header; } ;
typedef TYPE_5__ lang_statement_union_type ;
struct TYPE_21__ {char* filename; TYPE_12__* the_bfd; } ;
typedef TYPE_6__ lang_input_statement_type ;
typedef TYPE_7__ lang_input_section_type ;
typedef scalar_t__ bfd_boolean ;
typedef int asection ;
struct TYPE_15__ {char* filename; } ;
struct TYPE_14__ {TYPE_12__* owner; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int *) ;
 char* FUNC_1 (TYPE_12__*,int *) ;
 int * FUNC_2 (TYPE_12__*) ;
 scalar_t__ FUNC_3 (scalar_t__,int *,TYPE_11__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char const*,char const*) ;

__attribute__((used)) static lang_statement_union_type *
FUNC_5 (lang_wild_statement_type *VAR_4,
    struct wildcard_list *VAR_5,
    lang_input_statement_type *VAR_6,
    asection *VAR_7)
{
  const char *VAR_8;
  lang_statement_union_type *VAR_9;

  if (!VAR_4->filenames_sorted
      && (VAR_5 == ((void*)0) || VAR_5->spec.sorted == VAR_3))
    return ((void*)0);

  VAR_8 = FUNC_1 (VAR_6->the_bfd, VAR_7);
  for (VAR_9 = VAR_4->children.head; VAR_9 != ((void*)0); VAR_9 = VAR_9->header.next)
    {
      lang_input_section_type *VAR_10;

      if (VAR_9->header.type != VAR_2)
 continue;
      VAR_10 = &VAR_9->input_section;




      if (VAR_4->filenames_sorted)
 {
   const char *VAR_11, *VAR_12;
   bfd_boolean VAR_13, VAR_14;
   int VAR_15;






   if (VAR_6->the_bfd != ((void*)0)
       && FUNC_2 (VAR_6->the_bfd) != ((void*)0))
     {
       VAR_11 = FUNC_0 (FUNC_2 (VAR_6->the_bfd));
       VAR_13 = VAR_1;
     }
   else
     {
       VAR_11 = VAR_6->filename;
       VAR_13 = VAR_0;
     }

   if (FUNC_2 (VAR_10->section->owner) != ((void*)0))
     {
       VAR_12 = FUNC_0 (FUNC_2 (VAR_10->section->owner));
       VAR_14 = VAR_1;
     }
   else
     {
       VAR_12 = VAR_10->section->owner->filename;
       VAR_14 = VAR_0;
     }

   VAR_15 = FUNC_4 (VAR_11, VAR_12);
   if (VAR_15 > 0)
     continue;
   else if (VAR_15 < 0)
     break;

   if (VAR_13 || VAR_14)
     {
       if (VAR_13)
  VAR_11 = VAR_6->filename;
       if (VAR_14)
  VAR_12 = VAR_10->section->owner->filename;

       VAR_15 = FUNC_4 (VAR_11, VAR_12);
       if (VAR_15 > 0)
  continue;
       else if (VAR_15 < 0)
  break;
     }
 }




      if (VAR_5 != ((void*)0) && VAR_5->spec.sorted != VAR_3)
 if (FUNC_3 (VAR_5->spec.sorted, VAR_7, VAR_10->section) < 0)
   break;
    }

  return VAR_9;
}

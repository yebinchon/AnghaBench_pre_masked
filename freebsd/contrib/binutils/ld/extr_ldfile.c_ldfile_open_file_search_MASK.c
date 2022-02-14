
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int sysrooted; char const* name; struct TYPE_9__* next; } ;
typedef TYPE_1__ search_dirs_type ;
struct TYPE_10__ {int sysrooted; char* filename; scalar_t__ is_archive; scalar_t__ dynamic; } ;
typedef TYPE_2__ lang_input_statement_type ;
typedef int bfd_boolean ;
struct TYPE_11__ {int relocatable; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_1 ;
 char* FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (char const*,TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (char*,TYPE_2__*) ;
 TYPE_4__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 char* VAR_5 ;
 int FUNC_6 (char*,char*,char const*,char*,char const*,...) ;
 scalar_t__ FUNC_7 (char const*) ;
 char* FUNC_8 (scalar_t__) ;

bfd_boolean
FUNC_9 (const char *VAR_6,
    lang_input_statement_type *VAR_7,
    const char *VAR_8,
    const char *VAR_9)
{
  search_dirs_type *VAR_10;



  if (! VAR_7->is_archive)
    {
      if (VAR_7->sysrooted && FUNC_0 (VAR_7->filename))
 {
   char *VAR_11 = FUNC_1 (VAR_2, VAR_7->filename,
          (const char *) ((void*)0));
   if (FUNC_5 (VAR_11, VAR_7))
     {
       VAR_7->filename = VAR_11;
       return VAR_1;
     }
   FUNC_2 (VAR_11);
 }
      else if (FUNC_5 (VAR_7->filename, VAR_7))
 {
   VAR_7->sysrooted = FUNC_0 (VAR_7->filename)
     && FUNC_3 (VAR_7->filename, VAR_1);
   return VAR_1;
 }

      if (FUNC_0 (VAR_7->filename))
 return VAR_0;
    }

  for (VAR_10 = VAR_4; VAR_10 != ((void*)0); VAR_10 = VAR_10->next)
    {
      char *VAR_12;

      if (VAR_7->dynamic && ! VAR_3.relocatable)
 {
   if (FUNC_4 (VAR_6, VAR_10, VAR_7))
     {
       VAR_7->sysrooted = VAR_10->sysrooted;
       return VAR_1;
     }
 }

      VAR_12 = FUNC_8 (FUNC_7 (VAR_10->name)
   + FUNC_7 (VAR_5)
   + FUNC_7 (VAR_8)
   + FUNC_7 (VAR_7->filename)
   + FUNC_7 (VAR_6)
   + FUNC_7 (VAR_9)
   + 1);

      if (VAR_7->is_archive)
 FUNC_6 (VAR_12, "%s%s%s%s%s%s", VAR_10->name, VAR_5,
   VAR_8, VAR_7->filename, VAR_6, VAR_9);
      else
 FUNC_6 (VAR_12, "%s%s%s", VAR_10->name, VAR_5, VAR_7->filename);

      if (FUNC_5 (VAR_12, VAR_7))
 {
   VAR_7->filename = VAR_12;
   VAR_7->sysrooted = VAR_10->sysrooted;
   return VAR_1;
 }

      FUNC_2 (VAR_12);
    }

  return VAR_0;
}

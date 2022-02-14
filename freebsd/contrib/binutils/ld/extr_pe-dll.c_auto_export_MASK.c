
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct exclude_list_struct {int type; char const* string; struct exclude_list_struct* next; } ;
struct TYPE_15__ {int num_exports; TYPE_1__* exports; } ;
typedef TYPE_2__ def_file ;
struct TYPE_16__ {int filename; TYPE_6__* my_archive; } ;
typedef TYPE_3__ bfd ;
struct TYPE_17__ {char const* name; int len; } ;
typedef TYPE_4__ autofilter_entry_type ;
struct TYPE_19__ {TYPE_4__* autofilter_symbollist; } ;
struct TYPE_18__ {int filename; } ;
struct TYPE_14__ {char const* name; } ;


 TYPE_4__* VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_4__* VAR_2 ;
 TYPE_4__* VAR_3 ;
 struct exclude_list_struct* VAR_4 ;
 char* FUNC_0 (int ) ;
 TYPE_7__* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (char*,char const*,TYPE_3__*,TYPE_6__*) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char const*,int) ;

__attribute__((used)) static int
FUNC_6 (bfd *VAR_8, def_file *VAR_9, const char *VAR_10)
{
  int VAR_11;
  struct exclude_list_struct *VAR_12;
  const autofilter_entry_type *VAR_13;
  const char * VAR_14 = 0;
  if (VAR_8 && VAR_8->my_archive)
    VAR_14 = FUNC_0 (VAR_8->my_archive->filename);

  for (VAR_11 = 0; VAR_11 < VAR_9->num_exports; VAR_11++)
    if (FUNC_3 (VAR_9->exports[VAR_11].name, VAR_10) == 0)
      return 0;

  if (VAR_6)
    {
      const char * VAR_15;
      int VAR_16;

      if (VAR_7)
 FUNC_1 ("considering exporting: %s, abfd=%p, abfd->my_arc=%p\n",
  VAR_10, VAR_8, VAR_8->my_archive);



      if (VAR_14)
 {
   VAR_13 = VAR_0;

   while (VAR_13->name)
     {
       if (FUNC_5 (VAR_14, VAR_13->name, VAR_13->len) == 0 )
  return 0;
       VAR_13++;
     }
 }



      if (VAR_8 && (VAR_15 = FUNC_0 (VAR_8->filename)))
 {
   VAR_13 = VAR_1;
   while (VAR_13->name)
     {
       if (FUNC_3 (VAR_15, VAR_13->name) == 0)
  return 0;
       VAR_13++;
     }
 }





      VAR_13 = VAR_5->autofilter_symbollist;

      while (VAR_13->name)
 {
   if (FUNC_3 (VAR_10, VAR_13->name) == 0)
     return 0;

   VAR_13++;
 }


      VAR_13 = VAR_2;
      while (VAR_13->name)
 {
   if (FUNC_5 (VAR_10, VAR_13->name, VAR_13->len) == 0)
     return 0;

   VAR_13++;
 }


      VAR_16 = FUNC_4 (VAR_10);
      VAR_13 = VAR_3;
      while (VAR_13->name)
 {
   if ((VAR_16 >= VAR_13->len)

       && FUNC_5 (VAR_10 + VAR_16 - VAR_13->len, VAR_13->name,
     VAR_13->len + 1) == 0)
     return 0;

   VAR_13++;
 }
    }

  for (VAR_12 = VAR_4; VAR_12; VAR_12 = VAR_12->next)
    {
      if (VAR_12->type == 1)
 {
   if (VAR_14
       && ((FUNC_3 (VAR_14, VAR_12->string) == 0)
     || (FUNC_2 ("ALL", VAR_12->string) == 0)))
     return 0;
 }
      else if (FUNC_3 (VAR_10, VAR_12->string) == 0)
 return 0;
    }

  return 1;
}

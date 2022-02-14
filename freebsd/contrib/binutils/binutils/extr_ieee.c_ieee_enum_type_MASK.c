
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee_handle {struct ieee_defined_enum* enums; TYPE_2__* type_stack; } ;
struct ieee_defined_enum {char const* tag; unsigned int indx; char const** names; int* vals; scalar_t__ defined; struct ieee_defined_enum* next; } ;
struct ieee_buflist {int dummy; } ;
typedef int bfd_signed_vma ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_3__ {unsigned int indx; } ;
struct TYPE_4__ {TYPE_1__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ieee_handle*,char const*,unsigned int,int ,scalar_t__,scalar_t__,struct ieee_buflist*) ;
 scalar_t__ FUNC_1 (struct ieee_handle*,unsigned int,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct ieee_handle*,char const*) ;
 int FUNC_3 (struct ieee_handle*,int) ;
 int FUNC_4 (struct ieee_defined_enum*,int ,int) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (void *VAR_2, const char *VAR_3, const char **VAR_4,
  bfd_signed_vma *VAR_5)
{
  struct ieee_handle *VAR_6 = (struct ieee_handle *) VAR_2;
  struct ieee_defined_enum *VAR_7;
  bfd_boolean VAR_8, VAR_9;
  unsigned int VAR_10;
  int VAR_11 = 0;

  VAR_8 = VAR_0;
  VAR_10 = (unsigned int) -1;
  for (VAR_7 = VAR_6->enums; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
    {
      if (VAR_3 == ((void*)0))
 {
   if (VAR_7->tag != ((void*)0))
     continue;
 }
      else
 {
   if (VAR_7->tag == ((void*)0)
       || VAR_3[0] != VAR_7->tag[0]
       || FUNC_5 (VAR_3, VAR_7->tag) != 0)
     continue;
 }

      if (! VAR_7->defined)
 {

   VAR_10 = VAR_7->indx;
   break;
 }

      if (VAR_4 != ((void*)0) && VAR_7->names != ((void*)0))
 {
   for (VAR_11 = 0; VAR_4[VAR_11] != ((void*)0) && VAR_7->names[VAR_11] != ((void*)0); VAR_11++)
     {
       if (VAR_4[VAR_11][0] != VAR_7->names[VAR_11][0]
    || VAR_5[VAR_11] != VAR_7->vals[VAR_11]
    || FUNC_5 (VAR_4[VAR_11], VAR_7->names[VAR_11]) != 0)
  break;
     }
 }

      if ((VAR_4 == ((void*)0) && VAR_7->names == ((void*)0))
   || (VAR_4 != ((void*)0)
       && VAR_7->names != ((void*)0)
       && VAR_4[VAR_11] == ((void*)0)
       && VAR_7->names[VAR_11] == ((void*)0)))
 {

   return FUNC_1 (VAR_6, VAR_7->indx, 0, VAR_1, VAR_0);
 }

      if (VAR_3 != ((void*)0))
 {


   VAR_8 = VAR_1;
   break;
 }
    }





  VAR_9 = VAR_1;
  if (VAR_4 != ((void*)0))
    {
      for (VAR_11 = 0; VAR_4[VAR_11] != ((void*)0); VAR_11++)
 {
   if (VAR_5[VAR_11] != VAR_11)
     {
       VAR_9 = VAR_0;
       break;
     }
 }
    }

  if (! FUNC_0 (VAR_6, VAR_3, VAR_10, 0, VAR_1, VAR_8,
    (struct ieee_buflist *) ((void*)0))
      || ! FUNC_3 (VAR_6, VAR_9 ? 'E' : 'N'))
    return VAR_0;
  if (VAR_9)
    {


      if (! FUNC_3 (VAR_6, 4))
 return VAR_0;
    }
  if (VAR_4 != ((void*)0))
    {
      for (VAR_11 = 0; VAR_4[VAR_11] != ((void*)0); VAR_11++)
 {
   if (! FUNC_2 (VAR_6, VAR_4[VAR_11]))
     return VAR_0;
   if (! VAR_9)
     {
       if (! FUNC_3 (VAR_6, VAR_5[VAR_11]))
  return VAR_0;
     }
 }
    }

  if (! VAR_8)
    {
      if (VAR_10 == (unsigned int) -1)
 {
   VAR_7 = (struct ieee_defined_enum *) FUNC_6 (sizeof *VAR_7);
   FUNC_4 (VAR_7, 0, sizeof *VAR_7);
   VAR_7->indx = VAR_6->type_stack->type.indx;
   VAR_7->tag = VAR_3;

   VAR_7->next = VAR_6->enums;
   VAR_6->enums = VAR_7;
 }

      VAR_7->names = VAR_4;
      VAR_7->vals = VAR_5;
      VAR_7->defined = VAR_1;
    }

  return VAR_1;
}

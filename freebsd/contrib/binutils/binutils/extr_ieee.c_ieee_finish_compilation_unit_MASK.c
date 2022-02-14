
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ieee_range {int low; int high; struct ieee_range* next; } ;
struct ieee_handle {int highaddr; char* modname; TYPE_2__* abfd; struct ieee_range* ranges; int data; int linenos; int vars; int types; int lineno_filename; int filename; int * pending_lineno_filename; int cxx; } ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_6__ {int flags; int index; struct TYPE_6__* next; } ;
typedef TYPE_1__ asection ;
struct TYPE_7__ {TYPE_1__* sections; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (struct ieee_handle*,int ,int,int) ;
 int FUNC_4 (struct ieee_handle*,int *,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ieee_handle*,int *) ;
 int FUNC_7 (void*,char const*,int ,int) ;
 int FUNC_8 (struct ieee_handle*,int) ;
 int FUNC_9 (struct ieee_handle*,char*) ;
 int FUNC_10 (struct ieee_handle*,int) ;
 scalar_t__ FUNC_11 (int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_12 (struct ieee_handle *VAR_7)
{
  struct ieee_range *VAR_8;

  if (! FUNC_5 (&VAR_7->types))
    {
      if (! FUNC_6 (VAR_7, &VAR_7->types)
   || ! FUNC_8 (VAR_7, (int) VAR_6))
 return VAR_0;
    }

  if (! FUNC_5 (&VAR_7->cxx))
    {


      FUNC_0 (! FUNC_5 (&VAR_7->vars));
      if (! FUNC_6 (VAR_7, &VAR_7->vars))
 return VAR_0;



      if (! FUNC_8 (VAR_7, (int) VAR_5)
   || ! FUNC_8 (VAR_7, 6)
   || ! FUNC_10 (VAR_7, 0)
   || ! FUNC_9 (VAR_7, "__XRYCPP")
   || ! FUNC_10 (VAR_7, 0)
   || ! FUNC_10 (VAR_7, 0)
   || ! FUNC_10 (VAR_7, VAR_7->highaddr - 1)
   || ! FUNC_4 (VAR_7, &VAR_7->vars, &VAR_7->cxx)
   || ! FUNC_6 (VAR_7, &VAR_7->vars)
   || ! FUNC_8 (VAR_7, (int) VAR_6)
   || ! FUNC_10 (VAR_7, VAR_7->highaddr - 1))
 return VAR_0;
    }

  if (! FUNC_5 (&VAR_7->vars))
    {
      if (! FUNC_6 (VAR_7, &VAR_7->vars)
   || ! FUNC_8 (VAR_7, (int) VAR_6))
 return VAR_0;
    }

  if (VAR_7->pending_lineno_filename != ((void*)0))
    {

      if (! FUNC_7 ((void *) VAR_7, (const char *) ((void*)0), 0, (bfd_vma) -1))
 return VAR_0;
    }
  if (! FUNC_5 (&VAR_7->linenos))
    {
      if (! FUNC_6 (VAR_7, &VAR_7->linenos)
   || ! FUNC_8 (VAR_7, (int) VAR_6))
 return VAR_0;
      if (FUNC_11 (VAR_7->filename, VAR_7->lineno_filename) != 0)
 {



   if (! FUNC_8 (VAR_7, (int) VAR_6))
     return VAR_0;
 }
    }

  if (! FUNC_4 (VAR_7, &VAR_7->data, &VAR_7->types)
      || ! FUNC_4 (VAR_7, &VAR_7->data, &VAR_7->vars)
      || ! FUNC_4 (VAR_7, &VAR_7->data, &VAR_7->linenos))
    return VAR_0;


  if (! FUNC_6 (VAR_7, &VAR_7->data))
    return VAR_0;

  if (! FUNC_8 (VAR_7, (int) VAR_5)
      || ! FUNC_8 (VAR_7, 10)
      || ! FUNC_10 (VAR_7, 0)
      || ! FUNC_9 (VAR_7, VAR_7->modname)
      || ! FUNC_9 (VAR_7, "")
      || ! FUNC_10 (VAR_7, 0)
      || ! FUNC_9 (VAR_7, "GNU objcopy"))
    return VAR_0;

  for (VAR_8 = VAR_7->ranges; VAR_8 != ((void*)0); VAR_8 = VAR_8->next)
    {
      bfd_vma VAR_9, VAR_10;
      asection *VAR_11;
      int VAR_12;

      VAR_9 = VAR_8->low;
      VAR_10 = VAR_8->high;


      for (VAR_11 = VAR_7->abfd->sections; VAR_11 != ((void*)0); VAR_11 = VAR_11->next)
 {
   if (FUNC_1 (VAR_7->abfd, VAR_11) <= VAR_9
       && VAR_10 <= (FUNC_1 (VAR_7->abfd, VAR_11)
     + FUNC_2 (VAR_7->abfd, VAR_11)))
     break;
 }

      if (VAR_11 == ((void*)0))
 {

   continue;
 }


      while (VAR_8->next != ((void*)0)
      && VAR_10 + 0x1000 >= VAR_8->next->low
      && (VAR_8->next->high
   <= (FUNC_1 (VAR_7->abfd, VAR_11)
       + FUNC_2 (VAR_7->abfd, VAR_11))))
 {
   VAR_8 = VAR_8->next;
   VAR_10 = VAR_8->high;
 }

      if ((VAR_11->flags & VAR_2) != 0)
 VAR_12 = 1;
      else if ((VAR_11->flags & VAR_3) != 0)
 VAR_12 = 3;
      else
 VAR_12 = 2;

      if (! FUNC_8 (VAR_7, (int) VAR_5)
   || ! FUNC_8 (VAR_7, 11)
   || ! FUNC_10 (VAR_7, 0)
   || ! FUNC_9 (VAR_7, "")
   || ! FUNC_10 (VAR_7, VAR_12)
   || ! FUNC_10 (VAR_7, VAR_11->index + VAR_1)
   || ! FUNC_10 (VAR_7, VAR_9)
   || ! FUNC_8 (VAR_7, (int) VAR_6)
   || ! FUNC_10 (VAR_7, VAR_10 - VAR_9))
 return VAR_0;


      if (! FUNC_3 (VAR_7, VAR_4, VAR_9, VAR_10))
 return VAR_0;
    }

  if (! FUNC_8 (VAR_7, (int) VAR_6))
    return VAR_0;

  return VAR_4;
}

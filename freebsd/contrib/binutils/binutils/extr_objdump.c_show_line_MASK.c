
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct print_file_list {char const* filename; unsigned int last_line; scalar_t__ first; struct print_file_list* next; } ;
typedef int bfd_vma ;
typedef int bfd ;
typedef int asection ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int ,char const**,char const**,unsigned int*) ;
 int FUNC_1 (struct print_file_list*,unsigned int,unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char const*) ;
 char const* VAR_2 ;
 unsigned int VAR_3 ;
 struct print_file_list* VAR_4 ;
 int FUNC_3 (char*,char const*,...) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 int FUNC_5 (char const*,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 int VAR_5 ;
 struct print_file_list* FUNC_7 (char const*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 char* FUNC_8 (scalar_t__) ;

__attribute__((used)) static void
FUNC_9 (bfd *VAR_8, asection *VAR_9, bfd_vma VAR_10)
{
  const char *VAR_11;
  const char *VAR_12;
  unsigned int VAR_13;

  if (! VAR_6 && ! VAR_7)
    return;

  if (! FUNC_0 (VAR_8, VAR_9, VAR_5, VAR_10, &VAR_11,
          &VAR_12, &VAR_13))
    return;

  if (VAR_11 != ((void*)0) && *VAR_11 == '\0')
    VAR_11 = ((void*)0);
  if (VAR_12 != ((void*)0) && *VAR_12 == '\0')
    VAR_12 = ((void*)0);

  if (VAR_6)
    {
      if (VAR_12 != ((void*)0)
   && (VAR_2 == ((void*)0)
       || FUNC_4 (VAR_12, VAR_2) != 0))
 FUNC_3 ("%s():\n", VAR_12);
      if (VAR_13 > 0 && VAR_13 != VAR_3)
 FUNC_3 ("%s:%u\n", VAR_11 == ((void*)0) ? "???" : VAR_11, VAR_13);
    }

  if (VAR_7
      && VAR_11 != ((void*)0)
      && VAR_13 > 0)
    {
      struct print_file_list **VAR_14, *VAR_15;
      unsigned VAR_16;

      for (VAR_14 = &VAR_4; *VAR_14 != ((void*)0); VAR_14 = &(*VAR_14)->next)
 if (FUNC_4 ((*VAR_14)->filename, VAR_11) == 0)
   break;
      VAR_15 = *VAR_14;

      if (VAR_15 == ((void*)0))
   VAR_15 = FUNC_7 (VAR_11);

      if (VAR_15 != ((void*)0) && VAR_13 != VAR_15->last_line)
 {
   if (VAR_1 && VAR_15->first)
     VAR_16 = 1;
   else
     {
       VAR_16 = VAR_13 - VAR_0;
       if (VAR_16 >= VAR_13)
  VAR_16 = 1;
       if (VAR_15->last_line >= VAR_16 && VAR_15->last_line <= VAR_13)
  VAR_16 = VAR_15->last_line + 1;
     }
   FUNC_1 (VAR_15, VAR_16, VAR_13);
   VAR_15->last_line = VAR_13;
   VAR_15->first = 0;
 }
    }

  if (VAR_12 != ((void*)0)
      && (VAR_2 == ((void*)0)
   || FUNC_4 (VAR_12, VAR_2) != 0))
    {
      if (VAR_2 != ((void*)0))
 FUNC_2 (VAR_2);
      VAR_2 = FUNC_8 (FUNC_6 (VAR_12) + 1);
      FUNC_5 (VAR_2, VAR_12);
    }

  if (VAR_13 > 0 && VAR_13 != VAR_3)
    VAR_3 = VAR_13;
}

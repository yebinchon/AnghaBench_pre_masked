
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stab_demangle_info {unsigned int typestring_count; TYPE_1__* typestrings; } ;
typedef int debug_type ;
typedef int bfd_boolean ;
struct TYPE_2__ {char* typestring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct stab_demangle_info*,char const**,int **,unsigned int*,unsigned int*) ;
 int FUNC_2 (char const**,unsigned int*) ;
 scalar_t__ FUNC_3 (unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (struct stab_demangle_info *VAR_3, const char **VAR_4,
      debug_type **VAR_5, bfd_boolean *VAR_6)
{
  const char *VAR_7;
  unsigned int VAR_8, VAR_9;

  VAR_7 = *VAR_4;

  VAR_8 = 10;
  if (VAR_5 != ((void*)0))
    {
      *VAR_5 = (debug_type *) FUNC_3 (VAR_8 * sizeof **VAR_5);
      *VAR_6 = VAR_1;
    }
  VAR_9 = 0;

  while (**VAR_4 != '_' && **VAR_4 != '\0' && **VAR_4 != 'e')
    {
      if (**VAR_4 == 'N' || **VAR_4 == 'T')
 {
   char VAR_10;
   unsigned int VAR_11, VAR_12;

   VAR_10 = **VAR_4;
   ++*VAR_4;

   if (VAR_10 == 'T')
     VAR_11 = 1;
   else
     {
       if (! FUNC_2 (VAR_4, &VAR_11))
  {
    FUNC_0 (VAR_7);
    return VAR_1;
  }
     }

   if (! FUNC_2 (VAR_4, &VAR_12))
     {
       FUNC_0 (VAR_7);
       return VAR_1;
     }

   if (VAR_12 >= VAR_3->typestring_count)
     {
       FUNC_0 (VAR_7);
       return VAR_1;
     }
   while (VAR_11-- > 0)
     {
       const char *VAR_13;

       VAR_13 = VAR_3->typestrings[VAR_12].typestring;
       if (! FUNC_1 (VAR_3, &VAR_13, VAR_5, &VAR_9, &VAR_8))
  return VAR_1;
     }
 }
      else
 {
   if (! FUNC_1 (VAR_3, VAR_4, VAR_5, &VAR_9, &VAR_8))
     return VAR_1;
 }
    }

  if (VAR_5 != ((void*)0))
    (*VAR_5)[VAR_9] = VAR_0;

  if (**VAR_4 == 'e')
    {
      if (VAR_5 != ((void*)0))
 *VAR_6 = VAR_2;
      ++*VAR_4;
    }

  return VAR_2;
}

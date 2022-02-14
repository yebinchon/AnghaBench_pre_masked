
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_demangle_info {int dummy; } ;
typedef int debug_type ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct stab_demangle_info*,char const*,int) ;
 int FUNC_1 (struct stab_demangle_info*,char const**,int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (struct stab_demangle_info *VAR_3, const char **VAR_4,
     debug_type **VAR_5, unsigned int *VAR_6,
     unsigned int *VAR_7)
{
  const char *VAR_8;
  debug_type VAR_9;

  VAR_8 = *VAR_4;
  if (! FUNC_1 (VAR_3, VAR_4,
       VAR_5 == ((void*)0) ? (debug_type *) ((void*)0) : &VAR_9)
      || ! FUNC_0 (VAR_3, VAR_8, *VAR_4 - VAR_8))
    return VAR_1;

  if (VAR_5 != ((void*)0))
    {
      if (VAR_9 == VAR_0)
 return VAR_1;

      if (*VAR_6 + 1 >= *VAR_7)
 {
   *VAR_7 += 10;
   *VAR_5 = ((debug_type *)
      FUNC_2 (*VAR_5, *VAR_7 * sizeof **VAR_5));
 }
      (*VAR_5)[*VAR_6] = VAR_9;
      ++*VAR_6;
    }

  return VAR_2;
}

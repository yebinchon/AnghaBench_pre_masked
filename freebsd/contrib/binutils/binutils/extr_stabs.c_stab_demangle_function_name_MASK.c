
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_demangle_info {int dummy; } ;
typedef int debug_type ;
typedef int bfd_boolean ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct stab_demangle_info*,char const**,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (struct stab_demangle_info *VAR_2,
        const char **VAR_3, const char *VAR_4)
{
  const char *VAR_5;






  VAR_5 = *VAR_3;
  *VAR_3 = VAR_4 + 2;

  if (*VAR_3 - VAR_5 >= 5
    && FUNC_0 (VAR_5, "type")
    && (VAR_5[4] == '$' || VAR_5[4] == '.'))
    {
      const char *VAR_6;


      VAR_6 = VAR_5 + 5;
      if (! FUNC_1 (VAR_2, &VAR_6, (debug_type *) ((void*)0)))
 return VAR_0;
    }
  else if (VAR_5[0] == '_'
    && VAR_5[1] == '_'
    && VAR_5[2] == 'o'
    && VAR_5[3] == 'p')
    {
      const char *VAR_7;


      VAR_7 = VAR_5 + 4;
      if (! FUNC_1 (VAR_2, &VAR_7, (debug_type *) ((void*)0)))
 return VAR_0;
    }

  return VAR_1;
}

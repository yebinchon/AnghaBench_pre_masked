
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_demangle_info {int dummy; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct stab_demangle_info*,char const**,char const*) ;
 char* FUNC_3 (char const*,char) ;
 unsigned int FUNC_4 (char const*,char*) ;
 char* FUNC_5 (char const*,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (struct stab_demangle_info *VAR_2, const char **VAR_3,
        unsigned int VAR_4)
{
  const char *VAR_5;
  unsigned int VAR_6;




  if (VAR_4)
    VAR_5 = *VAR_3 + VAR_4;
  else
    {

      VAR_5 = *VAR_3;
      do
 VAR_5 = FUNC_3 (VAR_5, '_');
      while (VAR_5 != ((void*)0) && *++VAR_5 != '_');

      if (VAR_5 == ((void*)0))
 {
   FUNC_1 (*VAR_3);
   return VAR_0;
 }

      --VAR_5;


      VAR_6 = FUNC_4 (VAR_5, "_");
      if (VAR_6 > 2)
 VAR_5 += VAR_6 - 2;
    }

  if (VAR_5 == *VAR_3
      && (FUNC_0 (VAR_5[2])
   || VAR_5[2] == 'Q'
   || VAR_5[2] == 't'))
    {

      *VAR_3 = VAR_5 + 2;
      return VAR_1;
    }
  else if (VAR_5 == *VAR_3
    && ! FUNC_0 (VAR_5[2])
    && VAR_5[2] != 't')
    {


      while (*VAR_5 == '_')
 ++VAR_5;
      VAR_5 = FUNC_5 (VAR_5, "__");
      if (VAR_5 == ((void*)0) || VAR_5[2] == '\0')
 {
   FUNC_1 (*VAR_3);
   return VAR_0;
 }

      return FUNC_2 (VAR_2, VAR_3, VAR_5);
    }
  else if (VAR_5[2] != '\0')
    {

      return FUNC_2 (VAR_2, VAR_3, VAR_5);
    }
  else
    {
      FUNC_1 (*VAR_3);
      return VAR_0;
    }

}

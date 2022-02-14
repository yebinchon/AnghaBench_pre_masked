
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_handle {int dummy; } ;
typedef int debug_type ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (void*,struct stab_handle*,char const*,char const**,int **) ;
 int FUNC_2 (char const**,int*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (void *VAR_3, struct stab_handle *VAR_4,
   const char **VAR_5, const int *VAR_6,
   debug_type *VAR_7, bfd_boolean *VAR_8)
{
  const char *VAR_9;
  const char *VAR_10;
  int VAR_11[2];

  *VAR_7 = VAR_0;
  *VAR_8 = VAR_1;

  VAR_9 = *VAR_5;


  if (**VAR_5 == ';')
    ++*VAR_5;

  if (**VAR_5 != '~')
    return VAR_2;

  ++*VAR_5;

  if (**VAR_5 == '=' || **VAR_5 == '+' || **VAR_5 == '-')
    {


      ++*VAR_5;
    }

  if (**VAR_5 != '%')
    return VAR_2;

  ++*VAR_5;

  VAR_10 = *VAR_5;



  if (! FUNC_2 (VAR_5, VAR_11))
    return VAR_1;

  if (VAR_11[0] == VAR_6[0]
      && VAR_11[1] == VAR_6[1])
    *VAR_8 = VAR_2;
  else
    {
      debug_type VAR_12;
      const char *VAR_13;

      *VAR_5 = VAR_10;

      VAR_12 = FUNC_1 (VAR_3, VAR_4, (const char *) ((void*)0), VAR_5,
          (debug_type **) ((void*)0));
      for (VAR_13 = *VAR_5; *VAR_13 != ';' && *VAR_13 != '\0'; VAR_13++)
 ;
      if (*VAR_13 != ';')
 {
   FUNC_0 (VAR_9);
   return VAR_1;
 }

      *VAR_7 = VAR_12;

      *VAR_5 = VAR_13 + 1;
    }

  return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_demangle_info {int varargs; int args; } ;
typedef int debug_type ;
typedef scalar_t__ bfd_boolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct stab_demangle_info*,char const**,int *,int *) ;
 int FUNC_2 (struct stab_demangle_info*,char const**,char const**) ;
 int FUNC_3 (struct stab_demangle_info*,char const**,int *) ;
 int FUNC_4 (struct stab_demangle_info*,char const*,int) ;
 int FUNC_5 (struct stab_demangle_info*,char const**,char**) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (struct stab_demangle_info *VAR_2, const char **VAR_3)
{
  const char *VAR_4;
  bfd_boolean VAR_5, VAR_6;
  const char *VAR_7;

  VAR_4 = *VAR_3;

  VAR_5 = VAR_0;
  VAR_6 = VAR_0;
  VAR_7 = ((void*)0);

  while (**VAR_3 != '\0')
    {
      switch (**VAR_3)
 {
 case 'Q':
   VAR_7 = *VAR_3;
   if (! FUNC_3 (VAR_2, VAR_3, (debug_type *) ((void*)0))
       || ! FUNC_4 (VAR_2, VAR_7, *VAR_3 - VAR_7))
     return VAR_0;
   VAR_5 = VAR_1;
   VAR_7 = ((void*)0);
   break;

 case 'S':

   if (VAR_7 == ((void*)0))
     VAR_7 = *VAR_3;
   ++*VAR_3;
   break;

 case 'C':

   if (VAR_7 == ((void*)0))
     VAR_7 = *VAR_3;
   ++*VAR_3;
   break;

 case '0': case '1': case '2': case '3': case '4':
 case '5': case '6': case '7': case '8': case '9':
   if (VAR_7 == ((void*)0))
     VAR_7 = *VAR_3;
   if (! FUNC_2 (VAR_2, VAR_3, (const char **) ((void*)0))
       || ! FUNC_4 (VAR_2, VAR_7, *VAR_3 - VAR_7))
     return VAR_0;
   VAR_5 = VAR_1;
   VAR_7 = ((void*)0);
   break;

 case 'F':


   VAR_7 = ((void*)0);
   VAR_6 = VAR_1;
   ++*VAR_3;
   if (! FUNC_1 (VAR_2, VAR_3, &VAR_2->args, &VAR_2->varargs))
     return VAR_0;
   break;

 case 't':

   if (VAR_7 == ((void*)0))
     VAR_7 = *VAR_3;
   if (! FUNC_5 (VAR_2, VAR_3, (char **) ((void*)0))
       || ! FUNC_4 (VAR_2, VAR_7, *VAR_3 - VAR_7))
     return VAR_0;
   VAR_7 = ((void*)0);
   VAR_5 = VAR_1;
   break;

 case '_':





   FUNC_0 (VAR_4);
   return VAR_0;

 default:


   VAR_6 = VAR_1;
   if (! FUNC_1 (VAR_2, VAR_3, &VAR_2->args, &VAR_2->varargs))
     return VAR_0;
   break;
 }

      if (VAR_5)
 {
   VAR_6 = VAR_1;
   if (! FUNC_1 (VAR_2, VAR_3, &VAR_2->args, &VAR_2->varargs))
     return VAR_0;
 }
    }

  if (! VAR_6)
    {




      if (! FUNC_1 (VAR_2, VAR_3, &VAR_2->args, &VAR_2->varargs))
 return VAR_0;
    }

  return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_handle {int dummy; } ;
typedef int debug_field ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (void*,struct stab_handle*,char const**,int *) ;
 int FUNC_2 (void*,struct stab_handle*,char const**,char const*,int *,int *) ;
 char* FUNC_3 (char const*,char) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (int *,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (void *VAR_3, struct stab_handle *VAR_4,
     const char **VAR_5, debug_field **VAR_6,
     bfd_boolean *VAR_7)
{
  const char *VAR_8;
  const char *VAR_9;
  debug_field *VAR_10;
  unsigned int VAR_11;
  unsigned int VAR_12;

  *VAR_6 = ((void*)0);
  *VAR_7 = VAR_1;

  VAR_8 = *VAR_5;

  VAR_11 = 0;
  VAR_12 = 10;
  VAR_10 = (debug_field *) FUNC_4 (VAR_12 * sizeof *VAR_10);
  while (**VAR_5 != ';')
    {


      VAR_9 = *VAR_5;


      if (VAR_11 + 1 >= VAR_12)
 {
   VAR_12 += 10;
   VAR_10 = ((debug_field *)
      FUNC_5 (VAR_10, VAR_12 * sizeof *VAR_10));
 }
      if ((*VAR_9 == '$' || *VAR_9 == '.') && VAR_9[1] != '_')
 {
   ++*VAR_5;
   if (! FUNC_1 (VAR_3, VAR_4, VAR_5, VAR_10 + VAR_11))
     return VAR_1;
   ++VAR_11;
   continue;
 }






      VAR_9 = FUNC_3 (VAR_9, ':');
      if (VAR_9 == ((void*)0))
 {
   FUNC_0 (VAR_8);
   return VAR_1;
 }

      if (VAR_9[1] == ':')
 break;

      if (! FUNC_2 (VAR_3, VAR_4, VAR_5, VAR_9, VAR_10 + VAR_11,
      VAR_7))
 return VAR_1;

      ++VAR_11;
    }

  VAR_10[VAR_11] = VAR_0;

  *VAR_6 = VAR_10;

  return VAR_2;
}

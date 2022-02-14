
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 char* FUNC_2 (scalar_t__) ;

__attribute__((used)) static const char *
FUNC_3 (const char *VAR_2)
{
  const char *VAR_3;
  bfd_boolean VAR_4 = VAR_0, VAR_5 = VAR_0;
  char *VAR_6, *VAR_7 = FUNC_2 (FUNC_1 (VAR_2) + 1);

  for (VAR_3 = VAR_2, VAR_6 = VAR_7; *VAR_3 != '\0'; ++VAR_3)
    {


      if (! VAR_5 && (*VAR_3 == '?' || *VAR_3 == '*' || *VAR_3 == '['))
 {
   FUNC_0 (VAR_7);
   return ((void*)0);
 }

      if (VAR_5)
 {

   *(VAR_6 - 1) = *VAR_3;
   VAR_4 = VAR_1;
 }
      else
 *VAR_6++ = *VAR_3;

      VAR_5 = *VAR_3 == '\\';
    }

  if (VAR_4)
    {
      *VAR_6 = '\0';
      return VAR_7;
    }
  else
    {
      FUNC_0 (VAR_7);
      return VAR_2;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct value*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,int) ;
 scalar_t__ FUNC_9 (struct value*) ;
 struct value* FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11 (char **VAR_2, int VAR_3)
{
  int VAR_4 = 0;
  char *VAR_5 = *VAR_2;

  if (VAR_5 == ((void*)0))

    return VAR_1;
  else if (*VAR_5 == '$')
    {


      char *VAR_6;
      char *VAR_7 = ++VAR_5;
      struct value *VAR_8;

      while (FUNC_4 (*VAR_5) || *VAR_5 == '_')
 VAR_5++;
      VAR_6 = (char *) FUNC_2 (VAR_5 - VAR_7 + 1);
      FUNC_8 (VAR_6, VAR_7, VAR_5 - VAR_7);
      VAR_6[VAR_5 - VAR_7] = '\0';
      VAR_8 = FUNC_10 (FUNC_6 (VAR_6));
      if (FUNC_0 (FUNC_1 (VAR_8)) == VAR_0)
 VAR_4 = (int) FUNC_9 (VAR_8);
      else
 {
   FUNC_7 ("Convenience variable must have integer value.\n");
   VAR_4 = 0;
 }
    }
  else
    {
      if (*VAR_5 == '-')
 ++VAR_5;
      while (*VAR_5 >= '0' && *VAR_5 <= '9')
 ++VAR_5;
      if (VAR_5 == *VAR_2)

 {

   while (*VAR_5 && !FUNC_5((int) *VAR_5))
     ++VAR_5;

   VAR_4 = 0;
 }
      else
 VAR_4 = FUNC_3 (*VAR_2);
    }
  if (!(FUNC_5 (*VAR_5) || *VAR_5 == '\0' || *VAR_5 == VAR_3))
    {

      while (!(FUNC_5 (*VAR_5) || *VAR_5 == '\0' || *VAR_5 == VAR_3))
 ++VAR_5;
      VAR_4 = 0;
    }
  while (FUNC_5 (*VAR_5))
    VAR_5++;
  *VAR_2 = VAR_5;
  return VAR_4;
}

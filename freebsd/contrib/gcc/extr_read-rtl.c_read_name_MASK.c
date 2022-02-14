
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_constant {char* name; char* value; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__,struct md_constant*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static void
FUNC_6 (char *VAR_3, FILE *VAR_4)
{
  char *VAR_5;
  int VAR_6;

  VAR_6 = FUNC_3 (VAR_4);

  VAR_5 = VAR_3;
  while (1)
    {
      if (VAR_6 == ' ' || VAR_6 == '\n' || VAR_6 == '\t' || VAR_6 == '\f' || VAR_6 == '\r' || VAR_6 == VAR_0)
 break;
      if (VAR_6 == ':' || VAR_6 == ')' || VAR_6 == ']' || VAR_6 == '"' || VAR_6 == '/'
   || VAR_6 == '(' || VAR_6 == '[')
 {
   FUNC_5 (VAR_6, VAR_4);
   break;
 }
      *VAR_5++ = VAR_6;
      VAR_6 = FUNC_1 (VAR_4);
    }
  if (VAR_5 == VAR_3)
    FUNC_0 (VAR_4, "missing name or number");
  if (VAR_6 == '\n')
    VAR_2++;

  *VAR_5 = 0;

  if (VAR_1)
    {

      struct md_constant *VAR_7;

      VAR_5 = VAR_3;
      do
 {
   struct md_constant VAR_8;

   VAR_8.name = VAR_5;
   VAR_7 = (struct md_constant *) FUNC_2 (VAR_1, &VAR_8);
   if (VAR_7)
     VAR_5 = VAR_7->value;
 } while (VAR_7);
      if (VAR_5 != VAR_3)
 FUNC_4 (VAR_3, VAR_5);
    }
}

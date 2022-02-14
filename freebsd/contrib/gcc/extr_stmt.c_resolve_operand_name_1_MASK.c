
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,char*,scalar_t__) ;
 int FUNC_6 (char*,char*,int) ;
 char* FUNC_7 (char*,char) ;
 scalar_t__ FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char const*,char*,size_t) ;

__attribute__((used)) static char *
FUNC_10 (char *VAR_0, tree VAR_1, tree VAR_2)
{
  char *VAR_3;
  int VAR_4;
  tree VAR_5;
  size_t VAR_6;


  VAR_3 = FUNC_7 (VAR_0, ']');
  if (!VAR_3)
    {
      FUNC_3 ("missing close brace for named operand");
      return FUNC_7 (VAR_0, '\0');
    }
  VAR_6 = VAR_3 - VAR_0 - 1;


  for (VAR_4 = 0, VAR_5 = VAR_1; VAR_5 ; VAR_5 = FUNC_0 (VAR_5), VAR_4++)
    {
      tree VAR_7 = FUNC_1 (FUNC_1 (VAR_5));
      if (VAR_7)
 {
   const char *VAR_8 = FUNC_2 (VAR_7);
   if (FUNC_9 (VAR_8, VAR_0 + 1, VAR_6) == 0 && VAR_8[VAR_6] == '\0')
     goto found;
 }
    }
  for (VAR_5 = VAR_2; VAR_5 ; VAR_5 = FUNC_0 (VAR_5), VAR_4++)
    {
      tree VAR_9 = FUNC_1 (FUNC_1 (VAR_5));
      if (VAR_9)
 {
   const char *VAR_10 = FUNC_2 (VAR_9);
   if (FUNC_9 (VAR_10, VAR_0 + 1, VAR_6) == 0 && VAR_10[VAR_6] == '\0')
     goto found;
 }
    }

  *VAR_3 = '\0';
  FUNC_3 ("undefined named operand %qs", VAR_0 + 1);
  VAR_4 = 0;
 found:




  FUNC_6 (VAR_0, "%d", VAR_4);
  VAR_0 = FUNC_7 (VAR_0, '\0');


  FUNC_4 (VAR_0 <= VAR_3);


  FUNC_5 (VAR_0, VAR_3 + 1, FUNC_8 (VAR_3 + 1) + 1);

  return VAR_0;
}

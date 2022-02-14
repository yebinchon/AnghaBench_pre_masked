
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 char* FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char*,char*,unsigned int) ;
 char* FUNC_5 (char*,char) ;
 unsigned int FUNC_6 (char*) ;

__attribute__((used)) static enum tree_code
FUNC_7 (char *VAR_2)
{
  unsigned int VAR_3, VAR_4;
  int VAR_5;
  char *VAR_6;

  VAR_6 = FUNC_5 (VAR_2, ' ');
  if (VAR_6 != ((void*)0))
    VAR_4 = FUNC_6 (VAR_2) - FUNC_6 (VAR_6);
  else
    VAR_4 = FUNC_6 (VAR_2) - 1;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
      if (VAR_4 != FUNC_1 (VAR_3))
 continue;

      VAR_5 = FUNC_4 (VAR_2, FUNC_2 (VAR_3), FUNC_1 (VAR_3));
      if (VAR_5 == 0)
 {
   FUNC_3 (VAR_1, "%s\n", FUNC_2 (VAR_3));
   return FUNC_0 (VAR_3);
 }
    }


  return VAR_0;
}

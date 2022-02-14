
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* tree ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char*) ;

int
FUNC_2 (tree VAR_0, tree VAR_1)
{
  int VAR_2 = FUNC_0 (VAR_1);

  if (VAR_2 < 0)
    {
      FUNC_1 ("invalid constructor; you probably meant %<%T (const %T&)%>",
  VAR_0, VAR_0);
      return 0;
    }

  return 1;
}

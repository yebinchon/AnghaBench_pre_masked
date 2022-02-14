
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (char*,char const*,int ) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;

tree
FUNC_5 (const char *VAR_1)
{
  char *VAR_2;

  if (VAR_1)
    {
      char *VAR_3 = FUNC_1 (VAR_1);

      FUNC_3 (VAR_3, FUNC_4 (VAR_3));
      VAR_1 = VAR_3;
    }

  FUNC_0 (VAR_2, VAR_1 ? VAR_1 : "T", VAR_0++);
  return FUNC_2 (VAR_2);
}

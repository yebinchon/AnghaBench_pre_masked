
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_4 (char*,char*,int *) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 char* FUNC_6 (int ,int ) ;

__attribute__((used)) static char *
FUNC_7 (tree VAR_4, tree VAR_5, bool *VAR_6)
{
  char *VAR_7;


  *VAR_6 = 0;

  if (FUNC_0 (VAR_4))
    {
      VAR_7
 = (char *) FUNC_1 (FUNC_5 (VAR_5));

      if (VAR_4 == VAR_2
   || VAR_4 == VAR_1
   || VAR_4 == VAR_3)
 {
   VAR_7 = FUNC_4 ("~", VAR_7, ((void*)0));

   *VAR_6 = 1;
 }
    }
  else if (FUNC_2 (VAR_4))
    {
      VAR_7 = FUNC_4 ("operator ",
       FUNC_6 (FUNC_3 (VAR_4),
         VAR_0),
       ((void*)0));

      *VAR_6 = 1;
    }
  else
    VAR_7 = (char *) FUNC_1 (VAR_4);

  return VAR_7;
}

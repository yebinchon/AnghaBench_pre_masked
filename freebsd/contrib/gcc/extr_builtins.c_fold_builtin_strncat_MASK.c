
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 char* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int * VAR_6 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_13 (tree VAR_7)
{
  if (!FUNC_12 (VAR_7,
    VAR_4, VAR_4, VAR_2, VAR_5))
    return 0;
  else
    {
      tree VAR_8 = FUNC_3 (VAR_7);
      tree VAR_9 = FUNC_3 (FUNC_0 (VAR_7));
      tree VAR_10 = FUNC_3 (FUNC_0 (FUNC_0 (VAR_7)));
      const char *VAR_11 = FUNC_6 (VAR_9);



      if (FUNC_8 (VAR_10) || (VAR_11 && *VAR_11 == '\0'))
 return FUNC_9 (FUNC_2 (VAR_8), VAR_8, VAR_9, VAR_10);



      if (FUNC_1 (VAR_10) == VAR_1 && VAR_11
   && FUNC_7 (VAR_10, FUNC_10 (VAR_11)) >= 0)
 {
   tree VAR_12
     = FUNC_11 (VAR_3, VAR_8, FUNC_5 (VAR_3, VAR_9));
   tree VAR_13 = VAR_6[VAR_0];



   if (!VAR_13)
     return 0;

   return FUNC_4 (VAR_13, VAR_12);
 }
      return 0;
    }
}

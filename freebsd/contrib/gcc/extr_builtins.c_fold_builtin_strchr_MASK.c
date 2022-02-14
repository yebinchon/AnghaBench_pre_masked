
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,int) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 char* FUNC_8 (char const*,char) ;
 scalar_t__ FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_11 (tree VAR_5, tree VAR_6)
{
  if (!FUNC_10 (VAR_5, VAR_3, VAR_1, VAR_4))
    return 0;
  else
    {
      tree VAR_7 = FUNC_3 (VAR_5), VAR_8 = FUNC_3 (FUNC_0 (VAR_5));
      const char *VAR_9;

      if (FUNC_1 (VAR_8) != VAR_0)
 return 0;

      VAR_9 = FUNC_5 (VAR_7);
      if (VAR_9 != ((void*)0))
 {
   char VAR_10;
   const char *VAR_11;
   tree VAR_12;

   if (FUNC_9 (VAR_8, &VAR_10))
     return 0;

   VAR_11 = FUNC_8 (VAR_9, VAR_10);

   if (VAR_11 == ((void*)0))
     return FUNC_4 (FUNC_2 (VAR_7), 0);


   VAR_12 = FUNC_6 (VAR_2, FUNC_2 (VAR_7),
        VAR_7, FUNC_4 (FUNC_2 (VAR_7), VAR_11 - VAR_9));
   return FUNC_7 (VAR_6, VAR_12);
 }
      return 0;
    }
}

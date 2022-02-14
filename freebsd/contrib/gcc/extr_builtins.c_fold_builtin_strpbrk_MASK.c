
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char const) ;
 int FUNC_5 (int ,int ) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int ,int ,int ) ;
 char* FUNC_10 (char const*,char const*) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_13 (tree VAR_7, tree VAR_8)
{
  if (!FUNC_12 (VAR_7, VAR_3, VAR_3, VAR_4))
    return 0;
  else
    {
      tree VAR_9 = FUNC_2 (VAR_7), VAR_10 = FUNC_2 (FUNC_0 (VAR_7));
      tree VAR_11;
      const char *VAR_12, *VAR_13;

      VAR_13 = FUNC_6 (VAR_10);
      if (VAR_13 == ((void*)0))
 return 0;

      VAR_12 = FUNC_6 (VAR_9);
      if (VAR_12 != ((void*)0))
 {
   const char *VAR_14 = FUNC_10 (VAR_12, VAR_13);
   tree VAR_15;

   if (VAR_14 == ((void*)0))
     return FUNC_4 (FUNC_1 (VAR_9), 0);


   VAR_15 = FUNC_7 (VAR_2, FUNC_1 (VAR_9),
        VAR_9, FUNC_4 (FUNC_1 (VAR_9), VAR_14 - VAR_12));
   return FUNC_8 (VAR_8, VAR_15);
 }

      if (VAR_13[0] == '\0')


 return FUNC_9 (FUNC_1 (VAR_9), VAR_6, VAR_9);

      if (VAR_13[1] != '\0')
 return 0;

      VAR_11 = VAR_5[VAR_0];
      if (!VAR_11)
 return 0;



      VAR_7 = FUNC_5 (VAR_1,
     FUNC_4 (VAR_1, VAR_13[0]));
      VAR_7 = FUNC_11 (VAR_1, VAR_9, VAR_7);
      return FUNC_3 (VAR_11, VAR_7);
    }
}

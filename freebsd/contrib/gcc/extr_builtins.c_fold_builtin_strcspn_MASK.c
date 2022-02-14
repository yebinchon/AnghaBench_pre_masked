
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 char* FUNC_4 (int ) ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (size_t const) ;
 size_t FUNC_7 (char const*,char const*) ;
 int FUNC_8 (int ,int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_9 (tree VAR_7)
{
  if (!FUNC_8 (VAR_7, VAR_2, VAR_2, VAR_3))
    return 0;
  else
    {
      tree VAR_8 = FUNC_1 (VAR_7), VAR_9 = FUNC_1 (FUNC_0 (VAR_7));
      const char *VAR_10 = FUNC_4 (VAR_8), *VAR_11 = FUNC_4 (VAR_9);


      if (VAR_10 && VAR_11)
 {
   const size_t VAR_12 = FUNC_7 (VAR_10, VAR_11);
   return FUNC_6 (VAR_12);
 }


      if (VAR_10 && *VAR_10 == '\0')
 {


   return FUNC_5 (VAR_5,
       VAR_6, VAR_9);
 }


      if (VAR_11 && *VAR_11 == '\0')
 {
   tree VAR_13 = FUNC_3 (VAR_1, VAR_8),
     VAR_14 = VAR_4[VAR_0];



   if (!VAR_14)
     return 0;

   return FUNC_2 (VAR_14, VAR_13);
 }
      return 0;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 char* FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (size_t const) ;
 size_t FUNC_5 (char const*,char const*) ;
 int FUNC_6 (int ,int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_7 (tree VAR_4)
{
  if (!FUNC_6 (VAR_4, VAR_0, VAR_0, VAR_1))
    return 0;
  else
    {
      tree VAR_5 = FUNC_1 (VAR_4), VAR_6 = FUNC_1 (FUNC_0 (VAR_4));
      const char *VAR_7 = FUNC_2 (VAR_5), *VAR_8 = FUNC_2 (VAR_6);


      if (VAR_7 && VAR_8)
 {
   const size_t VAR_9 = FUNC_5 (VAR_7, VAR_8);
   return FUNC_4 (VAR_9);
 }


      if ((VAR_7 && *VAR_7 == '\0') || (VAR_8 && *VAR_8 == '\0'))


 return FUNC_3 (VAR_2, VAR_3,
      VAR_5, VAR_6);
      return 0;
    }
}

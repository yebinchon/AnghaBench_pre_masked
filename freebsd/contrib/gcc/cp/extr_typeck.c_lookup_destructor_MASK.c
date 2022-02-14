
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* tree ;


 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*,int ) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int VAR_0 ;
 int FUNC_6 (char*,char*,char*) ;
 char* VAR_1 ;
 char* FUNC_7 (char*,int ,int,int) ;

__attribute__((used)) static tree
FUNC_8 (tree VAR_2, tree VAR_3, tree VAR_4)
{
  tree VAR_5 = FUNC_2 (VAR_2);
  tree VAR_6 = FUNC_1 (VAR_4, 0);
  tree VAR_7;

  if (VAR_3 && !FUNC_5 (VAR_3, VAR_6))
    {
      FUNC_6 ("qualified type %qT does not match destructor name ~%qT",
      VAR_3, VAR_6);
      return VAR_1;
    }
  if (!FUNC_0 (VAR_6, FUNC_3 (VAR_5)))
    {
      FUNC_6 ("the type being destroyed is %qT, but the destructor refers to %qT",
      FUNC_3 (VAR_5), VAR_6);
      return VAR_1;
    }
  VAR_7 = FUNC_7 (VAR_6, VAR_0,
               1, 0);
  VAR_7 = (FUNC_4
   (VAR_7, VAR_6, VAR_5));
  return VAR_7;
}

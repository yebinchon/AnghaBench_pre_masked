
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int c_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static tree
FUNC_6 (c_parser *VAR_5)
{
  tree VAR_6;
  FUNC_5 (FUNC_2 (VAR_5, VAR_3));


  VAR_4 = 0;
  FUNC_1 (VAR_5);
  if (!FUNC_3 (VAR_5, VAR_1, "expected %<(%>"))
    {
      VAR_4 = 1;
      return VAR_2;
    }
  VAR_6 = FUNC_0 (VAR_5);
  VAR_4 = 1;
  if (!FUNC_3 (VAR_5, VAR_0, "expected %<)%>"))
    {
      FUNC_4 (VAR_5, VAR_0, ((void*)0));
      return VAR_2;
    }
  return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int cp_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static tree
FUNC_5 (cp_parser *VAR_4, tree VAR_5,

         bool VAR_6, bool VAR_7)
{
  tree VAR_8;


  if (!FUNC_1 (VAR_4, VAR_2, "`{'"))
    return VAR_3;

  VAR_8 = FUNC_0 (VAR_6 ? VAR_0 : 0);

  FUNC_2 (VAR_4, VAR_5);

  if (VAR_7)
    FUNC_4 (((void*)0));


  FUNC_3 (VAR_8);

  FUNC_1 (VAR_4, VAR_1, "`}'");

  return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct loop {scalar_t__ depth; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct loop*,int ) ;
 int FUNC_4 (struct loop*,int ) ;
 struct loop* FUNC_5 (int ) ;
 struct loop* FUNC_6 (struct loop*,scalar_t__) ;

__attribute__((used)) static tree
FUNC_7 (struct loop *VAR_0, tree VAR_1)
{
  tree VAR_2;
  struct loop *VAR_3 = FUNC_5 (VAR_1);
  tree VAR_4;

  if (VAR_3 != VAR_0)
    {
      struct loop *VAR_5;
      tree VAR_6 = FUNC_3
 (VAR_3, FUNC_0 (VAR_1));


      VAR_5 = FUNC_6 (VAR_3, VAR_0->depth + 1);


      VAR_2 = FUNC_4 (VAR_5, VAR_6);
      return VAR_2;
    }


  VAR_4 = FUNC_2 (VAR_1);
  VAR_2 = FUNC_1 (VAR_1, VAR_4);

  return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct loop {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct loop*,int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static tree
FUNC_5 (struct loop *VAR_2, tree VAR_3)
{
  int VAR_4;
  tree VAR_5 = VAR_1;

  for (VAR_4 = 0; VAR_4 < FUNC_1 (VAR_3); VAR_4++)
    {
      tree VAR_6;

      if (FUNC_3 (VAR_3, VAR_4))
 {
   VAR_5 = VAR_0;
   break;
 }

      VAR_6 = FUNC_2
 (VAR_2, FUNC_0 (VAR_3, VAR_4));

      VAR_5 = FUNC_4 (VAR_5, VAR_6);
    }

  return VAR_5;
}

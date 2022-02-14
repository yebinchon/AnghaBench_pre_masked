
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7 (tree VAR_1)
{
  int VAR_2;
  int VAR_3 = FUNC_3 (VAR_1);

  FUNC_0 ("template-args", VAR_1);

  FUNC_5 ('I');

  FUNC_4 (VAR_3 > 0);

  if (FUNC_1 (FUNC_2 (VAR_1, 0)) == VAR_0)
    {


      VAR_1 = FUNC_2 (VAR_1, VAR_3 - 1);
      VAR_3 = FUNC_3 (VAR_1);
    }
  for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2)
    FUNC_6 (FUNC_2 (VAR_1, VAR_2));

  FUNC_5 ('E');
}

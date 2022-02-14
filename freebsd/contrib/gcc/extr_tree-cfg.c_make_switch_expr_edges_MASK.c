
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int basic_block ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,size_t) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7 (basic_block VAR_0)
{
  tree VAR_1 = FUNC_5 (VAR_0);
  size_t VAR_2, VAR_3;
  tree VAR_4;

  VAR_4 = FUNC_1 (VAR_1);
  VAR_3 = FUNC_3 (VAR_4);

  for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2)
    {
      tree VAR_5 = FUNC_0 (FUNC_2 (VAR_4, VAR_2));
      basic_block VAR_6 = FUNC_4 (VAR_5);
      FUNC_6 (VAR_0, VAR_6, 0);
    }
}

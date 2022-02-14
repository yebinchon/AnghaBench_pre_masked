
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6 (tree VAR_3, tree VAR_4)
{
  int VAR_5;
  tree VAR_6, VAR_7;


  if (FUNC_0 (VAR_3) == VAR_1
      && FUNC_0 (VAR_4) == VAR_1)
    return FUNC_5 (FUNC_1 (VAR_3),
         FUNC_1 (VAR_4));
  if (FUNC_0 (VAR_3) != FUNC_0 (VAR_4))
    return 0;




  VAR_6 = FUNC_1 (VAR_3);
  VAR_7 = FUNC_1 (VAR_4);
  if (FUNC_0 (VAR_6) != VAR_0)
    VAR_6 = FUNC_2 (VAR_6);
  if (FUNC_0 (VAR_7) != VAR_0)
    VAR_7 = FUNC_2 (VAR_7);
  VAR_5 = FUNC_3 (VAR_6, VAR_7);

  if (VAR_5 == 2 && VAR_2)
    FUNC_4 ("types are not quite compatible");
  return VAR_5;
}

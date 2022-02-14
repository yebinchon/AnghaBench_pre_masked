
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int *) ;

__attribute__((used)) static void
FUNC_6 (tree VAR_1)
{
  int VAR_2, VAR_3 = FUNC_1 (VAR_1);


  if (!FUNC_4 (FUNC_2 (VAR_1)))
    return;

  for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2)
    {
      tree VAR_4 = FUNC_0 (VAR_1, VAR_2);
      if (FUNC_3 (VAR_4) == VAR_0)
 FUNC_5 (VAR_4, "%H%qD may be used uninitialized in this function",
       ((void*)0));
    }
}

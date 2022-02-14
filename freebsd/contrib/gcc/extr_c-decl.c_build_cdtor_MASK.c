
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_5 (int VAR_1, tree VAR_2)
{
  tree VAR_3 = 0;

  if (!VAR_2)
    return;

  for (; VAR_2; VAR_2 = FUNC_0 (VAR_2))
    FUNC_2 (FUNC_3 (FUNC_1 (VAR_2), 0),
         &VAR_3);

  FUNC_4 (VAR_1, VAR_3, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ) ;

bool
FUNC_4 (void)
{
  tree VAR_2 = FUNC_2();

  if (VAR_2)
    return FUNC_3 (VAR_1,
     FUNC_0 (FUNC_1 (VAR_2))) == 0;
  else
    return FUNC_3 (VAR_1, VAR_0) == 0;
}

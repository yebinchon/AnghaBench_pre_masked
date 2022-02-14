
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct data_reference {int dummy; } ;


 int FUNC_0 (struct data_reference*) ;
 int FUNC_1 (struct data_reference*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static bool
FUNC_7 (struct data_reference *VAR_2)
{
  tree VAR_3 = FUNC_1 (VAR_2);
  tree VAR_4 = FUNC_2 (FUNC_0 (VAR_2));

  if (!VAR_3 || FUNC_5 (VAR_3, FUNC_3 (VAR_4)))
    {
      if (FUNC_6 (VAR_0))
 FUNC_4 (VAR_1, "not consecutive access");
      return 0;
    }
  return 1;
}

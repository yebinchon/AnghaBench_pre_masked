
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static bool
FUNC_4 (rtx VAR_3)
{
  if (FUNC_0 (VAR_3) == VAR_1)
    {
      if (FUNC_0 (FUNC_1 (VAR_3, 0)) == VAR_0
          || FUNC_0 (FUNC_1 (VAR_3, 0)) == VAR_2)
        if (FUNC_0 (FUNC_1 (VAR_3, 1)) == VAR_2)
          {
            const char *VAR_4 = FUNC_2 (FUNC_1 (VAR_3, 1), 0);
            if (! FUNC_3 (VAR_4, "<pic base>"))
              return 1;
          }
    }

  return 0;
}

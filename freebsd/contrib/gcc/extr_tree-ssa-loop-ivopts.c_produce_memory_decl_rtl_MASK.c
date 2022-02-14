
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int rtx ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char const*) ;

__attribute__((used)) static rtx
FUNC_9 (tree VAR_1, int *VAR_2)
{
  rtx VAR_3;

  FUNC_5 (VAR_1);
  if (FUNC_4 (VAR_1) || FUNC_1 (VAR_1))
    {
      const char *VAR_4 = FUNC_3 (FUNC_0 (VAR_1));
      VAR_3 = FUNC_8 (VAR_0, VAR_4);
    }
  else
    VAR_3 = FUNC_6 (VAR_0, (*VAR_2)++);

  return FUNC_7 (FUNC_2 (VAR_1), VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static int
FUNC_7 (rtx VAR_2)
{
  const char *VAR_3;
  int VAR_4;

  if (FUNC_3 (VAR_2))
    return 1;

  if (FUNC_5 (VAR_2))
    return (FUNC_4 (VAR_2) >= VAR_0
     && VAR_1[FUNC_4 (VAR_2)]);

  VAR_3 = FUNC_1 (FUNC_0 (VAR_2));
  for (VAR_4 = FUNC_2 (FUNC_0 (VAR_2)) - 1; VAR_4 >= 0; VAR_4--)
    if (VAR_3[VAR_4] == 'e'
 && (FUNC_3 (FUNC_6 (VAR_2, VAR_4))
     || FUNC_7 (FUNC_6 (VAR_2, VAR_4))))
      return 1;

  return 0;
}

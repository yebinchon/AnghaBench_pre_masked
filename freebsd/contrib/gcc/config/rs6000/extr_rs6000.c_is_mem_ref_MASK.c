
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static bool
FUNC_6 (rtx VAR_1)
{
  const char * VAR_2;
  int VAR_3, VAR_4;
  bool VAR_5 = 0;

  if (FUNC_0 (VAR_1) == VAR_0)
    return 1;


  VAR_2 = FUNC_1 (FUNC_0 (VAR_1));

  for (VAR_3 = FUNC_2 (FUNC_0 (VAR_1)) - 1; VAR_3 >= 0 && !VAR_5; VAR_3--)
    {
      if (VAR_2[VAR_3] == 'e')
 VAR_5 |= FUNC_6 (FUNC_3 (VAR_1, VAR_3));
      else if (VAR_2[VAR_3] == 'E')
 for (VAR_4 = FUNC_5 (VAR_1, VAR_3) - 1; VAR_4 >= 0; VAR_4--)
   VAR_5 |= FUNC_6 (FUNC_4 (VAR_1, VAR_3, VAR_4));
    }

  return VAR_5;
}

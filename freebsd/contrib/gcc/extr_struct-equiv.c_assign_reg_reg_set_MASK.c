
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int regset ;


 int FUNC_0 (int ,unsigned int) ;
 unsigned int VAR_0 ;
 size_t FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (int) ;
 int** VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_6 (regset VAR_3, rtx VAR_4, int VAR_5)
{
  unsigned VAR_6 = FUNC_2 (VAR_4);
  int VAR_7, VAR_8, VAR_9;

  if (VAR_6 >= VAR_0)
    {
      FUNC_5 (!VAR_2);
      VAR_7 = 1;
    }
  else
    VAR_7 = VAR_1[VAR_6][FUNC_1 (VAR_4)];
  for (VAR_9 = 0, VAR_8 = VAR_7; --VAR_8 >= 0; VAR_6++)
    {
      if ((VAR_5 != 0) == FUNC_3 (VAR_3, VAR_6))
 continue;
      if (VAR_5)
 VAR_9++, FUNC_4 (VAR_3, VAR_6);
      else
 VAR_9--, FUNC_0 (VAR_3, VAR_6);
    }
  return VAR_9;
}

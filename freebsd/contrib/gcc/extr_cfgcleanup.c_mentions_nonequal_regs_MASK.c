
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int regset ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int** VAR_1 ;

__attribute__((used)) static int
FUNC_4 (rtx *VAR_2, void *VAR_3)
{
  regset VAR_4 = (regset) VAR_3;
  if (FUNC_3 (*VAR_2))
    {
      int VAR_5;

      VAR_5 = FUNC_1 (*VAR_2);
      if (FUNC_2 (VAR_4, VAR_5))
 return 1;
      if (VAR_5 < VAR_0)
 {
   int VAR_6 = VAR_1[VAR_5][FUNC_0 (*VAR_2)];
   while (--VAR_6 > 0)
     if (FUNC_2 (VAR_4, VAR_5 + VAR_6))
       return 1;
 }
    }
  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int *,int) ;
 int VAR_1 ;
 unsigned int** VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_3 (unsigned int VAR_7, int VAR_8)
{
  int VAR_9;

  if (VAR_8)
    {
      FUNC_1 (VAR_1, VAR_7);
      VAR_5[VAR_7] = 1;
    }




  for (VAR_9 = VAR_0; VAR_9 < VAR_3; VAR_9++)
    if (VAR_4[VAR_9] >= 0
 && (unsigned int) VAR_4[VAR_9] <= VAR_7
 && ((unsigned int) VAR_4[VAR_9]
     + VAR_2[(unsigned int) VAR_4[VAR_9]]
         [FUNC_0 (VAR_9)]
     > VAR_7))
      FUNC_2 (&VAR_6, VAR_9);
}

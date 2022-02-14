
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HARD_REG_SET ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int ) ;
 scalar_t__* VAR_4 ;
 int FUNC_8 () ;
 unsigned int** VAR_5 ;
 int VAR_6 ;
 unsigned int* VAR_7 ;
 int * VAR_8 ;
 scalar_t__** VAR_9 ;
 scalar_t__** VAR_10 ;
 int FUNC_9 (scalar_t__,int ) ;

void
FUNC_10 (void)
{
  int VAR_11, VAR_12, VAR_13;
  unsigned int VAR_14;
  HARD_REG_SET VAR_15;






  FUNC_0 (VAR_15);
  for (VAR_11 = VAR_0; VAR_11 < VAR_6; VAR_11++)
    if (VAR_7[VAR_11] >= 0 && FUNC_3 (VAR_11) > 0)
      {
 unsigned int VAR_16 = VAR_7[VAR_11];
 unsigned int VAR_17
   = VAR_16 + VAR_5[VAR_16][FUNC_1 (VAR_8[VAR_11])];

 for (VAR_14 = VAR_16; VAR_14 < VAR_17; VAR_14++)
   if (VAR_4[VAR_14])
     FUNC_4 (VAR_15, VAR_14);
      }





  for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
    for (VAR_12 = VAR_1; VAR_12 > 0; VAR_12--)
      {
 int VAR_18 = 1;



 if (VAR_10[VAR_11][VAR_12] == VAR_3 || VAR_9[VAR_11][1] != 0)
   continue;


 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
   if (VAR_9[VAR_11 + VAR_13][1])
     {
       VAR_18 = 0;
       break;
     }
 if (! VAR_18)
   continue;

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
   if (! FUNC_5 (VAR_15, VAR_11 + VAR_13))
     {
       VAR_18 = 0;
       break;
     }
 if (! VAR_18)
   continue;


 VAR_9[VAR_11][VAR_12]
   = FUNC_7 (VAR_10[VAR_11][VAR_12],
    FUNC_2 (VAR_10[VAR_11][VAR_12]), 0);


 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)


   VAR_9[VAR_11 + VAR_13][1]
     = FUNC_6 (VAR_9[VAR_11][VAR_12],
     VAR_10[VAR_11 + VAR_13][1],
     VAR_13 * VAR_2);
      }



  for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
    for (VAR_12 = VAR_1; VAR_12 > 0; VAR_12--)
      if (VAR_9[VAR_11][VAR_12] != 0)
 FUNC_9 (VAR_9[VAR_11][VAR_12], FUNC_8 ());
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int** VAR_7 ;
 int* VAR_8 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 size_t* VAR_9 ;
 int * VAR_10 ;

void
FUNC_5 (void)
{
  int VAR_11, VAR_12;




  for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
    {
      FUNC_0 (VAR_10[VAR_11]);


      for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
 if (VAR_7[VAR_11][VAR_12 / 32]
     & ((unsigned) 1 << (VAR_12 % 32)))
   FUNC_1 (VAR_10[VAR_11], VAR_12);
    }



  FUNC_2 (sizeof VAR_3 == sizeof VAR_6);
  FUNC_2 (sizeof VAR_2 == sizeof VAR_5);

  FUNC_3 (VAR_3, VAR_6, sizeof VAR_3);
  FUNC_3 (VAR_2, VAR_5, sizeof VAR_2);
  FUNC_4 (VAR_4, 0, sizeof VAR_4);





}

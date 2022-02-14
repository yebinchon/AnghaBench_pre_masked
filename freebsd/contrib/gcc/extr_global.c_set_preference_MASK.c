
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (size_t) ;
 unsigned int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__,unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int** VAR_5 ;
 scalar_t__* VAR_6 ;
 unsigned int* VAR_7 ;
 scalar_t__ FUNC_10 (unsigned int,size_t,int,size_t) ;

__attribute__((used)) static void
FUNC_11 (rtx VAR_8, rtx VAR_9)
{
  unsigned int VAR_10, VAR_11;


  int VAR_12 = 0;
  unsigned int VAR_13;
  int VAR_14 = 1;

  if (FUNC_2 (FUNC_0 (VAR_9))[0] == 'e')
    VAR_9 = FUNC_9 (VAR_9, 0), VAR_14 = 0;




  if (FUNC_5 (VAR_9))
    VAR_10 = FUNC_4 (VAR_9);
  else if (FUNC_0 (VAR_9) == VAR_1 && FUNC_5 (FUNC_8 (VAR_9)))
    {
      VAR_10 = FUNC_4 (FUNC_8 (VAR_9));

      if (FUNC_4 (FUNC_8 (VAR_9)) < VAR_0)
 VAR_12 += FUNC_10 (FUNC_4 (FUNC_8 (VAR_9)),
           FUNC_1 (FUNC_8 (VAR_9)),
           FUNC_7 (VAR_9),
           FUNC_1 (VAR_9));
      else
 VAR_12 += (FUNC_7 (VAR_9)
     / FUNC_3 (FUNC_1 (VAR_9)));
    }
  else
    return;

  if (FUNC_5 (VAR_8))
    VAR_11 = FUNC_4 (VAR_8);
  else if (FUNC_0 (VAR_8) == VAR_1 && FUNC_5 (FUNC_8 (VAR_8)))
    {
      VAR_11 = FUNC_4 (FUNC_8 (VAR_8));

      if (FUNC_4 (FUNC_8 (VAR_8)) < VAR_0)
 VAR_12 -= FUNC_10 (FUNC_4 (FUNC_8 (VAR_8)),
           FUNC_1 (FUNC_8 (VAR_8)),
           FUNC_7 (VAR_8),
           FUNC_1 (VAR_8));
      else
 VAR_12 -= (FUNC_7 (VAR_8)
     / FUNC_3 (FUNC_1 (VAR_8)));
    }
  else
    return;



  if (VAR_7[VAR_10] >= 0)
    VAR_10 = VAR_7[VAR_10];

  if (VAR_7[VAR_11] >= 0)
    VAR_11 = VAR_7[VAR_11];




  if (VAR_11 < VAR_0 && VAR_10 >= VAR_0
      && VAR_6[VAR_10] >= 0)
    {
      VAR_11 -= VAR_12;
      if (VAR_11 < VAR_0)
 {
   if (VAR_14)
     FUNC_6 (VAR_2,
   VAR_6[VAR_10], VAR_11);

   FUNC_6 (VAR_4,
        VAR_6[VAR_10], VAR_11);
   for (VAR_13 = VAR_11;
        VAR_13 < VAR_11 + VAR_5[VAR_11][FUNC_1 (VAR_8)];
        VAR_13++)
     FUNC_6 (VAR_3, VAR_6[VAR_10], VAR_13);
 }
    }

  if (VAR_10 < VAR_0 && VAR_11 >= VAR_0
      && VAR_6[VAR_11] >= 0)
    {
      VAR_10 += VAR_12;
      if (VAR_10 < VAR_0)
 {
   if (VAR_14)
     FUNC_6 (VAR_2,
   VAR_6[VAR_11], VAR_10);

   FUNC_6 (VAR_4,
        VAR_6[VAR_11], VAR_10);
   for (VAR_13 = VAR_10;
        VAR_13 < VAR_10 + VAR_5[VAR_10][FUNC_1 (VAR_9)];
        VAR_13++)
     FUNC_6 (VAR_3, VAR_6[VAR_11], VAR_13);
 }
    }
}

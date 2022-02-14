
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__* VAR_9 ;

HOST_WIDE_INT
FUNC_3 (HOST_WIDE_INT VAR_10, int VAR_11)
{
  int VAR_12 = (VAR_7
       + FUNC_1 (VAR_6));
  int VAR_13 = 0;
  int VAR_14;

  if (VAR_1)
    {
      for (VAR_14 = 0; VAR_14 < 8; VAR_14++)
 if (VAR_9[VAR_14] && ! VAR_5[VAR_14])
   VAR_13 += 2;
    }
  else
    {
      for (VAR_14 = 0; VAR_14 < 8; VAR_14 += 2)
 if ((VAR_9[VAR_14] && ! VAR_5[VAR_14])
     || (VAR_9[VAR_14+1] && ! VAR_5[VAR_14+1]))
   VAR_13 += 2;
    }

  for (VAR_14 = 32; VAR_14 < (VAR_2 ? 96 : 64); VAR_14 += 2)
    if ((VAR_9[VAR_14] && ! VAR_5[VAR_14])
 || (VAR_9[VAR_14+1] && ! VAR_5[VAR_14+1]))
      VAR_13 += 2;


  VAR_8 = VAR_13;

  if (VAR_11
      && VAR_13 == 0
      && VAR_10 == 0
      && VAR_7 == 0)
    VAR_3 = VAR_4 = 0;
  else
    {

      VAR_4 = (VAR_10 - VAR_0 + 7) & -8;
      VAR_4 += VAR_13 * 4;
      VAR_3 = VAR_4 + ((VAR_12 + 7) & -8);
    }




  if (! VAR_11 || VAR_10 > 0)
    VAR_3 += FUNC_0 (VAR_6);

  return FUNC_2 (VAR_3);
}

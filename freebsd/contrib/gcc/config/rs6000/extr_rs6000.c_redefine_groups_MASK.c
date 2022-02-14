
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int FILE ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__* FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int,int *,scalar_t__*,scalar_t__,int*,int,int*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_10 (FILE *VAR_5, int VAR_6, rtx VAR_7, rtx VAR_8)
{
  rtx VAR_9, VAR_10;
  int VAR_11;
  int VAR_12;
  int VAR_13, VAR_14;
  bool VAR_15;
  int VAR_16 = 0;
  rtx *VAR_17;


  VAR_11 = FUNC_8 ();
  VAR_17 = FUNC_2 (VAR_11 * sizeof (rtx));
  for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
    {
      VAR_17[VAR_14] = 0;
    }
  VAR_12 = VAR_11;
  VAR_13 = 0;
  VAR_9 = FUNC_4 (VAR_7, VAR_8);
  VAR_15 = 0;

  while (VAR_9 != VAR_0)
    {
      VAR_13 = (VAR_11 - VAR_12);
      VAR_17[VAR_13] = VAR_9;
      VAR_12 =
 FUNC_9 (VAR_5, VAR_6, VAR_9, VAR_12);
      if (FUNC_5 (VAR_9, VAR_3))
 VAR_12 = 0;

      VAR_10 = FUNC_4 (VAR_9, VAR_8);
      if (VAR_10 == VAR_0)
 return VAR_16 + 1;


      VAR_15
 = (VAR_12 == 0
    || (VAR_12 == 1 && !FUNC_6 (VAR_10))
    || (VAR_12 <= 2 && FUNC_7 (VAR_10))
    || (VAR_12 < VAR_11 &&
        FUNC_5 (VAR_10, VAR_4)));

      VAR_12 = FUNC_3 (VAR_6, VAR_5, VAR_17,
     VAR_10, &VAR_15, VAR_12,
     &VAR_16);

      if (VAR_15)
 {
   VAR_16++;
   VAR_12 = 0;
   for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
     {
       VAR_17[VAR_14] = 0;
     }
 }

      if (FUNC_0 (VAR_10) == VAR_1 && VAR_12)
 FUNC_1 (VAR_10, VAR_2);
      else if (!VAR_12 && FUNC_0 (VAR_10) != VAR_1)
 FUNC_1 (VAR_10, VAR_1);

      VAR_9 = VAR_10;
      if (VAR_12 == 0)
 VAR_12 = VAR_11;
    }

  return VAR_16;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int FILE ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_6 () ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int *,int,scalar_t__,int) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_8 (FILE *VAR_6, int VAR_7, rtx VAR_8, rtx VAR_9)
{
  rtx VAR_10, VAR_11;
  rtx VAR_12;
  int VAR_13;
  int VAR_14;
  int VAR_15;
  int VAR_16 = 0;


  VAR_13 = FUNC_6 ();
  VAR_14 = VAR_13;

  VAR_10 = FUNC_3 (VAR_8, VAR_9);
  VAR_11 = FUNC_3 (VAR_10, VAR_9);

  while (VAR_10 != VAR_0)
    {
      VAR_14 =
       FUNC_7 (VAR_6, VAR_7, VAR_10, VAR_14);

      VAR_15 = (VAR_11 == VAR_0 || FUNC_0 (VAR_11) == VAR_1);

      if (VAR_11 == VAR_0)
 break;

      if (VAR_15)
 {




   if (VAR_14
       && (VAR_4 == VAR_5)
       && !FUNC_4 (VAR_10, VAR_2)
       && !FUNC_4 (VAR_11, VAR_3))
     {
       if (!FUNC_5 (VAR_11))
  VAR_14--;

       while (VAR_14)
  {
    VAR_12 = FUNC_2 ();
    FUNC_1 (VAR_12, VAR_11);
    VAR_14--;
  }
     }

   VAR_14 = VAR_13;
   VAR_16++;
 }

      VAR_10 = VAR_11;
      VAR_11 = FUNC_3 (VAR_10, VAR_9);
    }

  return VAR_16;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,scalar_t__) ;
 scalar_t__ FUNC_11 (int ,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void
FUNC_14 (rtx VAR_4, rtx VAR_5, rtx VAR_6, rtx VAR_7,
   rtx VAR_8, int VAR_9, int VAR_10)
{
  rtx VAR_11;
  bool VAR_12 = 0;



  if (FUNC_3 (VAR_5) && FUNC_1 (FUNC_2 (VAR_5)))
    {
      rtx VAR_13;
      bool VAR_14;
      VAR_14 = ((VAR_9 || VAR_10
        || FUNC_4 (VAR_3,
         FUNC_2 (VAR_5)))
       && !FUNC_0 (FUNC_2 (VAR_5)));


      VAR_13 = FUNC_11 (VAR_0, VAR_5);
      VAR_13 = FUNC_9 (VAR_0, VAR_13);
      FUNC_6 (VAR_7, VAR_13);
      FUNC_6 (VAR_8, VAR_7);



      if (!VAR_14)
 VAR_13 = FUNC_10 (VAR_0, VAR_5);
      else
 VAR_13 = VAR_5;
      VAR_13 = FUNC_9 (VAR_0, VAR_13);
      FUNC_6 (VAR_2, VAR_13);

      VAR_12 = 1;
      VAR_5 = VAR_8;
    }

  if (VAR_10)
    VAR_11 = FUNC_12 (VAR_5);
  else if (VAR_4)
    VAR_11 = FUNC_8 (VAR_4, VAR_5, VAR_6);
  else
    VAR_11 = FUNC_7 (VAR_5, VAR_6);
  FUNC_5 (VAR_11);

  if ((!VAR_1 || VAR_12) && !VAR_9 && !VAR_10)
    FUNC_13 ();
}

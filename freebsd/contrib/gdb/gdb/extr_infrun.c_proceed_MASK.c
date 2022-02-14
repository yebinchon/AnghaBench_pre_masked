
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int,size_t) ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 int FUNC_11 () ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_12 () ;
 int FUNC_13 (scalar_t__) ;

void
FUNC_14 (CORE_ADDR VAR_14, enum target_signal VAR_15, int VAR_16)
{
  int VAR_17 = 0;

  if (VAR_16 > 0)
    VAR_8 = FUNC_4 (FUNC_9 ());
  if (VAR_16 < 0)
    VAR_9 = 1;

  if (VAR_14 == (CORE_ADDR) -1)
    {





      if (FUNC_9 () == VAR_10 && FUNC_3 (FUNC_9 ()))
 VAR_17 = 1;
      if ((0)
   && FUNC_3 (FUNC_9 () + 4)
   && (0))
 VAR_17 = 1;
    }
  else
    {
      FUNC_13 (VAR_14);
    }
  if (FUNC_8 () && FUNC_3 (FUNC_9 ()))
    VAR_17 = 1;
  if (VAR_17)


    VAR_12 = 1;
  else
    {
      FUNC_6 ();


      VAR_3 = 1;
    }

  if (VAR_15 != VAR_2)
    VAR_11 = VAR_15;


  else if (!VAR_7[VAR_11])
    VAR_11 = VAR_1;

  FUNC_1 ();



  FUNC_5 (VAR_5);
  VAR_6 = FUNC_9 ();


  FUNC_10 (VAR_17 || VAR_16 || FUNC_2 (), VAR_11);





  if (!VAR_4 || !FUNC_11 ())
    {
      FUNC_12 ();
      FUNC_7 ();
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_4 ;
 int * FUNC_8 (int ,int*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (scalar_t__,int,int *) ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_11 (int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int * FUNC_12 () ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

void
FUNC_15 (void)
{
  tree VAR_14;


  if (VAR_10)
    return;



  if (VAR_8 || VAR_5 || VAR_11 || FUNC_7 (VAR_9))
    return;


  VAR_6 = FUNC_12 ();
  VAR_7 = 0;
  FUNC_11 (!VAR_4);

  if (VAR_6)
    {
      tree VAR_15 = FUNC_0 (VAR_6);
      int VAR_16;
      FILE * VAR_17 = FUNC_8 (VAR_1, &VAR_16);
      if (VAR_17 && VAR_15)
 {
   FUNC_10 (VAR_15, VAR_16 & ~VAR_0, VAR_17);
   FUNC_9 (VAR_1, VAR_17);
 }
    }



  for (VAR_14 = VAR_3; VAR_14; VAR_14 = FUNC_2 (VAR_14))
    FUNC_4 (FUNC_0 (FUNC_1 (VAR_14)));
  FUNC_4 (FUNC_0 (VAR_6));




  FUNC_3 ('I', VAR_12); VAR_12 = 0;
  FUNC_3 ('D', VAR_13); VAR_13 = 0;



  FUNC_6 ();



  if (VAR_5 == 0 && VAR_11 == 0)
    {
      FUNC_14 (VAR_2);
      for (VAR_14 = VAR_3; VAR_14; VAR_14 = FUNC_2 (VAR_14))
 FUNC_5 (FUNC_0 (FUNC_1 (VAR_14)));
      FUNC_5 (FUNC_0 (VAR_6));
      FUNC_13 (VAR_2);
    }

  VAR_6 = ((void*)0);
}

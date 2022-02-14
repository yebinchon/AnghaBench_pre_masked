
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ,scalar_t__,int) ;
 int FUNC_10 (scalar_t__,int *) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (scalar_t__,scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_13 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (int ,scalar_t__) ;
 scalar_t__ VAR_10 ;
 int FUNC_17 (int ,char*,int ,int ) ;

void
FUNC_18 (tree VAR_11)
{


  if (!FUNC_2 (VAR_6))
    return;



  VAR_11 = FUNC_16 (VAR_6, VAR_11);

  VAR_9 = 1;


  while (VAR_11
  && FUNC_5 (FUNC_6 (VAR_11)) != VAR_0)
    {
      tree VAR_12 = FUNC_6 (VAR_11);
      tree VAR_13 = FUNC_7 (VAR_11);




      if (VAR_8 && !VAR_13
   && FUNC_3 (VAR_7)
   && FUNC_8 (FUNC_0 (VAR_12)))
 FUNC_17 (VAR_3, "%Jbase class %q#T should be explicitly initialized in the "
   "copy constructor",
   VAR_7, FUNC_0 (VAR_12));



      if (VAR_13 == VAR_10)
 VAR_13 = VAR_2;


      if (FUNC_1 (VAR_12))
 FUNC_11 (VAR_12, VAR_13);
      else
 {
   tree VAR_14;

   VAR_14 = FUNC_9 (VAR_4, VAR_5,
           VAR_12, 1);
   FUNC_12 (VAR_12, VAR_2,
         FUNC_10 (VAR_14, ((void*)0)),
         VAR_13,
         VAR_1);
   FUNC_13 (VAR_12, VAR_2);
 }

      VAR_11 = FUNC_4 (VAR_11);
    }
  VAR_9 = 0;


  FUNC_14 (VAR_5);


  while (VAR_11)
    {
      FUNC_15 (FUNC_6 (VAR_11),
      FUNC_7 (VAR_11));
      VAR_11 = FUNC_4 (VAR_11);
    }
}

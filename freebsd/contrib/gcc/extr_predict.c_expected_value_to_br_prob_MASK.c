
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;



 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__,int ,int *,scalar_t__,int,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__,int ,int ) ;
 int FUNC_15 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;

void
FUNC_17 (void)
{
  rtx VAR_9, VAR_10, VAR_11 = VAR_3, VAR_12 = VAR_3;

  for (VAR_9 = FUNC_12 (); VAR_9 ; VAR_9 = FUNC_2 (VAR_9))
    {
      switch (FUNC_0 (VAR_9))
 {
 case 128:

   if (FUNC_4 (VAR_9) == VAR_1)
     {
       VAR_11 = FUNC_3 (VAR_9);
       VAR_12 = FUNC_6 (VAR_11, 0);
       FUNC_9 (VAR_9);
     }
   continue;

 case 130:

   VAR_11 = VAR_3;
   continue;

 case 129:


   if (!FUNC_1 (VAR_9) || VAR_11 == VAR_3
       || ! FUNC_7 (VAR_9))
     continue;
   break;

 default:

   if (VAR_11 && FUNC_15 (VAR_12, VAR_9))
     VAR_11 = VAR_3;
   continue;
 }
      VAR_10 = FUNC_6 (FUNC_5 (FUNC_13 (VAR_9)), 0);
      VAR_10 = FUNC_8 (VAR_9, VAR_10, 0, ((void*)0), VAR_12,
         0, 0);
      if (! VAR_10 || FUNC_6 (VAR_10, 0) != VAR_12
   || FUNC_0 (FUNC_6 (VAR_10, 1)) != VAR_0)
 continue;




      VAR_10 = FUNC_11 (FUNC_0 (VAR_10), VAR_6,
        FUNC_6 (VAR_11, 1), FUNC_6 (VAR_10, 1));
      VAR_10 = FUNC_16 (VAR_10);


      FUNC_10 (VAR_10 == VAR_8 || VAR_10 == VAR_7);
      FUNC_14 (VAR_9, VAR_4,
          VAR_10 == VAR_8 ? VAR_5 : VAR_2);
    }
}

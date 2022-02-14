
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;



 unsigned int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ) ;

 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int const VAR_1 ;
 int FUNC_4 (unsigned int,unsigned int) ;
 int const VAR_2 ;



 int FUNC_5 (int ) ;
 int const FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 unsigned int FUNC_9 (int ) ;
 int const VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (int ,int*,int*,int *,int*,int*,int*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int) ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_13 (int ,int) ;

__attribute__((used)) static int
FUNC_14 (tree VAR_6, unsigned int VAR_7)
{
  unsigned int VAR_8, VAR_9;


  if (!(VAR_5 && VAR_4))
    return 0;

  if (!FUNC_5 (FUNC_8 (VAR_6)))
    return 0;

  VAR_8 = FUNC_9 (FUNC_8 (FUNC_8 (VAR_6)));
  VAR_8 = FUNC_4 (VAR_8, VAR_7);

  while (1)
    {
      switch (FUNC_6 (VAR_6))
 {
 case 129:
 case 131:
 case 130:
   VAR_6 = FUNC_7 (VAR_6, 0);
   if (! FUNC_5 (FUNC_8 (VAR_6)))
     return VAR_8;

   VAR_9 = FUNC_9 (FUNC_8 (FUNC_8 (VAR_6)));
   VAR_8 = FUNC_4 (VAR_9, VAR_7);
   break;

 case 128:



   if (! FUNC_12 (FUNC_7 (VAR_6, 1), 1))
     return VAR_8;

   while (((FUNC_13 (FUNC_7 (VAR_6, 1), 1))
    & (VAR_7 / VAR_0 - 1))
   != 0)
     VAR_7 >>= 1;

   VAR_6 = FUNC_7 (VAR_6, 0);
   break;

 case 132:

   VAR_6 = FUNC_7 (VAR_6, 0);
   VAR_9 = VAR_7;
   if (FUNC_11 (VAR_6))
     {
       HOST_WIDE_INT VAR_10, VAR_11;
       tree VAR_12;
       enum machine_mode VAR_13;
       int VAR_14, VAR_15;

       VAR_6 = FUNC_10 (VAR_6, &VAR_10, &VAR_11, &VAR_12,
      &VAR_13, &VAR_14, &VAR_15, 1);
       if (VAR_11)
  VAR_9 = FUNC_4 (VAR_9, (unsigned) (VAR_11 & -VAR_11));
       if (VAR_12 && FUNC_6 (VAR_12) == 128
    && FUNC_12 (FUNC_7 (VAR_12, 1), 1))
         {


    unsigned VAR_16
      = ((unsigned) FUNC_13 (FUNC_7 (VAR_12, 1), 1)
         * VAR_0);

    if (VAR_16)
      VAR_9 = FUNC_4 (VAR_9, (VAR_16 & -VAR_16));
    VAR_12 = FUNC_7 (VAR_12, 0);
  }
       if (VAR_12 && FUNC_6 (VAR_12) == VAR_2
    && FUNC_12 (FUNC_7 (VAR_12, 1), 1))
         {


    unsigned VAR_17
      = ((unsigned) FUNC_13 (FUNC_7 (VAR_12, 1), 1)
         * VAR_0);

    if (VAR_17)
      VAR_9 = FUNC_4 (VAR_9, (VAR_17 & -VAR_17));
  }
       else if (VAR_12)
  VAR_9 = FUNC_4 (VAR_9, VAR_0);
     }
   if (FUNC_3 (VAR_6))
     VAR_8 = FUNC_4 (VAR_9, FUNC_2 (VAR_6));




   else if (FUNC_6 (VAR_6) == VAR_3
     || FUNC_6 (VAR_6) == VAR_1)
     VAR_8 = FUNC_4 (FUNC_9 (FUNC_8 (VAR_6)), VAR_9);
   else
     VAR_8 = FUNC_4 (VAR_8, VAR_9);
   return FUNC_4 (VAR_8, VAR_7);

 default:
   return VAR_8;
 }
    }
}

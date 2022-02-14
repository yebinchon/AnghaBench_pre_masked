
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct noce_if_info {scalar_t__ cond; scalar_t__ cond_earliest; scalar_t__ jump; int b; int a; int x; } ;
typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;

 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_1 ;


 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,int) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__,int,scalar_t__*,scalar_t__,int,int) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (int ,scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_19 (int ,scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__,int ) ;
 int FUNC_21 (int) ;

__attribute__((used)) static rtx
FUNC_22 (struct noce_if_info *VAR_3, rtx VAR_4,
   rtx *VAR_5)
{
  rtx VAR_6, VAR_7, VAR_8;
  int VAR_9;


  if (FUNC_18 (VAR_4, VAR_3->cond))
    {
      *VAR_5 = VAR_3->cond_earliest;
      return VAR_3->cond;
    }

  VAR_7 = FUNC_16 (VAR_3->jump);
  VAR_6 = FUNC_11 (FUNC_10 (VAR_7), 0);
  VAR_9
    = FUNC_1 (FUNC_11 (FUNC_10 (VAR_7), 2)) == VAR_1
      && FUNC_11 (FUNC_11 (FUNC_10 (VAR_7), 2), 0) == FUNC_5 (VAR_3->jump);
  if (FUNC_1 (VAR_4) == VAR_0)
    {
      enum rtx_code VAR_10 = FUNC_1 (VAR_3->cond);
      rtx VAR_11 = FUNC_11 (VAR_3->cond, 0);
      rtx VAR_12 = FUNC_11 (VAR_3->cond, 1);
      rtx VAR_13;


      VAR_13 = FUNC_17 (VAR_3->cond_earliest);
      if (VAR_13
   && FUNC_3 (VAR_13)
   && FUNC_1 (FUNC_7 (VAR_13)) == VAR_2)
 {
   rtx VAR_14 = FUNC_13 (VAR_13);
   if (!VAR_14)
     VAR_14 = FUNC_10 (FUNC_7 (VAR_13));
   if (FUNC_1 (VAR_14) == VAR_0)
     {
       if (FUNC_20 (VAR_11, FUNC_9 (FUNC_7 (VAR_13))))
  VAR_11 = VAR_14;
       else if (FUNC_20 (VAR_12, FUNC_9 (FUNC_7 (VAR_13))))
  VAR_12 = VAR_14;

       if (FUNC_1 (VAR_11) == VAR_0)
  {
    rtx VAR_15 = VAR_11;
    VAR_11 = VAR_12;
    VAR_12 = VAR_15;
    VAR_10 = FUNC_21 (VAR_10);
  }
     }
 }



      if (FUNC_1 (VAR_12) == VAR_0)
 {
   HOST_WIDE_INT VAR_16 = FUNC_4 (VAR_4);
   HOST_WIDE_INT VAR_17 = FUNC_4 (VAR_12);

   switch (VAR_10)
     {
     case 128:
       if (VAR_17 == VAR_16 + 1)
  {
    VAR_10 = 129;
    VAR_12 = FUNC_0 (VAR_16);
  }
       break;
     case 129:
       if (VAR_17 == VAR_16 - 1)
  {
    VAR_10 = 128;
    VAR_12 = FUNC_0 (VAR_16);
  }
       break;
     case 130:
       if (VAR_17 == VAR_16 - 1)
  {
    VAR_10 = 131;
    VAR_12 = FUNC_0 (VAR_16);
  }
       break;
     case 131:
       if (VAR_17 == VAR_16 + 1)
  {
    VAR_10 = 130;
    VAR_12 = FUNC_0 (VAR_16);
  }
       break;
     default:
       break;
     }
 }




      if (VAR_10 != FUNC_1 (VAR_3->cond)
   || VAR_11 != FUNC_11 (VAR_3->cond, 0)
   || VAR_12 != FUNC_11 (VAR_3->cond, 1))
 {
   VAR_6 = FUNC_14 (VAR_10, FUNC_2 (VAR_6), VAR_11, VAR_12);
   *VAR_5 = VAR_3->cond_earliest;
   return VAR_6;
 }
    }

  VAR_6 = FUNC_12 (VAR_3->jump, VAR_6, VAR_9,
     VAR_5, VAR_4, 0, 1);
  if (! VAR_6 || ! FUNC_18 (VAR_4, VAR_6))
    return ((void*)0);





  for (VAR_8 = VAR_3->jump; VAR_8 != *VAR_5; VAR_8 = FUNC_8 (VAR_8))
    if (FUNC_3 (VAR_8) && FUNC_19 (VAR_3->x, FUNC_7 (VAR_8)))
      return ((void*)0);


  for (VAR_8 = *VAR_5; VAR_8 != VAR_3->jump; VAR_8 = FUNC_6 (VAR_8))
    if (FUNC_3 (VAR_8)
 && (FUNC_15 (VAR_3->a, VAR_8)
     || FUNC_15 (VAR_3->b, VAR_8)))
      return ((void*)0);

  return VAR_6;
}

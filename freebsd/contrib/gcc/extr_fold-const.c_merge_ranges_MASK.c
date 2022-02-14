
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;



 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int ,int ,scalar_t__,int,scalar_t__,int) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_14 (int *VAR_9, tree *VAR_10, tree *VAR_11, int VAR_12, tree VAR_13,
       tree VAR_14, int VAR_15, tree VAR_16, tree VAR_17)
{
  int VAR_18;
  int VAR_19;
  int VAR_20;
  tree VAR_21;
  int VAR_22;
  tree VAR_23, VAR_24;
  int VAR_25 = ((VAR_13 == 0 && VAR_16 == 0)
    || FUNC_8 (FUNC_10 (VAR_0, VAR_8,
      VAR_13, 0, VAR_16, 0)));
  int VAR_26 = ((VAR_14 == 0 && VAR_17 == 0)
     || FUNC_8 (FUNC_10 (VAR_0, VAR_8,
       VAR_14, 1, VAR_17, 1)));



  if (FUNC_8 (FUNC_10 (VAR_1, VAR_8,
     VAR_13, 0, VAR_16, 0))
      || (VAR_25
   && FUNC_8 (FUNC_10 (VAR_1, VAR_8,
     VAR_17, 1, VAR_14, 1))))
    {
      VAR_20 = VAR_12, VAR_12 = VAR_15, VAR_15 = VAR_20;
      VAR_21 = VAR_13, VAR_13 = VAR_16, VAR_16 = VAR_21;
      VAR_21 = VAR_14, VAR_14 = VAR_17, VAR_17 = VAR_21;
    }




  VAR_18 = FUNC_8 (FUNC_10 (VAR_4, VAR_8,
       VAR_14, 1, VAR_16, 0));
  VAR_19 = FUNC_8 (FUNC_10 (VAR_3, VAR_8,
          VAR_17, 1, VAR_14, 1));



  if (VAR_12 && VAR_15)
    {



      if (VAR_18)
 VAR_22 = 0, VAR_23 = VAR_24 = 0;
      else if (VAR_19)
 VAR_22 = 1, VAR_23 = VAR_16, VAR_24 = VAR_17;
      else
 VAR_22 = 1, VAR_23 = VAR_16, VAR_24 = VAR_14;
    }

  else if (VAR_12 && ! VAR_15)
    {
      if (VAR_18)
 VAR_22 = 1, VAR_23 = VAR_13, VAR_24 = VAR_14;
      else if (VAR_25 && VAR_26)
 VAR_22 = 0, VAR_23 = VAR_24 = 0;
      else if (VAR_19 && VAR_25)
 {
   VAR_23 = FUNC_12 (VAR_17);
   VAR_24 = VAR_14;
   VAR_22 = 1;
   if (VAR_23 == 0)
     {


       return 0;
     }
 }
      else if (! VAR_19 || VAR_26)
 {
   VAR_23 = VAR_13;
   VAR_24 = FUNC_11 (VAR_16);
   VAR_22 = 1;
   if (VAR_24 == 0)
     {

       return 0;
     }
 }
      else
 return 0;
    }

  else if (! VAR_12 && VAR_15)
    {




      if (VAR_18)
 VAR_22 = 1, VAR_23 = VAR_16, VAR_24 = VAR_17;
      else if (VAR_19 || VAR_26)
 VAR_22 = 0, VAR_23 = VAR_24 = 0;
      else
 {
   VAR_23 = FUNC_12 (VAR_14);
   VAR_24 = VAR_17;
   VAR_22 = 1;
   if (VAR_23 == 0)
     {

       return 0;
     }
 }
    }

  else
    {






      if (VAR_18)
 {
   if (FUNC_8 (FUNC_10 (VAR_0, VAR_8,
      FUNC_12 (VAR_14),
      1, VAR_16, 0)))
     VAR_22 = 0, VAR_23 = VAR_13, VAR_24 = VAR_17;
   else
     {

       if (VAR_13 && FUNC_1 (VAR_13) == VAR_2)
  switch (FUNC_1 (FUNC_2 (VAR_13)))
    {
    case 130:
      if (FUNC_6 (FUNC_2 (VAR_13))
   != FUNC_0 (FUNC_5 (FUNC_2 (VAR_13))))
        break;

    case 129:
      if (FUNC_13 (VAR_13,
         FUNC_4 (FUNC_2 (VAR_13))))
        VAR_13 = 0;
      break;
    case 128:
      if (FUNC_7 (FUNC_2 (VAR_13))
   && FUNC_9 (VAR_13))
        VAR_13 = 0;
      break;
    default:
      break;
    }


       if (VAR_17 && FUNC_1 (VAR_17) == VAR_2)
  switch (FUNC_1 (FUNC_2 (VAR_17)))
    {
    case 130:
      if (FUNC_6 (FUNC_2 (VAR_17))
   != FUNC_0 (FUNC_5 (FUNC_2 (VAR_17))))
        break;

    case 129:
      if (FUNC_13 (VAR_17,
         FUNC_3 (FUNC_2 (VAR_17))))
        VAR_17 = 0;
      break;
    case 128:
      if (FUNC_7 (FUNC_2 (VAR_17))
   && FUNC_9 (FUNC_10 (VAR_6, VAR_5,
             VAR_17, 1,
             VAR_7, 1)))
        VAR_17 = 0;
      break;
    default:
      break;
    }





       if (VAR_13 == 0 && VAR_17 == 0)
         {
    VAR_23 = FUNC_12 (VAR_14);
    VAR_24 = FUNC_11 (VAR_16);
    if (VAR_23 == 0 || VAR_24 == 0)
      return 0;

    VAR_22 = 1;
  }
       else
  return 0;
     }
 }
      else if (VAR_19)
 VAR_22 = 0, VAR_23 = VAR_13, VAR_24 = VAR_14;
      else
 VAR_22 = 0, VAR_23 = VAR_13, VAR_24 = VAR_17;
    }

  *VAR_9 = VAR_22, *VAR_10 = VAR_23, *VAR_11 = VAR_24;
  return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
struct loop {int depth; } ;
typedef int htab_t ;
typedef TYPE_1__* basic_block ;
struct TYPE_6__ {int depth; } ;
struct TYPE_5__ {int loop_father; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;





 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int const FUNC_6 (int ) ;
 int FUNC_7 (int const) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int VAR_4 ;
 int FUNC_10 (struct loop*,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 TYPE_1__* FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int VAR_5 ;
 int FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (int ,int ,int ) ;
 int FUNC_21 (int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_22 (int ) ;
 struct loop* FUNC_23 (struct loop*,int ) ;
 int FUNC_24 (struct loop*,TYPE_1__*) ;
 int FUNC_25 (int const,int ,int ) ;
 int FUNC_26 (int const,int ,int ,int ) ;
 int FUNC_27 (int const,int ,int ,int ,int ) ;
 int FUNC_28 (int ,int ) ;
 int FUNC_29 (int ,int ) ;
 scalar_t__ FUNC_30 (int ) ;
 int FUNC_31 (int ) ;
 TYPE_2__* FUNC_32 (int ) ;
 int FUNC_33 (int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_34 (struct loop *VAR_7, tree VAR_8, int VAR_9, htab_t VAR_10,
     int VAR_11)
{
  tree VAR_12, VAR_13, VAR_14, VAR_15;
  basic_block VAR_16;
  struct loop *VAR_17;
  tree VAR_18 = FUNC_22 (VAR_8);


  if (VAR_11++ > FUNC_3 (VAR_3))
    return VAR_5;

  if (FUNC_11 (VAR_8)
      || FUNC_30 (VAR_8))
    return VAR_8;

  switch (FUNC_6 (VAR_8))
    {
    case 128:
      VAR_16 = FUNC_12 (FUNC_4 (VAR_8));



      if (!VAR_16
   || (!(VAR_9 & VAR_1)
       && !FUNC_24 (VAR_7, VAR_16)))
 return VAR_8;
      VAR_12 = FUNC_29 (VAR_10, VAR_8);
      if (VAR_12)
 return VAR_12;





      VAR_12 = !FUNC_24 (VAR_7, VAR_16) ? VAR_8 : VAR_5;
      FUNC_33 (VAR_10, VAR_8, VAR_12);






      if (FUNC_13 (VAR_4, FUNC_5 (VAR_8)))
 return VAR_12;

      VAR_17 = FUNC_23 (VAR_7, VAR_16->loop_father);



      FUNC_15 (VAR_4, FUNC_5 (VAR_8));
      VAR_12 = FUNC_10 (VAR_17, VAR_8);


      if (FUNC_6 (VAR_12) == 128
   && (FUNC_32 (FUNC_4 (VAR_12)) == ((void*)0)
       || (FUNC_32 (FUNC_4 (VAR_12))->depth
    > VAR_17->depth)))
 {
   if (VAR_12 == VAR_8)
     VAR_12 = FUNC_31 (VAR_8);
   else
     VAR_12 = VAR_8;

   if (VAR_12 == VAR_2)
     VAR_12 = VAR_5;
 }

      else if (VAR_12 != VAR_5)
 VAR_12 = FUNC_34 (VAR_7, VAR_12, VAR_9, VAR_10, VAR_11);

      FUNC_14 (VAR_4, FUNC_5 (VAR_8));


      FUNC_33 (VAR_10, VAR_8, VAR_12);
      return VAR_12;

    case 131:
      VAR_13 = FUNC_34 (VAR_7, FUNC_0 (VAR_8),
          VAR_9, VAR_10, VAR_11);
      if (VAR_13 == VAR_5)
 return VAR_5;

      VAR_14 = FUNC_34 (VAR_7, FUNC_1 (VAR_8),
          VAR_9, VAR_10, VAR_11);
      if (VAR_14 == VAR_5)
 return VAR_5;

      if (FUNC_0 (VAR_8) != VAR_13
   || FUNC_1 (VAR_8) != VAR_14)
 {
   VAR_14 = FUNC_17 (FUNC_22 (VAR_13), VAR_14, VAR_2);
   VAR_8 = FUNC_16 (FUNC_2 (VAR_8), VAR_13, VAR_14);
 }
      return VAR_8;

    case 132:
      VAR_13 = FUNC_34 (VAR_7, FUNC_8 (VAR_8, 0),
          VAR_9, VAR_10, VAR_11);
      if (VAR_13 == VAR_5)
 return VAR_5;

      VAR_14 = FUNC_34 (VAR_7, FUNC_8 (VAR_8, 1),
          VAR_9, VAR_10, VAR_11);
      if (VAR_14 == VAR_5)
 return VAR_5;

      if (FUNC_8 (VAR_8, 0) != VAR_13
   || FUNC_8 (VAR_8, 1) != VAR_14)
 {
   VAR_13 = FUNC_17 (VAR_18, VAR_13, VAR_2);
   VAR_14 = FUNC_17 (VAR_18, VAR_14, VAR_2);
   VAR_8 = FUNC_21 (VAR_18, VAR_13, VAR_14);
 }
      return VAR_8;

    case 136:
      VAR_13 = FUNC_34 (VAR_7, FUNC_8 (VAR_8, 0),
          VAR_9, VAR_10, VAR_11);
      if (VAR_13 == VAR_5)
 return VAR_5;

      VAR_14 = FUNC_34 (VAR_7, FUNC_8 (VAR_8, 1),
          VAR_9, VAR_10, VAR_11);
      if (VAR_14 == VAR_5)
 return VAR_5;

      if (FUNC_8 (VAR_8, 0) != VAR_13
   || FUNC_8 (VAR_8, 1) != VAR_14)
 {
   VAR_13 = FUNC_17 (VAR_18, VAR_13, VAR_2);
   VAR_14 = FUNC_17 (VAR_18, VAR_14, VAR_2);
   VAR_8 = FUNC_19 (VAR_18, VAR_13, VAR_14);
 }
      return VAR_8;

    case 135:
      VAR_13 = FUNC_34 (VAR_7, FUNC_8 (VAR_8, 0),
          VAR_9, VAR_10, VAR_11);
      if (VAR_13 == VAR_5)
 return VAR_5;

      VAR_14 = FUNC_34 (VAR_7, FUNC_8 (VAR_8, 1),
          VAR_9, VAR_10, VAR_11);
      if (VAR_14 == VAR_5)
 return VAR_5;

      if (FUNC_8 (VAR_8, 0) != VAR_13
   || FUNC_8 (VAR_8, 1) != VAR_14)
 {
   VAR_13 = FUNC_17 (VAR_18, VAR_13, VAR_2);
   VAR_14 = FUNC_17 (VAR_18, VAR_14, VAR_2);
   VAR_8 = FUNC_20 (VAR_18, VAR_13, VAR_14);
 }
      return VAR_8;

    case 133:
    case 137:
    case 134:
      VAR_13 = FUNC_34 (VAR_7, FUNC_8 (VAR_8, 0),
          VAR_9, VAR_10, VAR_11);
      if (VAR_13 == VAR_5)
        return VAR_5;

      if (VAR_9 & VAR_0)
 {
   tree VAR_19 = FUNC_18 (FUNC_9 (VAR_8), VAR_13);
   if (VAR_19)
     return VAR_19;
 }

      if (VAR_13 == FUNC_8 (VAR_8, 0))
 return VAR_8;




      if (VAR_9 & VAR_0)
 return FUNC_28 (FUNC_9 (VAR_8), VAR_13);

      return FUNC_17 (FUNC_9 (VAR_8), VAR_13, VAR_2);

    case 129:
      return VAR_5;

    case 130:
      return VAR_6;

    default:
      break;
    }

  switch (FUNC_7 (FUNC_6 (VAR_8)))
    {
    case 3:
      VAR_13 = FUNC_34 (VAR_7, FUNC_8 (VAR_8, 0),
          VAR_9, VAR_10, VAR_11);
      if (VAR_13 == VAR_5)
 return VAR_5;

      VAR_14 = FUNC_34 (VAR_7, FUNC_8 (VAR_8, 1),
          VAR_9, VAR_10, VAR_11);
      if (VAR_14 == VAR_5)
 return VAR_5;

      VAR_15 = FUNC_34 (VAR_7, FUNC_8 (VAR_8, 2),
          VAR_9, VAR_10, VAR_11);
      if (VAR_15 == VAR_5)
        return VAR_5;

      if (VAR_13 == FUNC_8 (VAR_8, 0)
   && VAR_14 == FUNC_8 (VAR_8, 1)
   && VAR_15 == FUNC_8 (VAR_8, 2))
 return VAR_8;

      return FUNC_27 (FUNC_6 (VAR_8),
     FUNC_9 (VAR_8), VAR_13, VAR_14, VAR_15);

    case 2:
      VAR_13 = FUNC_34 (VAR_7, FUNC_8 (VAR_8, 0),
          VAR_9, VAR_10, VAR_11);
      if (VAR_13 == VAR_5)
 return VAR_5;

      VAR_14 = FUNC_34 (VAR_7, FUNC_8 (VAR_8, 1),
          VAR_9, VAR_10, VAR_11);
      if (VAR_14 == VAR_5)
        return VAR_5;

      if (VAR_13 == FUNC_8 (VAR_8, 0)
   && VAR_14 == FUNC_8 (VAR_8, 1))
 return VAR_8;
      return FUNC_26 (FUNC_6 (VAR_8), FUNC_9 (VAR_8), VAR_13, VAR_14);

    case 1:
      VAR_13 = FUNC_34 (VAR_7, FUNC_8 (VAR_8, 0),
          VAR_9, VAR_10, VAR_11);
      if (VAR_13 == VAR_5)
        return VAR_5;
      if (VAR_13 == FUNC_8 (VAR_8, 0))
 return VAR_8;
      return FUNC_25 (FUNC_6 (VAR_8), FUNC_9 (VAR_8), VAR_13);

    case 0:
      return VAR_8;

    default:
      break;
    }


  return VAR_5;
}

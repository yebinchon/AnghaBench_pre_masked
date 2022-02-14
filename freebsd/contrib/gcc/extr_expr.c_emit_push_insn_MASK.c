
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum direction { ____Placeholder_direction } direction ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 unsigned int FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_10 (unsigned int,unsigned int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_11 (int) ;
 int VAR_15 ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (int,unsigned int) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_15 (scalar_t__,int,int) ;
 int FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 int VAR_18 ;
 int FUNC_18 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_19 (scalar_t__,scalar_t__,int ,int) ;
 int FUNC_20 (scalar_t__,scalar_t__) ;
 int FUNC_21 (int,scalar_t__,int ) ;
 scalar_t__ FUNC_22 (int ,int ,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_23 (int,scalar_t__) ;
 int FUNC_24 (int) ;
 scalar_t__ FUNC_25 (int,scalar_t__) ;
 scalar_t__ FUNC_26 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_27 (int,scalar_t__) ;
 int FUNC_28 (scalar_t__,scalar_t__,int,int) ;
 int FUNC_29 (int *,scalar_t__,int,unsigned int,int ) ;
 int VAR_19 ;
 scalar_t__ FUNC_30 (scalar_t__,int,int) ;
 scalar_t__ FUNC_31 (scalar_t__,int) ;
 scalar_t__ FUNC_32 (scalar_t__,int,int) ;
 scalar_t__ FUNC_33 (int ,scalar_t__) ;
 int FUNC_34 (scalar_t__,unsigned int) ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_35 (int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

void
FUNC_36 (rtx VAR_25, enum machine_mode VAR_26, tree VAR_27, rtx VAR_28,
  unsigned int VAR_29, int VAR_30, rtx VAR_31, int VAR_32,
  rtx VAR_33, rtx VAR_34, int VAR_35,
  rtx VAR_36)
{
  rtx VAR_37;
  enum direction VAR_38



    = VAR_21;





  enum direction VAR_39 = FUNC_1 (VAR_26, VAR_27);



  if (VAR_16 == VAR_13)
    if (VAR_39 != VAR_19)
      VAR_39 = (VAR_39 == VAR_18 ? VAR_21 : VAR_18);

  VAR_37 = VAR_25;

  if (VAR_26 == VAR_3)
    {


      rtx VAR_40;
      int VAR_41;
      int VAR_42;
      int VAR_43;

      VAR_42 = VAR_30 % (VAR_12 / VAR_2);
      VAR_41 = VAR_30 - VAR_42;

      FUNC_24 (VAR_28);




      if (VAR_30 != 0)
 VAR_37 = FUNC_15 (VAR_37, VAR_3, VAR_41);





      VAR_43 = (VAR_35 == 0) ? 0 : VAR_41;
 {
   rtx VAR_44;





   if (VAR_30 != 0)
     {
       if (FUNC_3 (VAR_28) == VAR_5)
  VAR_28 = FUNC_2 (FUNC_7 (VAR_28) - VAR_41);
       else
  VAR_28 = FUNC_22 (FUNC_4 (VAR_28), VAR_20, VAR_28,
         FUNC_2 (VAR_41), VAR_8, 0,
         VAR_10);
     }




   if (! VAR_33)
     {
       VAR_40 = FUNC_32 (VAR_28, VAR_32, VAR_39 == VAR_18);
       VAR_32 = 0;
     }
   else if (FUNC_3 (VAR_34) == VAR_5)
     VAR_40 = FUNC_27 (VAR_3,
       FUNC_31 (VAR_33,
        VAR_43 + FUNC_7 (VAR_34)));
   else
     VAR_40 = FUNC_27 (VAR_3,
       FUNC_31 (FUNC_26 (VAR_15,
        VAR_33,
        VAR_34),
        VAR_43));

   if (!VAR_0)
     {




       if (FUNC_33 (VAR_23, VAR_40)
    || FUNC_33 (VAR_22, VAR_40))
  VAR_40 = FUNC_17 (VAR_40);
     }

   VAR_44 = FUNC_25 (VAR_3, VAR_40);
   FUNC_34 (VAR_44, VAR_29);

   FUNC_18 (VAR_44, VAR_37, VAR_28, VAR_4);
 }
    }
  else if (VAR_30 > 0)
    {


      int VAR_45 = FUNC_6 (VAR_26) / VAR_17;
      int VAR_46;
      int VAR_47;


      int VAR_48 = VAR_30 % (VAR_12 / VAR_2);
      int VAR_49 = FUNC_7 (VAR_34);
      int VAR_50;




      if (VAR_32 && VAR_33 == 0
   && VAR_39 != VAR_19 && VAR_39 != VAR_38)
 FUNC_16 (FUNC_2 (VAR_32));




      if (VAR_33 == 0)
 VAR_48 = 0;



      VAR_47 = (VAR_30 - VAR_48) / VAR_17;
      VAR_48 /= VAR_17;





      VAR_50 = (VAR_35 == 0) ? 0 : VAR_47;

      if (FUNC_0 (VAR_25) && ! FUNC_8 (VAR_25))
 VAR_25 = FUNC_35 (FUNC_23 (VAR_26, VAR_25));



      if ((FUNC_13 (VAR_25) && FUNC_12 (VAR_25) < VAR_6
    && FUNC_5 (FUNC_4 (VAR_25)) != VAR_7))
 VAR_25 = FUNC_17 (VAR_25);





      for (VAR_46 = VAR_47; VAR_46 < VAR_45; VAR_46++)



 if (VAR_46 >= VAR_47 + VAR_48)
   FUNC_36 (FUNC_30 (VAR_25, VAR_46, VAR_26),
     VAR_24, VAR_9, VAR_8, VAR_29, 0, VAR_8,
     0, VAR_33,
     FUNC_2 (VAR_49 + ((VAR_46 - VAR_47 + VAR_50)
        * VAR_17)),
     VAR_35, VAR_36);
    }
  else
    {
      rtx VAR_51;
      rtx VAR_52;




      if (VAR_32 && VAR_33 == 0
   && VAR_39 != VAR_19 && VAR_39 != VAR_38)
 FUNC_16 (FUNC_2 (VAR_32));






 {
   if (FUNC_3 (VAR_34) == VAR_5)
     VAR_51
       = FUNC_27 (VAR_26,
    FUNC_31 (VAR_33,
            FUNC_7 (VAR_34)));
   else
     VAR_51 = FUNC_27 (VAR_26, FUNC_26 (VAR_15, VAR_33,
             VAR_34));
   VAR_52 = FUNC_25 (VAR_26, VAR_51);
   FUNC_34 (VAR_52, VAR_29);

   FUNC_20 (VAR_52, VAR_25);
 }
    }




  if (VAR_30 > 0 && VAR_31 != 0)
    {


      if (FUNC_3 (VAR_31) == VAR_11)
 FUNC_19 (VAR_31, VAR_25, VAR_27, -1);
      else
 {
   FUNC_24 (VAR_30 % VAR_17 == 0);
   FUNC_28 (FUNC_12 (VAR_31), VAR_25, VAR_30 / VAR_17, VAR_26);
 }
    }

  if (VAR_32 && VAR_33 == 0 && VAR_39 == VAR_38)
    FUNC_16 (FUNC_2 (VAR_32));

  if (VAR_36 && VAR_33 == 0)
    FUNC_16 (VAR_36);
}

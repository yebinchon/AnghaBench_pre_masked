
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_table {scalar_t__ set_p; } ;
typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_6 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (scalar_t__,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (int ,scalar_t__,scalar_t__) ;
 int FUNC_16 (scalar_t__,scalar_t__,struct hash_table*) ;
 int FUNC_17 (scalar_t__,int ,scalar_t__,int,int,struct hash_table*) ;
 int FUNC_18 (scalar_t__,scalar_t__,struct hash_table*) ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_21 (scalar_t__,scalar_t__) ;
 int FUNC_22 (scalar_t__) ;
 scalar_t__ FUNC_23 (scalar_t__) ;
 scalar_t__ FUNC_24 (scalar_t__) ;

__attribute__((used)) static void
FUNC_25 (rtx VAR_7, rtx VAR_8, struct hash_table *VAR_9)
{
  rtx VAR_10 = FUNC_9 (VAR_7);
  rtx VAR_11 = FUNC_8 (VAR_7);
  rtx VAR_12;

  if (FUNC_2 (VAR_10) == VAR_0)
    FUNC_16 (VAR_10, VAR_8, VAR_9);

  else if (FUNC_7 (VAR_11))
    {
      unsigned int VAR_13 = FUNC_6 (VAR_11);
      rtx VAR_14;





      VAR_12 = FUNC_12 (VAR_8);
      if (VAR_12 != 0
   && (VAR_9->set_p
       ? FUNC_14 (FUNC_10 (VAR_12, 0))
       : FUNC_24 (FUNC_10 (VAR_12, 0))))
 VAR_10 = FUNC_10 (VAR_12, 0), VAR_7 = FUNC_15 (VAR_5, VAR_11, VAR_10);


      if (! VAR_9->set_p
   && VAR_13 >= VAR_1

   && FUNC_11 (FUNC_3 (VAR_11))



   && !FUNC_13 (VAR_8, VAR_3, VAR_2)

   && FUNC_24 (VAR_10)

   && ! FUNC_22 (VAR_7)





   && (VAR_12 == VAR_2 || ! FUNC_5 (FUNC_10 (VAR_12, 0))))
 {



   int VAR_15 = FUNC_20 (VAR_10, VAR_8) && FUNC_23 (VAR_8);




   int VAR_16 = (FUNC_21 (VAR_10, VAR_8)
    && ! FUNC_4 (VAR_8));

   FUNC_17 (VAR_10, FUNC_3 (VAR_11), VAR_8, VAR_15, VAR_16, VAR_9);
 }


      else if (VAR_9->set_p
        && VAR_13 >= VAR_1
        && ((FUNC_7 (VAR_10)
      && FUNC_6 (VAR_10) >= VAR_1
      && FUNC_11 (FUNC_3 (VAR_11))
      && FUNC_6 (VAR_10) != VAR_13)
     || FUNC_14 (VAR_10))



        && (VAR_8 == FUNC_0 (FUNC_1 (VAR_8))
     || ((VAR_14 = FUNC_19 (VAR_8)) != VAR_2
         && FUNC_21 (VAR_7, VAR_14))))
 FUNC_18 (VAR_7, VAR_8, VAR_9);
    }



  else if (VAR_6 && FUNC_7 (VAR_10) && FUNC_5 (VAR_11))
      {
        unsigned int VAR_17 = FUNC_6 (VAR_10);


        if (! VAR_9->set_p

     && VAR_17 >= VAR_1

    && FUNC_11 (FUNC_3 (VAR_10))



    && ! FUNC_13 (VAR_8, VAR_3, VAR_2)

    && FUNC_24 (VAR_11)

    && ! FUNC_22 (VAR_7)





    && ((VAR_12 = FUNC_13 (VAR_8, VAR_4, VAR_2)) == 0
        || ! FUNC_5 (FUNC_10 (VAR_12, 0))))
             {

               int VAR_18 = 0;




               int VAR_19 = FUNC_21 (VAR_11, VAR_8)
        && ! FUNC_4 (VAR_8);


        FUNC_17 (VAR_11, FUNC_3 (VAR_11), VAR_8,
         VAR_18, VAR_19, VAR_9);
             }
      }
}

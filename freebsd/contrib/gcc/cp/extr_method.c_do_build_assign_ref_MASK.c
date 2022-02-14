
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int VAR_9 ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_17 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_18 (int ,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_19 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__,int ,int ,scalar_t__,int) ;
 int FUNC_21 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_22 (scalar_t__) ;
 scalar_t__ FUNC_23 (scalar_t__,int) ;
 int FUNC_24 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_25 (char*,scalar_t__) ;
 int FUNC_26 (scalar_t__) ;
 int FUNC_27 (scalar_t__) ;
 int FUNC_28 (scalar_t__) ;
 scalar_t__ FUNC_29 (scalar_t__) ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static void
FUNC_30 (tree VAR_13)
{
  tree VAR_14 = FUNC_7 (FUNC_3 (VAR_13));
  tree VAR_15;

  VAR_15 = FUNC_15 (0);
  VAR_14 = FUNC_22 (VAR_14);

  if (FUNC_12 (VAR_11)
      && FUNC_29 (VAR_11))

                                        ;
  else if (FUNC_12 (VAR_11))
    {
      tree VAR_16 = FUNC_16 (VAR_4, VAR_12, VAR_10, VAR_14);
      FUNC_27 (VAR_16);
    }
  else
    {
      tree VAR_17;
      int VAR_18 = FUNC_24 (FUNC_9 (VAR_14));
      int VAR_19;
      tree VAR_20, VAR_21;


      for (VAR_20 = FUNC_10 (VAR_11), VAR_19 = 0;
    FUNC_1 (VAR_20, VAR_19, VAR_21); VAR_19++)
 {
   tree VAR_22;



   VAR_22 = FUNC_18 (VAR_7, VAR_14, VAR_21, 1);

   FUNC_27
     (FUNC_20 (VAR_10,
     FUNC_14 (VAR_5),
     FUNC_21 (VAR_6,
        VAR_22),
     VAR_21,
     VAR_3 | VAR_2));
 }


      for (VAR_17 = FUNC_11 (VAR_11);
    VAR_17;
    VAR_17 = FUNC_7 (VAR_17))
 {
   tree VAR_23 = VAR_10;
   tree VAR_24 = VAR_14;
   tree VAR_25 = VAR_17;
   tree VAR_26;
   int VAR_27;

   if (FUNC_8 (VAR_25) != VAR_1 || FUNC_4 (VAR_25))
     continue;

   VAR_26 = FUNC_9 (VAR_25);

   if (FUNC_2 (VAR_26))
     {
       FUNC_25 ("non-static const member %q#D, can't use default "
       "assignment operator", VAR_25);
       continue;
     }
   else if (FUNC_8 (VAR_26) == VAR_8)
     {
       FUNC_25 ("non-static reference member %q#D, can't use "
       "default assignment operator", VAR_25);
       continue;
     }

   if (FUNC_6 (VAR_25))
     {
       if (FUNC_13 (FUNC_6 (VAR_25)))
  continue;
     }
   else if (FUNC_0 (VAR_26)
     && FUNC_11 (VAR_26) != VAR_6)

                                                    ;
   else
     continue;

   VAR_23 = FUNC_17 (VAR_0, VAR_26, VAR_23, VAR_25, VAR_6);


   VAR_27 = VAR_18;
   if (FUNC_5 (VAR_25))
     VAR_27 &= ~VAR_9;
   VAR_26 = FUNC_23 (VAR_26, VAR_27);

   VAR_24 = FUNC_17 (VAR_0, VAR_26, VAR_24, VAR_25, VAR_6);

   if (FUNC_6 (VAR_25))
     VAR_24 = FUNC_19 (VAR_23, VAR_5, VAR_24);
   else
     VAR_24 = FUNC_16 (VAR_4, FUNC_9 (VAR_23), VAR_23, VAR_24);
   FUNC_27 (VAR_24);
 }
    }
  FUNC_28 (VAR_10);
  FUNC_26 (VAR_15);
}

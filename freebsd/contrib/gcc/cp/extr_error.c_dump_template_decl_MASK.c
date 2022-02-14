
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

 scalar_t__ FUNC_3 (scalar_t__) ;

 int FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static void
FUNC_21 (tree VAR_7, int VAR_8)
{
  tree VAR_9 = FUNC_0 (VAR_7);
  tree VAR_10;
  int VAR_11;

  if (VAR_8 & VAR_2)
    {
      for (VAR_10 = VAR_9 = FUNC_15 (VAR_9);
    VAR_10;
    VAR_10 = FUNC_5 (VAR_10))
 {
   tree VAR_12 = FUNC_3 (VAR_10);
   int VAR_13 = FUNC_9 (VAR_12);

   FUNC_18 (VAR_6, "template");
   FUNC_16 (VAR_6);



     VAR_8 |= VAR_1;

   for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++)
     {
       if (VAR_11)
  FUNC_20 (VAR_6);
       FUNC_12 (FUNC_8 (VAR_12, VAR_11), VAR_8);
     }
   FUNC_17 (VAR_6);
   FUNC_19 (VAR_6);
 }
      FUNC_15(VAR_9);

      if (FUNC_2 (VAR_7))

 FUNC_18 (VAR_6, "class");
    }

  if (FUNC_6 (FUNC_1 (VAR_7)) == VAR_4)
    FUNC_13 (FUNC_7 (VAR_7),
        ((VAR_8 & ~VAR_0) | VAR_3
  | (VAR_8 & VAR_1 ? VAR_0 : 0)));
  else if (FUNC_6 (FUNC_1 (VAR_7)) == VAR_5)
    FUNC_10 (FUNC_1 (VAR_7), VAR_8 | VAR_3);
  else
    {
      FUNC_14 (FUNC_7 (VAR_7));
      switch (FUNC_4 (VAR_7))
 {
 case 128:
 case 129:
   FUNC_11 (VAR_7, VAR_8 | VAR_3);
   break;
 default:

   FUNC_13 (FUNC_7 (VAR_7),
       (VAR_8 & ~VAR_0) | VAR_3
       | (VAR_8 & VAR_1
   ? VAR_0 : 0));
 }
    }
}

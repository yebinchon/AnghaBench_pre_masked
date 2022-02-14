
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (scalar_t__,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14 (tree VAR_7, int VAR_8, int VAR_9)
{
  tree VAR_10 = VAR_7 ? FUNC_1 (VAR_7) : VAR_0;

  if (VAR_8 && VAR_9 & VAR_3)
    return;
  VAR_9 &= ~(VAR_1 | VAR_3);
  FUNC_10 (VAR_5);



  if (VAR_10 && !VAR_8)
    {
      int VAR_11, VAR_12;

      if (FUNC_3 (VAR_10))
 VAR_10 = FUNC_6 (VAR_10, FUNC_7 (VAR_10) - 1);

      VAR_11 = FUNC_7 (VAR_10);

      for (VAR_12 = 0; VAR_12 != VAR_11; VAR_12++)
 {
   tree VAR_13 = FUNC_6 (VAR_10, VAR_12);

   if (VAR_12)
     FUNC_13 (VAR_5);

   if (!VAR_13)
     FUNC_12 (VAR_5, "<template parameter error>");
   else
     FUNC_9 (VAR_13, VAR_9);
 }
    }
  else if (VAR_8)
    {
      tree VAR_14 = FUNC_2 (VAR_7);
      tree VAR_15 = FUNC_0 (VAR_14);
      int VAR_16, VAR_17;

      VAR_15 = FUNC_4 (VAR_15) == VAR_4 ? FUNC_5 (VAR_15) : VAR_0;
      VAR_16 = VAR_15 ? FUNC_7 (VAR_15) : 0;

      for (VAR_17 = 0; VAR_17 != VAR_16; VAR_17++)
 {
   tree VAR_18;

          if (FUNC_6 (VAR_15, VAR_17) == VAR_6)
            {
              FUNC_12 (VAR_5, "<template parameter error>");
              continue;
            }

          VAR_18 = FUNC_5 (FUNC_6 (VAR_15, VAR_17));

   if (VAR_17)
     FUNC_13 (VAR_5);

   FUNC_8 (VAR_18, VAR_9 & ~VAR_2);
 }
    }
  FUNC_11 (VAR_5);
}

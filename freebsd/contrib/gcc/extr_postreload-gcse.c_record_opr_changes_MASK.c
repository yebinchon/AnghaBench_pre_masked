
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 unsigned int FUNC_3 (scalar_t__) ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 unsigned int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ,unsigned int) ;
 scalar_t__ FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_17 (rtx VAR_5)
{
  rtx VAR_6;


  FUNC_14 (FUNC_6 (VAR_5), VAR_3, VAR_5);


  for (VAR_6 = FUNC_8 (VAR_5); VAR_6; VAR_6 = FUNC_12 (VAR_6, 1))
    if (FUNC_9 (VAR_6) == VAR_2)
      FUNC_16 (VAR_5, FUNC_7 (FUNC_12 (VAR_6, 0)));


  if (FUNC_1 (VAR_5))
    {
      unsigned int VAR_7, VAR_8;
      rtx VAR_9, VAR_10;

      for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
 if (FUNC_11 (VAR_4, VAR_7))
   FUNC_16 (VAR_5, VAR_7);

      for (VAR_9 = FUNC_0 (VAR_5); VAR_9; VAR_9 = FUNC_12 (VAR_9, 1))
 if (FUNC_4 (FUNC_12 (VAR_9, 0)) == VAR_0)
   {
     VAR_10 = FUNC_12 (FUNC_12 (VAR_9, 0), 0);
     if (FUNC_10 (VAR_10))
       {
  FUNC_13 (FUNC_5 (VAR_10));
         VAR_7 = FUNC_7 (VAR_10);
  VAR_8 = FUNC_3 (VAR_10);
  do
    FUNC_16 (VAR_5, VAR_7);
  while (++VAR_7 < VAR_8);
       }
   }

      if (! FUNC_2 (VAR_5))
 FUNC_15 (VAR_5);
    }
}

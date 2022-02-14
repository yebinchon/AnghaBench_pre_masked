
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (int ) ;
 unsigned int VAR_6 ;



 scalar_t__ FUNC_6 (int) ;
 int VAR_7 ;
 int FUNC_7 (int ,unsigned int,unsigned int,int) ;
 int FUNC_8 (int ,unsigned int,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (char,int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 scalar_t__ VAR_9 ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static bool
FUNC_14 (rtx VAR_10, unsigned int VAR_11, int VAR_12)
{
  if (VAR_11 == VAR_6 && VAR_12)
    {
      FUNC_10 ("\t.word\t", VAR_7);
      FUNC_13 (VAR_7, VAR_10);



      if (VAR_4 && VAR_8 && VAR_9 &&
   (FUNC_3 (VAR_10) == VAR_5 || FUNC_3 (VAR_10) == VAR_3))
 {
   if (FUNC_3 (VAR_10) == VAR_5
       && (FUNC_0 (VAR_10)
    || FUNC_5 (VAR_10)))
     FUNC_10 ("(GOTOFF)", VAR_7);
   else if (FUNC_3 (VAR_10) == VAR_3)
     FUNC_10 ("(GOTOFF)", VAR_7);
   else
     FUNC_10 ("(GOT)", VAR_7);
 }
      FUNC_9 ('\n', VAR_7);
      return 1;
    }

  if (FUNC_6 (FUNC_4 (VAR_10)))
    {
      int VAR_13, VAR_14;

      FUNC_11 (FUNC_3 (VAR_10) == VAR_2);

      VAR_14 = FUNC_2 (VAR_10);

      switch (FUNC_4 (VAR_10))
 {
 case 130: VAR_11 = 4; break;
 case 129: VAR_11 = 2; break;
 case 128: VAR_11 = 1; break;
 default:
   FUNC_12 ();
 }

      for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
 {
   rtx VAR_15;

   VAR_15 = FUNC_1 (VAR_10, VAR_13);
   FUNC_7
     (VAR_15, VAR_11, VAR_13 == 0 ? VAR_0 : VAR_11 * VAR_1, 1);
 }

      return 1;
    }

  return FUNC_8 (VAR_10, VAR_11, VAR_12);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (scalar_t__,char*,int,int,...) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static void
FUNC_11 (void)
{
  rtx VAR_5, VAR_6 = FUNC_9 ();
  int VAR_7 = 0, VAR_8 = 0;
  int VAR_9 = 0;
  for (VAR_5 = FUNC_9 (); VAR_5; VAR_5 = FUNC_3 (VAR_5))
    {

      VAR_7 += FUNC_10 (VAR_5);
      if (VAR_4)
        FUNC_6(VAR_4, "Insn %i estimated to %i bytes\n",
  FUNC_2 (VAR_5), FUNC_10 (VAR_5));
      if ((FUNC_1 (VAR_5) == VAR_3
    && FUNC_1 (FUNC_4 (VAR_5)) != VAR_1
    && FUNC_1 (FUNC_4 (VAR_5)) != VAR_0)
   || FUNC_1 (VAR_5) == VAR_2)
 VAR_8++;
      else
 continue;

      while (VAR_8 > 3)
 {
   VAR_6 = FUNC_3 (VAR_6);
   if ((FUNC_1 (VAR_6) == VAR_3
        && FUNC_1 (FUNC_4 (VAR_6)) != VAR_1
        && FUNC_1 (FUNC_4 (VAR_6)) != VAR_0)
       || FUNC_1 (VAR_6) == VAR_2)
     VAR_8--, VAR_9 = 1;
   else
     VAR_9 = 0;
   VAR_7 -= FUNC_10 (VAR_6);
 }
      FUNC_7 (VAR_8 >= 0);
      if (VAR_4)
        FUNC_6 (VAR_4, "Interval %i to %i has %i bytes\n",
  FUNC_2 (VAR_6), FUNC_2 (VAR_5), VAR_7);

      if (VAR_8 == 3 && VAR_9 && VAR_7 < 16)
 {
   int VAR_10 = 15 - VAR_7 + FUNC_10 (VAR_5);

   if (VAR_4)
     FUNC_6 (VAR_4, "Padding insn %i by %i bytes!\n",
       FUNC_2 (VAR_5), VAR_10);
          FUNC_5 (FUNC_8 (FUNC_0 (VAR_10)), VAR_5);
 }
    }
}

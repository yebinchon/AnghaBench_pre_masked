
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int *,char*,int) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 () ;

__attribute__((used)) static void
FUNC_14 (FILE *VAR_6)
{
  rtx VAR_7;
  rtx VAR_8 = 0;
  int VAR_9 = 0;

  FUNC_13 ();

  for (VAR_7 = FUNC_11 (); VAR_7; VAR_7 = FUNC_4 (VAR_7))
    {
      if (FUNC_1 (VAR_7) == VAR_0)
 {
   if (VAR_9)
     VAR_8 = VAR_7;
   VAR_9 = 0;
 }
      else if (FUNC_1 (VAR_7) == VAR_2
        && FUNC_5 (VAR_7) == VAR_3)
 {
   if (VAR_9)
     VAR_8 = VAR_7;
   VAR_9 = 0;
 }
      else if (FUNC_1 (VAR_7) == VAR_1
        && FUNC_1 (FUNC_6 (VAR_7)) == VAR_5
        && FUNC_7 (FUNC_6 (VAR_7), 1) == VAR_4)
 {
   FUNC_13 ();
   VAR_8 = 0;
 }
      else if (FUNC_2 (VAR_7))
 {
   VAR_9 = 1;

   if (FUNC_12 (VAR_7))
     {
       if (VAR_8)
  {
    if (VAR_6)
      FUNC_9 (VAR_6, "Emitting stop before label %d\n",
        FUNC_3 (VAR_8));
    FUNC_8 (FUNC_10 (FUNC_0 (3)), VAR_8);
    VAR_7 = VAR_8;

    FUNC_13 ();
    VAR_8 = 0;
  }
     }
 }
    }
}

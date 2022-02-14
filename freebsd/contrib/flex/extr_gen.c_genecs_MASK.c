
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int* VAR_1 ;
 int FUNC_3 (int ,char*,char*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (char,int ) ;
 char* FUNC_9 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_10 ()
{
 int VAR_4, VAR_5;
 int VAR_6;

 FUNC_7 (FUNC_5 (), "yy_ec", VAR_0);

 for (VAR_4 = 1; VAR_4 < VAR_0; ++VAR_4) {
  VAR_1[VAR_4] = FUNC_0 (VAR_1[VAR_4]);
  FUNC_6 (VAR_1[VAR_4]);
 }

 FUNC_2 ();

 if (VAR_3) {
  FUNC_4 (FUNC_1("\n\nEquivalence Classes:\n\n"), VAR_2);

  VAR_6 = VAR_0 / 8;

  for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_5) {
   for (VAR_4 = VAR_5; VAR_4 < VAR_0; VAR_4 = VAR_4 + VAR_6) {
    FUNC_3 (VAR_2, "%4s = %-2d",
      FUNC_9 (VAR_4), VAR_1[VAR_4]);

    FUNC_8 (' ', VAR_2);
   }

   FUNC_8 ('\n', VAR_2);
  }
 }
}

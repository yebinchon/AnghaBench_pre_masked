
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dfaacc_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_7 ;
 int FUNC_3 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t* VAR_12 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int VAR_13 ;
 int FUNC_6 (int,size_t) ;
 scalar_t__ VAR_14 ;

void FUNC_7 ()
{
 int VAR_15;
 int VAR_16 = VAR_10 + 1;


 if (VAR_7)
  FUNC_4 ("static yyconst struct yy_trans_info yy_transition[%d] =\n    {\n", VAR_13 + VAR_11 + 1);
 else
  FUNC_5 ("static yyconst struct yy_trans_info *yy_transition = 0;");
 while (VAR_13 + 2 >= VAR_5)
  FUNC_1 ();

 while (VAR_8 + 1 >= VAR_4)
  FUNC_3 ();

 VAR_2[VAR_8 + 1] = VAR_13 + 2;
 VAR_12[VAR_13 + 1] = VAR_16;
 VAR_3[VAR_13 + 1] = VAR_11 + 1;
 VAR_3[VAR_13 + 2] = 1;


 VAR_12[VAR_13 + 2] = 0;




 for (VAR_15 = 0; VAR_15 <= VAR_8; ++VAR_15) {
  int VAR_17 = VAR_6[VAR_15].dfaacc_state;
  int VAR_18 = VAR_2[VAR_15];

  VAR_3[VAR_18] = VAR_1;
  VAR_3[VAR_18 - 1] = VAR_0;
  VAR_12[VAR_18 - 1] = VAR_17;
 }

 for (VAR_15 = 0; VAR_15 <= VAR_13; ++VAR_15) {
  if (VAR_3[VAR_15] == VAR_1)
   FUNC_6 (0, VAR_2[VAR_8 + 1] - VAR_15);

  else if (VAR_3[VAR_15] == VAR_0)
   FUNC_6 (0, VAR_12[VAR_15]);

  else if (VAR_3[VAR_15] > VAR_11 || VAR_3[VAR_15] == 0)
   FUNC_6 (0, 0);

  else
   FUNC_6 (VAR_3[VAR_15],
            VAR_2[VAR_12[VAR_15]] - (VAR_15 -
              VAR_3[VAR_15]));
 }



 FUNC_6 (VAR_3[VAR_13 + 1], VAR_12[VAR_13 + 1]);
 FUNC_6 (VAR_3[VAR_13 + 2], VAR_12[VAR_13 + 2]);

 if (VAR_7)
  FUNC_5 ("    };\n");


 if (VAR_7)
  FUNC_4 ("static yyconst struct yy_trans_info *yy_start_state_list[%d] =\n", VAR_9 * 2 + 1);
 else
  FUNC_5 ("static yyconst struct yy_trans_info **yy_start_state_list =0;");

 if (VAR_7) {
  FUNC_5 ("    {");

  for (VAR_15 = 0; VAR_15 <= VAR_9 * 2; ++VAR_15)
   FUNC_4 ("    &yy_transition[%d],\n", VAR_2[VAR_15]);

  FUNC_0 ();
 }

 if (VAR_14)
  FUNC_2 ();
}

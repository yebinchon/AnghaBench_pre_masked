
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_2__ {int madbr; int maebr; int mhi; int mh; int ms; int mghi; int msgf; int msg; int m; int ml; int mult_df; int mxbr; int dlgr; int dlr; int dsgfr; int dr; int dsgr; int debr; int der; int ddbr; int ddr; int dxbr; int dxr; int sqebr; int sqdbr; int sqxbr; } ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;



 int const FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;


 int VAR_6 ;
 int FUNC_5 (int ,int) ;


 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 TYPE_1__* VAR_7 ;
 int FUNC_9 (int ,int ,int) ;

__attribute__((used)) static bool
FUNC_10 (rtx VAR_8, int VAR_9, int VAR_10, int *VAR_11)
{
  switch (VAR_9)
    {
    case 155:
    case 153:
    case 148:
    case 133:
    case 154:
    case 146:
      *VAR_11 = 0;
      return 1;

    case 158:
    case 157:
    case 147:
    case 139:
    case 138:
    case 159:
    case 149:
    case 129:
    case 142:
    case 141:
      *VAR_11 = FUNC_1 (1);
      return 0;

    case 140:
    case 145:

      if ((FUNC_3 (VAR_8) == 152 || FUNC_3 (VAR_8) == 137)
   && FUNC_2 (FUNC_5 (VAR_8, 0)) == 143
   && VAR_3 && VAR_4 && VAR_2)
 {

   if (FUNC_3 (VAR_8) == 152)
     *VAR_11 = VAR_7->madbr;
   else
     *VAR_11 = VAR_7->maebr;
   *VAR_11 += FUNC_8 (FUNC_5 (FUNC_5 (VAR_8, 0), 0), 143)
     + FUNC_8 (FUNC_5 (FUNC_5 (VAR_8, 0), 1), 143)
     + FUNC_8 (FUNC_5 (VAR_8, 1), VAR_9);
   return 1;
 }
      *VAR_11 = FUNC_1 (1);
      return 0;

    case 143:
      switch (FUNC_3 (VAR_8))
 {
 case 135:
   {
     rtx VAR_12 = FUNC_5 (VAR_8, 0);
     rtx VAR_13 = FUNC_5 (VAR_8, 1);
     if (FUNC_2 (VAR_13) == 153
  && FUNC_0 (FUNC_4 (VAR_13)))
       *VAR_11 = VAR_7->mhi;
     else if (FUNC_2 (VAR_12) == 136)
       *VAR_11 = VAR_7->mh;
     else
       *VAR_11 = VAR_7->ms;
     break;
   }
 case 150:
   {
     rtx VAR_14 = FUNC_5 (VAR_8, 0);
     rtx VAR_15 = FUNC_5 (VAR_8, 1);
     if (VAR_0)
       {
  if (FUNC_2 (VAR_15) == 153
      && FUNC_0 (FUNC_4 (VAR_15)))
    *VAR_11 = VAR_7->mghi;
  else if (FUNC_2 (VAR_14) == 136)
    *VAR_11 = VAR_7->msgf;
  else
    *VAR_11 = VAR_7->msg;
       }
     else
       {
  if (FUNC_2 (VAR_14) == 136
      && FUNC_2 (VAR_15) == 136)

    *VAR_11 = VAR_7->m;
  else if (FUNC_2 (VAR_14) == 128
    && FUNC_2 (VAR_15) == 128
    && VAR_1)

    *VAR_11 = VAR_7->ml;
  else

    *VAR_11 = FUNC_1 (40);
       }
     break;
   }
 case 137:
 case 152:
   *VAR_11 = VAR_7->mult_df;
   break;
 case 132:
   *VAR_11 = VAR_7->mxbr;
   break;
 default:
   return 0;
 }
      return 0;

    case 131:
    case 130:
      if (FUNC_3 (VAR_8) == VAR_5)
 *VAR_11 = VAR_7->dlgr;
      else if (FUNC_3 (VAR_8) == 150)
 {
   rtx VAR_16 = FUNC_5 (VAR_8, 1);
   if (FUNC_2 (VAR_16) == 128)
     *VAR_11 = VAR_7->dlr;
   else
     *VAR_11 = VAR_7->dlgr;
 }
      else if (FUNC_3 (VAR_8) == 135)
 *VAR_11 = VAR_7->dlr;
      return 0;

    case 151:
    case 144:
      if (FUNC_3 (VAR_8) == 150)
 {
   rtx VAR_17 = FUNC_5 (VAR_8, 1);
   if (FUNC_2 (VAR_17) == 128)
     if (VAR_0)
       *VAR_11 = VAR_7->dsgfr;
     else
       *VAR_11 = VAR_7->dr;
   else
     *VAR_11 = VAR_7->dsgr;
 }
      else if (FUNC_3 (VAR_8) == 135)
 *VAR_11 = VAR_7->dlr;
      else if (FUNC_3 (VAR_8) == 137)
 {
   if (VAR_4)
     *VAR_11 = VAR_7->debr;
   else
     *VAR_11 = VAR_7->der;
 }
      else if (FUNC_3 (VAR_8) == 152)
 {
   if (VAR_4)
     *VAR_11 = VAR_7->ddbr;
   else
     *VAR_11 = VAR_7->ddr;
 }
      else if (FUNC_3 (VAR_8) == 132)
 {
   if (VAR_4)
     *VAR_11 = VAR_7->dxbr;
   else
     *VAR_11 = VAR_7->dxr;
 }
      return 0;

    case 134:
      if (FUNC_3 (VAR_8) == 137)
 *VAR_11 = VAR_7->sqebr;
      else if (FUNC_3 (VAR_8) == 152)
 *VAR_11 = VAR_7->sqdbr;
      else
 *VAR_11 = VAR_7->sqxbr;
      return 0;

    case 136:
    case 128:
      if (VAR_10 == 143 || VAR_10 == 151 || VAR_10 == 144
   || VAR_10 == 140 || VAR_10 == 145
   || VAR_10 == 156)
 *VAR_11 = 0;
      return 0;

    case 156:
      *VAR_11 = FUNC_1 (1);
      if (FUNC_2 (FUNC_5 (VAR_8, 0)) == 159
   && FUNC_2 (FUNC_5 (VAR_8, 1)) == 153
   && FUNC_2 (FUNC_5 (FUNC_5 (VAR_8, 0), 1)) == 153)
 {
   rtx VAR_18 = FUNC_5 (FUNC_5 (VAR_8, 0), 0);
   rtx VAR_19 = FUNC_5 (FUNC_5 (VAR_8, 0), 1);
   rtx VAR_20 = FUNC_5 (VAR_8, 1);

   if (FUNC_6 (VAR_18, FUNC_3 (VAR_18))
       && FUNC_9 (VAR_19, VAR_20, 0) != VAR_6)
     return 1;
   if (FUNC_7 (VAR_18, FUNC_3 (VAR_18))
       && FUNC_9 (VAR_19, VAR_20, 1) != VAR_6)
     return 1;
 }
      return 0;

    default:
      return 0;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;



 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;






 int VAR_5 ;

 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;






 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_8 (scalar_t__,int ,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (char*,char const*) ;
 char* FUNC_15 (char*,char) ;
 int FUNC_16 (char*,char const*) ;
 scalar_t__ FUNC_17 (char const*) ;

const char *
FUNC_18 (rtx VAR_12, rtx VAR_13, int VAR_14, int VAR_15, int VAR_16,
  rtx VAR_17)
{
  static char VAR_18[64];
  enum rtx_code VAR_19 = FUNC_0 (VAR_12);
  rtx VAR_20 = FUNC_7 (VAR_12, 0);
  enum machine_mode VAR_21 = FUNC_1 (VAR_20);
  const char *VAR_22, *VAR_23;
  int VAR_24 = 8, VAR_25;
  char *VAR_26;
  VAR_25 = VAR_10 && (FUNC_11 (VAR_17) >= 3);
  if (VAR_15 ^ VAR_25)
    {


      if (VAR_21 == VAR_1 || VAR_21 == VAR_0)
 VAR_19 = FUNC_13 (VAR_19);
      else
 VAR_19 = FUNC_12 (VAR_19);
    }


  if (VAR_21 == VAR_1 || VAR_21 == VAR_0)
    {
      switch (VAR_19)
 {
 case 135:
   VAR_23 = "fbne";
   break;
 case 145:
   VAR_23 = "fbe";
   break;
 case 144:
   VAR_23 = "fbge";
   break;
 case 142:
   VAR_23 = "fbg";
   break;
 case 140:
   VAR_23 = "fble";
   break;
 case 138:
   VAR_23 = "fbl";
   break;
 case 128:
   VAR_23 = "fbu";
   break;
 case 134:
   VAR_23 = "fbo";
   break;
 case 131:
   VAR_23 = "fbug";
   break;
 case 129:
   VAR_23 = "fbul";
   break;
 case 133:
   VAR_23 = "fbue";
   break;
 case 132:
   VAR_23 = "fbuge";
   break;
 case 130:
   VAR_23 = "fbule";
   break;
 case 137:
   VAR_23 = "fblg";
   break;

 default:
   FUNC_10 ();
 }






      VAR_18[0] = '\0';
      if (! VAR_10)
 FUNC_16 (VAR_18, "nop\n\t");
      FUNC_14 (VAR_18, VAR_23);
    }
  else
    {
      switch (VAR_19)
 {
 case 135:
   VAR_23 = "bne";
   break;
 case 145:
   VAR_23 = "be";
   break;
 case 144:
   if (VAR_21 == VAR_4 || VAR_21 == VAR_2)
     VAR_23 = "bpos";
   else
     VAR_23 = "bge";
   break;
 case 142:
   VAR_23 = "bg";
   break;
 case 140:
   VAR_23 = "ble";
   break;
 case 138:
   if (VAR_21 == VAR_4 || VAR_21 == VAR_2)
     VAR_23 = "bneg";
   else
     VAR_23 = "bl";
   break;
 case 143:
   VAR_23 = "bgeu";
   break;
 case 141:
   VAR_23 = "bgu";
   break;
 case 139:
   VAR_23 = "bleu";
   break;
 case 136:
   VAR_23 = "blu";
   break;

 default:
   FUNC_10 ();
 }
      FUNC_16 (VAR_18, VAR_23);
    }
  VAR_24 -= FUNC_17 (VAR_23);
  VAR_26 = FUNC_15 (VAR_18, '\0');


  if (VAR_16 && ! VAR_25)
    {
      FUNC_16 (VAR_26, ",a");
      VAR_26 += 2;
      VAR_24 -= 2;
    }

  if (VAR_10)
    {
      rtx VAR_27;
      int VAR_28 = 0;

      if (! VAR_25 && VAR_17 && FUNC_3 ())
 {
   int VAR_29 = (FUNC_2 (FUNC_4 (VAR_13))
         - FUNC_2 (FUNC_4 (VAR_17)));

   if (VAR_29 < -260000 || VAR_29 >= 260000)
     VAR_28 = 1;
 }

      if (VAR_21 == VAR_1 || VAR_21 == VAR_0)
 {
   static char VAR_30[] = "%%fccX, ";

   VAR_30[5] = FUNC_6 (VAR_20) - VAR_9 + '0';
   VAR_22 = VAR_30;
   if (VAR_28)
     {
       FUNC_9 (FUNC_6 (VAR_20) == VAR_8);
       VAR_22 = "";
     }
 }
      else if (VAR_21 == VAR_3 || VAR_21 == VAR_2)
 {
   VAR_22 = "%%xcc, ";
   FUNC_9 (! VAR_28);
 }
      else
 {
   VAR_22 = "%%icc, ";
   if (VAR_28)
     VAR_22 = "";
 }

      if (*VAR_22 && VAR_17 && (VAR_27 = FUNC_8 (VAR_17, VAR_6, VAR_5)))
 {
   FUNC_16 (VAR_26,
    ((FUNC_5 (FUNC_7 (VAR_27, 0)) >= VAR_7 / 2) ^ VAR_25)
    ? ",pt" : ",pn");
   VAR_26 += 3;
   VAR_24 -= 3;
 }
    }
  else
    VAR_22 = "";

  if (VAR_24 > 0)
    *VAR_26++ = '\t';
  else
    *VAR_26++ = ' ';
  FUNC_16 (VAR_26, VAR_22);
  VAR_26 = FUNC_15 (VAR_26, '\0');
  if (VAR_25)
    {
      FUNC_16 (VAR_26, ".+12\n\t nop\n\tb\t");


      if (VAR_16 || ! VAR_11)
        VAR_26[3] = '6';
      VAR_26 += 14;
    }
  *VAR_26++ = '%';
  *VAR_26++ = 'l';
  *VAR_26++ = VAR_14 + '0';
  *VAR_26++ = '%';
  *VAR_26++ = '#';
  *VAR_26 = '\0';

  return VAR_18;
}

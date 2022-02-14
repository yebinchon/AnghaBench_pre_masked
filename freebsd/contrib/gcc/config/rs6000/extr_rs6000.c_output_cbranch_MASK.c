
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;



 int FUNC_2 (scalar_t__) ;






 scalar_t__ VAR_2 ;

 int FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;






 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,scalar_t__) ;
 int FUNC_8 () ;
 int FUNC_9 (scalar_t__) ;
 char** VAR_8 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_12 (char*,char*,char const*,...) ;
 int FUNC_13 (int,int) ;

char *
FUNC_14 (rtx VAR_10, const char *VAR_11, int VAR_12, rtx VAR_13)
{
  static char VAR_14[64];
  enum rtx_code VAR_15 = FUNC_0 (VAR_10);
  rtx VAR_16 = FUNC_4 (VAR_10, 0);
  enum machine_mode VAR_17 = FUNC_1 (VAR_16);
  int VAR_18 = FUNC_3 (VAR_16) - VAR_1;
  int VAR_19 = VAR_11 != ((void*)0) && FUNC_9 (VAR_13) == 8;
  int VAR_20 = VAR_12 ^ VAR_19;
  char *VAR_21 = VAR_14;
  const char *VAR_22;
  const char *VAR_23;
  rtx VAR_24;

  FUNC_13 (VAR_15, VAR_17);




  if (VAR_20)
    {


      if (VAR_17 == VAR_0)
 VAR_15 = FUNC_11 (VAR_15);
      else
 VAR_15 = FUNC_10 (VAR_15);
    }

  if ((VAR_5 && !VAR_6 && VAR_7) && VAR_17 == VAR_0)
    {


      switch (VAR_15)
 {
 case 145:

   VAR_15 = 142;
   break;

 case 135:
   VAR_15 = 130;
   break;

 default:
   FUNC_8 ();
 }
    }

  switch (VAR_15)
    {


    case 135: case 137:
      VAR_22 = "ne"; break;
    case 145: case 133:
      VAR_22 = "eq"; break;
    case 144: case 143:
      VAR_22 = "ge"; break;
    case 142: case 141: case 131:
      VAR_22 = "gt"; break;
    case 140: case 139:
      VAR_22 = "le"; break;
    case 138: case 136: case 129:
      VAR_22 = "lt"; break;
    case 128: VAR_22 = "un"; break;
    case 134: VAR_22 = "nu"; break;
    case 132: VAR_22 = "nl"; break;
    case 130: VAR_22 = "ng"; break;
    default:
      FUNC_8 ();
    }



  VAR_23 = "";
  VAR_24 = FUNC_7 (VAR_13, VAR_3, VAR_2);
  if (VAR_24 != VAR_2)
    {

      int VAR_25 = FUNC_2 (FUNC_4 (VAR_24, 0)) - VAR_4 / 2;







      if (VAR_9
   || (FUNC_5 (VAR_25) > VAR_4 / 100 * 48
       && FUNC_6 (VAR_24)))
 {
   if (FUNC_5 (VAR_25) > VAR_4 / 20
       && ((VAR_25 > 0) ^ VAR_19))
     VAR_23 = "+";
   else
     VAR_23 = "-";
 }
    }

  if (VAR_11 == ((void*)0))
    VAR_21 += FUNC_12 (VAR_21, "{b%sr|b%slr%s} ", VAR_22, VAR_22, VAR_23);
  else
    VAR_21 += FUNC_12 (VAR_21, "{b%s|b%s%s} ", VAR_22, VAR_22, VAR_23);



  if (VAR_8[VAR_18 + VAR_1][0] == '%')
    *VAR_21++ = '%';
  VAR_21 += FUNC_12 (VAR_21, "%s", VAR_8[VAR_18 + VAR_1]);

  if (VAR_11 != ((void*)0))
    {


      if (VAR_19)
 VAR_21 += FUNC_12 (VAR_21, ",$+8\n\tb %s", VAR_11);
      else
 VAR_21 += FUNC_12 (VAR_21, ",%s", VAR_11);
    }

  return VAR_14;
}

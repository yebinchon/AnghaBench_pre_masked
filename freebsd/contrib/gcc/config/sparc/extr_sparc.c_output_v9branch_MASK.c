
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int) ;
 char* FUNC_12 (char*,char) ;
 int FUNC_13 (char*,char*) ;

const char *
FUNC_14 (rtx VAR_5, rtx VAR_6, int VAR_7, int VAR_8, int VAR_9,
   int VAR_10, rtx VAR_11)
{
  static char VAR_12[64];
  enum rtx_code VAR_13 = FUNC_0 (VAR_5);
  enum machine_mode VAR_14 = FUNC_1 (FUNC_6 (VAR_5, 0));
  rtx VAR_15;
  int VAR_16;
  char *VAR_17;
  VAR_16 = FUNC_10 (VAR_11) >= 3;


  if (VAR_9 ^ VAR_16)
    VAR_13 = FUNC_11 (VAR_13);


  FUNC_8 (VAR_14 == VAR_0);



  switch (VAR_13)
    {
    case 128:
      FUNC_13 (VAR_12, "brnz");
      break;

    case 133:
      FUNC_13 (VAR_12, "brz");
      break;

    case 132:
      FUNC_13 (VAR_12, "brgez");
      break;

    case 129:
      FUNC_13 (VAR_12, "brlz");
      break;

    case 130:
      FUNC_13 (VAR_12, "brlez");
      break;

    case 131:
      FUNC_13 (VAR_12, "brgz");
      break;

    default:
      FUNC_9 ();
    }

  VAR_17 = FUNC_12 (VAR_12, '\0');


  if (VAR_10 && ! VAR_16)
    {
      FUNC_13 (VAR_17, ",a");
      VAR_17 += 2;
    }

  if (VAR_11 && (VAR_15 = FUNC_7 (VAR_11, VAR_2, VAR_1)))
    {
      FUNC_13 (VAR_17,
       ((FUNC_5 (FUNC_6 (VAR_15, 0)) >= VAR_3 / 2) ^ VAR_16)
       ? ",pt" : ",pn");
      VAR_17 += 3;
    }

  *VAR_17 = VAR_17 < VAR_12 + 8 ? '\t' : ' ';
  VAR_17++;
  *VAR_17++ = '%';
  *VAR_17++ = '0' + VAR_7;
  *VAR_17++ = ',';
  *VAR_17++ = ' ';
  if (VAR_16)
    {
      int VAR_18 = 1, VAR_19;

      if (FUNC_3 ())
 {
   VAR_19 = (FUNC_2 (FUNC_4 (VAR_6))
     - FUNC_2 (FUNC_4 (VAR_11)));

   if (VAR_19 >= -260000 && VAR_19 < 260000)
     VAR_18 = 0;
 }

      FUNC_13 (VAR_17, ".+12\n\t nop\n\t");


      if (VAR_10 || ! VAR_4)
        VAR_17[3] = '6';
      VAR_17 += 12;
      if (VAR_18)
 {
   FUNC_13 (VAR_17, "b\t");
   VAR_17 += 2;
 }
      else
 {
   FUNC_13 (VAR_17, "ba,pt\t%%xcc, ");
   VAR_17 += 13;
 }
    }
  *VAR_17++ = '%';
  *VAR_17++ = 'l';
  *VAR_17++ = '0' + VAR_8;
  *VAR_17++ = '%';
  *VAR_17++ = '#';
  *VAR_17 = '\0';

  return VAR_12;
}

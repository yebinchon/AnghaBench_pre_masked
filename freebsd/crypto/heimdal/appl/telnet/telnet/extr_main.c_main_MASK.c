
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 char VAR_0 ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int,int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 int FUNC_7 (int) ;
 int FUNC_8 (unsigned char*,unsigned char*) ;
 char VAR_5 ;
 int FUNC_9 (int ) ;
 int VAR_6 ;
 int FUNC_10 (int ,char*,char*,...) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (int,char**,char*) ;
 int FUNC_13 () ;
 char* VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (int *) ;
 char* VAR_9 ;
 char VAR_10 ;
 int FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_19 (char*,char*) ;
 scalar_t__ FUNC_20 (char*,char*,int) ;
 char* FUNC_21 (char*,char) ;
 int FUNC_22 (int,char**) ;
 int FUNC_23 () ;
 int VAR_13 ;
 int FUNC_24 (int) ;
 int VAR_14 ;

int
FUNC_25(int VAR_15, char **VAR_16)
{
 int VAR_17;
 char *VAR_18;

 FUNC_18(VAR_16[0]);





 FUNC_23();

 FUNC_3();

 if ((VAR_9 = FUNC_21(VAR_16[0], '/')))
  ++VAR_9;
 else
  VAR_9 = VAR_16[0];

 VAR_18 = ((void*)0);

 VAR_10 = (FUNC_20(VAR_9, "rlog", 4) == 0) ? '~' : VAR_0;






 VAR_1 = -1;

 if (VAR_15 == 2 && FUNC_19(VAR_16[1], "--version") == 0) {
     FUNC_15(((void*)0));
     FUNC_9(0);
 }
 if (VAR_15 == 2 && FUNC_19(VAR_16[1], "--help") == 0)
     FUNC_24(0);


 while((VAR_17 = FUNC_12(VAR_15, VAR_16,
      "78DEKLS:X:abcde:fFk:l:n:rxG")) != -1) {
  switch(VAR_17) {
  case '8':
   VAR_4 = 3;
   break;
  case '7':
   VAR_4 = 0;
   break;
  case 'b':
      VAR_2 = 3;
      break;
  case 'D': {

      char *VAR_19;
      if((VAR_19 = FUNC_11("DISPLAY")))
   FUNC_8((unsigned char*)"DISPLAY", (unsigned char*)VAR_19);
      break;
  }
  case 'E':
   VAR_10 = VAR_5 = VAR_0;
   break;
  case 'K':



   break;
  case 'L':
   VAR_4 |= 2;
   break;
  case 'S':
      {
   FUNC_10(VAR_12,
      "%s: Warning: -S ignored, no parsetos() support.\n",
        VAR_9);

      }
   break;
  case 'X':



   break;
  case 'a':
   VAR_1 = 1;
   break;
  case 'c':
   VAR_11 = 1;
   break;
  case 'd':
   VAR_3 = 1;
   break;
  case 'e':
   FUNC_16(VAR_7);
   break;
  case 'f':
  case 'F':
  case 'G':
   FUNC_10(VAR_12,
    "%s: Warning: -%c ignored, no Kerberos V5 support.\n",
    VAR_9, VAR_17);

   break;
  case 'k':
      FUNC_10(VAR_12,
       "%s: Warning: -k ignored, no Kerberos V4 support.\n",
       VAR_9);
      break;
  case 'l':
    if(VAR_1 == 0){
      FUNC_10(VAR_12, "%s: Warning: -K ignored\n", VAR_9);
      VAR_1 = -1;
    }
   VAR_18 = VAR_7;
   break;
  case 'n':
    FUNC_2(VAR_7);
   break;
  case 'r':
   VAR_10 = '~';
   break;
  case 'x':






   FUNC_10(VAR_12,
       "%s: Warning: -x ignored, no ENCRYPT support.\n",
        VAR_9);

   break;

  case '?':
  default:
   FUNC_24(1);

  }
 }

 if (VAR_1 == -1) {
 }

 if (VAR_1 == -1)
  VAR_1 = (VAR_10 == VAR_0) ? 0 : 1;

 VAR_15 -= VAR_8;
 VAR_16 += VAR_8;

 if (VAR_15) {
  char *VAR_20[7], **VAR_21 = VAR_20;

  if (VAR_15 > 2)
   FUNC_24(1);
  *VAR_21++ = VAR_9;
  if (VAR_18) {
   *VAR_21++ = "-l";
   *VAR_21++ = VAR_18;
  }
  *VAR_21++ = VAR_16[0];
  if (VAR_15 > 1)
   *VAR_21++ = VAR_16[1];
  *VAR_21 = 0;

  if (FUNC_17(VAR_13) != 0)
   FUNC_1(0);
  if (FUNC_22(VAR_21 - VAR_20, VAR_20) == 1)
   return (0);
  else
   return (1);
 }
 FUNC_17(VAR_13);
 for (;;) {
   FUNC_5(1, 0, 0);
 }
}

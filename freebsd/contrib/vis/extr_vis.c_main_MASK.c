
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int,char*) ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int,char**,char*) ;
 char* FUNC_6 () ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_7 (int *) ;
 int VAR_17 ;
 int * VAR_18 ;
 int FUNC_8 (char*,char*) ;

int
FUNC_9(int VAR_19, char *VAR_20[])
{
 FILE *VAR_21;
 int VAR_22;
 int VAR_23;

 while ((VAR_22 = FUNC_5(VAR_19, VAR_20, "bcde:F:fhlmnostw")) != -1)
  switch((char)VAR_22) {
  case 'b':
   VAR_9 |= VAR_3;
   break;
  case 'c':
   VAR_9 |= VAR_0;
   break;





  case 'e':
   VAR_10 = VAR_15;
   break;
  case 'F':
   if ((VAR_12 = FUNC_0(VAR_15)) < 5) {
    FUNC_1(1, "can't fold lines to less than 5 cols");

   }
   VAR_13++;
   break;
  case 'f':
   VAR_11++;
   break;
  case 'h':
   VAR_9 |= VAR_1;
   break;
  case 'l':
   VAR_13++;
   break;
  case 'm':
   VAR_9 |= VAR_2;
   if (VAR_12 == 80)
    VAR_12 = 76;
   break;
  case 'n':
   VAR_14++;
   break;
  case 'o':
   VAR_9 |= VAR_4;
   break;
  case 's':
   VAR_9 |= VAR_5;
   break;
  case 't':
   VAR_9 |= VAR_6;
   break;
  case 'w':
   VAR_9 |= VAR_7;
   break;
  case '?':
  default:
   (void)FUNC_4(VAR_17,
       "Usage: %s [-bcfhlmnostw] [-e extra]"
       " [-F foldwidth] [file ...]\n", FUNC_6());
   return 1;
  }

 if ((VAR_9 & (VAR_1|VAR_2)) ==
     (VAR_1|VAR_2))
  FUNC_1(1, "Can't specify -m and -h at the same time");

 VAR_19 -= VAR_16;
 VAR_20 += VAR_16;

 VAR_23 = 0;

 if (*VAR_20)
  while (*VAR_20) {
   if ((VAR_21 = FUNC_3(*VAR_20, "r")) != ((void*)0)) {
    FUNC_7(VAR_21);
    (void)FUNC_2(VAR_21);
   } else {
    FUNC_8("%s", *VAR_20);
    VAR_23 = 1;
   }
   VAR_20++;
  }
 else
  FUNC_7(VAR_18);
 return VAR_23;
}

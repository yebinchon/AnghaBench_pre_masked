
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,char*,char*) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (int,char**,char*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 char VAR_7 ;
 int FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (char*,struct stat*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_7 (char*,struct stat*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 () ;
 int VAR_10 ;
 int VAR_11 ;

int
FUNC_11(int VAR_12, char *VAR_13[])
{
 struct stat VAR_14;
 char *VAR_15, *VAR_16;
 int VAR_17, VAR_18;






 if ((VAR_15 = FUNC_9(VAR_13[0], '/')) == ((void*)0))
  VAR_15 = VAR_13[0];
 else
  ++VAR_15;
 if (FUNC_8(VAR_15, "link") == 0) {
  while (FUNC_4(VAR_12, VAR_13, "") != -1)
   FUNC_10();
  VAR_12 -= VAR_8;
  VAR_13 += VAR_8;
  if (VAR_12 != 2)
   FUNC_10();
  FUNC_3(FUNC_5(VAR_13[0], VAR_13[1], 0));
 }

 while ((VAR_17 = FUNC_4(VAR_12, VAR_13, "FLPfhinsvw")) != -1)
  switch (VAR_17) {
  case 'F':
   VAR_1 = 1;
   break;
  case 'L':
   VAR_2 = 0;
   break;
  case 'P':
   VAR_2 = 1;
   break;
  case 'f':
   VAR_4 = 1;
   VAR_6 = 0;
   VAR_11 = 0;
   break;
  case 'h':
  case 'n':
   VAR_5 = 1;
   break;
  case 'i':
   VAR_6 = 1;
   VAR_4 = 0;
   break;
  case 's':
   VAR_9 = 1;
   break;
  case 'v':
   VAR_10 = 1;
   break;
  case 'w':
   VAR_11 = 1;
   break;
  case '?':
  default:
   FUNC_10();
  }

 VAR_13 += VAR_8;
 VAR_12 -= VAR_8;

 VAR_7 = VAR_9 ? '-' : '=';
 if (VAR_9 == 0)
  VAR_1 = 0;
 if (VAR_1 == 1 && VAR_6 == 0) {
  VAR_4 = 1;
  VAR_11 = 0;
 }

 switch(VAR_12) {
 case 0:
  FUNC_10();

 case 1:
  FUNC_3(FUNC_5(VAR_13[0], ".", 1));
 case 2:
  FUNC_3(FUNC_5(VAR_13[0], VAR_13[1], 0));
 default:
  ;
 }

 VAR_16 = VAR_13[VAR_12 - 1];
 if (VAR_5 && FUNC_6(VAR_16, &VAR_14) == 0 && FUNC_1(VAR_14.st_mode)) {




  VAR_3 = VAR_0;
  FUNC_2(1, "%s", VAR_16);
 }
 if (FUNC_7(VAR_16, &VAR_14))
  FUNC_2(1, "%s", VAR_16);
 if (!FUNC_0(VAR_14.st_mode))
  FUNC_10();
 for (VAR_18 = 0; *VAR_13 != VAR_16; ++VAR_13)
  VAR_18 |= FUNC_5(*VAR_13, VAR_16, 1);
 FUNC_3(VAR_18);
}

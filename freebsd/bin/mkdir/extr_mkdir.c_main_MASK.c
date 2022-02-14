
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 char* FUNC_2 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int,char*,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*,int) ;
 int FUNC_7 (int,char**,char*) ;
 scalar_t__ FUNC_8 (char*,int) ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (char*,char*) ;
 void* FUNC_10 (char*) ;
 int FUNC_11 () ;
 int VAR_8 ;
 int FUNC_12 (char*,char*) ;

int
FUNC_13(int VAR_9, char *VAR_10[])
{
 int VAR_11, VAR_12, VAR_13, VAR_14;
 mode_t VAR_15;
 void *VAR_16 = ((void*)0);
 char *VAR_17;

 VAR_15 = VAR_14 = 0;
 VAR_17 = ((void*)0);
 while ((VAR_11 = FUNC_7(VAR_9, VAR_10, "m:pv")) != -1)
  switch(VAR_11) {
  case 'm':
   VAR_17 = VAR_6;
   break;
  case 'p':
   VAR_14 = 1;
   break;
  case 'v':
   VAR_8 = 1;
   break;
  case '?':
  default:
   FUNC_11();
  }

 VAR_9 -= VAR_7;
 VAR_10 += VAR_7;
 if (VAR_10[0] == ((void*)0))
  FUNC_11();

 if (VAR_17 == ((void*)0)) {
  VAR_15 = VAR_4 | VAR_2 | VAR_3;
 } else {
  if ((VAR_16 = FUNC_10(VAR_17)) == ((void*)0))
   FUNC_3(1, "invalid file mode: %s", VAR_17);
  VAR_15 = FUNC_6(VAR_16, VAR_4 | VAR_2 | VAR_3);
  FUNC_5(VAR_16);
 }

 for (VAR_12 = 0; *VAR_10 != ((void*)0); ++VAR_10) {
  if (VAR_14) {
   VAR_13 = FUNC_0(*VAR_10, VAR_15);
  } else if (FUNC_8(*VAR_10, VAR_15) < 0) {
   if (VAR_5 == VAR_1 || VAR_5 == VAR_0)
    FUNC_12("%s", FUNC_2(*VAR_10));
   else
    FUNC_12("%s", *VAR_10);
   VAR_13 = 0;
  } else {
   VAR_13 = 1;
   if (VAR_8)
    (void)FUNC_9("%s\n", *VAR_10);
  }
  if (!VAR_13)
   VAR_12 = 1;
  if (VAR_13 == 1 && VAR_17 != ((void*)0) && FUNC_1(*VAR_10, VAR_15) == -1) {
   FUNC_12("%s", *VAR_10);
   VAR_12 = 1;
  }
 }
 FUNC_4(VAR_12);
}
